import os
import subprocess
import time
import numpy as np
import pandas as pd
import typhoon.api.hil as hil
from typhoon.api.schematic_editor import model as sch

# Module-level buffer: keeps a Python reference alive across the capture session.
# After stop_capture(), buf = [signal_names, y_data_matrix, x_time_array]
_capture_buf = []


def compile_if_needed(tse_file):
    """Compile TSE → CPD only when TSE is newer than CPD or CPD is missing."""
    tse_name = os.path.splitext(os.path.basename(tse_file))[0]
    cpd_path = os.path.join(
        os.path.dirname(tse_file),
        f"{tse_name} Target files",
        f"{tse_name}.cpd"
    )
    if os.path.exists(cpd_path) and os.path.getmtime(cpd_path) >= os.path.getmtime(tse_file):
        print("Model up to date — skipping compilation.")
        return cpd_path
    print("TSE has changed (or CPD missing) — compiling...")
    sch.load(tse_file)
    sch.compile()
    print(f"Compilation complete → {cpd_path}")
    return cpd_path


def launch_control_center(exe_path):
    _procs = subprocess.run(['tasklist', '/FI', 'IMAGENAME eq typhoon_hil.exe'],
                            capture_output=True, text=True)
    if 'typhoon_hil.exe' not in _procs.stdout:
        subprocess.Popen(exe_path)
        print("Opening Typhoon HIL Control Center...")
    else:
        print("Typhoon HIL Control Center is already running.")


def kill_control_center():
    subprocess.run(['taskkill', '/F', '/IM', 'typhoon_hil.exe'],
                   capture_output=True, text=True)
    print("Typhoon HIL Control Center process terminated.")


def load_model(file_path, vhil_device=True):
    hil.load_model(file=file_path, offlineMode=False, vhil_device=vhil_device)
    print("Model loaded successfully.")


def set_scada_input(name, value):
    hil.set_scada_input_value(name, value)
    print(f"SCADA Input '{name}' → {value}")


def start_simulation_and_capture(log_file, signals, decimation=50, n_samples=10_000_000):
    results_dir = os.path.dirname(log_file)
    os.makedirs(results_dir, exist_ok=True)
    os.makedirs(os.path.join(results_dir, 'fig', 'svg'), exist_ok=True)
    os.makedirs(os.path.join(results_dir, 'fig', 'pdf'), exist_ok=True)

    if os.path.exists(log_file):
        os.remove(log_file)

    hil.start_simulation()
    print("Simulation started.")

    global _capture_buf
    _capture_buf = []   # reset for this run; module-level ref keeps it alive
    sim_step = hil.get_sim_step()
    hil.start_capture(
        cpSettings=[decimation, len(signals), n_samples, False],
        trSettings=['Forced'],
        chSettings=[signals, []],
        dataBuffer=_capture_buf,
        fileName=log_file
    )
    print(f"Capture started at {decimation * sim_step * 1e6:.0f} µs resolution → {log_file}")
    return sim_step


def schedule_contactor_close(name, close_at_s, sim_step):
    execute_at = sim_step * int(close_at_s / sim_step)
    hil.set_contactor(name, swControl=True, swState=False, executeAt=None)
    hil.set_contactor(name, swControl=True, swState=True, executeAt=execute_at)
    print(f"Contactor {name} scheduled to close at t={execute_at:.4f} s  (sim_step={sim_step} s)")


def run_loop(stop_at_s, events, print_interval_s=0.1, signal_callback=None):
    """
    signal_callback(t, id_val, iq_val, is_d_ref, is_q_ref) — optional hook called
    on every print interval; used by the web dashboard for live streaming.
    """
    triggered         = set()
    last_print_time   = -1.0
    pending_events    = [e for e in events]

    try:
        print("Reading signals... Press Ctrl+C to stop.")
        while True:
            sim_time = hil.get_sim_time()

            for event in pending_events[:]:
                req = event.get('requires')
                if sim_time >= event['time'] and (req is None or req in triggered):
                    hil.set_scada_input_value(event['input'], event['value'])
                    triggered.add(event['input'])
                    pending_events.remove(event)
                    print(f"t={sim_time:.4f} s  |  SCADA Input '{event['input']}' → {event['value']}")

            # Skip reads while events are still pending: read_analog_signal for
            # SCADA probes blocks for real-time seconds, advancing sim_time by a
            # variable amount and causing inconsistent step timing across runs.
            # Reads resume once all events have fired.
            if not pending_events and sim_time - last_print_time >= print_interval_s:
                voltage_val = hil.read_analog_signal(name="Plant.VDC")
                is_d_ref    = hil.read_analog_signal(name="SCADA.is_d_ref")
                scada_id    = hil.read_analog_signal(name="SCADA.id")
                is_q_ref    = hil.read_analog_signal(name="SCADA.is_q_ref")
                scada_iq    = hil.read_analog_signal(name="SCADA.iq")
                contactor_state = "Closed" if scada_id != 0.0 else "Opened"
                print(f"t={sim_time:.2f} s  |  Voltage = {voltage_val:.2f} V  |"
                      f"  SCADA.is_d_ref = {is_d_ref:.2f} A  |  SCADA.id = {scada_id:.2f}  |"
                      f"  SCADA.is_q_ref = {is_q_ref:.2f} A  |  SCADA.iq = {scada_iq:.2f}  |"
                      f"  Plant.S1 = {contactor_state}")
                if signal_callback is not None:
                    signal_callback(sim_time, scada_id, scada_iq, is_d_ref, is_q_ref)
                last_print_time = sim_time
            elif pending_events:
                # Advance the print timer so reads don't burst immediately after events clear
                last_print_time = sim_time

            if sim_time >= stop_at_s:
                print(f"Simulation time reached {stop_at_s} s — stopping.")
                break

            time.sleep(0.0 if pending_events else 0.01)

    except KeyboardInterrupt:
        print("\nStopped by user.")


def _write_csv_from_buffer(log_file):
    """Write captured signal data from _capture_buf to a CSV file.

    Typhoon HIL populates the buffer as [signal_names, y_data, x_data] where
    y_data has shape (n_channels, n_samples) and x_data is the time vector.
    """
    if not _capture_buf:
        print("[WARNING] Capture buffer empty — no data to write.")
        return False
    try:
        # Buffer format: one tuple → (signal_names, y_data, x_data)
        ch_names, y_data, x_data = _capture_buf[0]
        ch_names = list(ch_names)
        y_data   = np.array(y_data)   # (n_channels, n_samples)
        x_data   = np.array(x_data)   # (n_samples,)

        # Guard: if y_data came back transposed as (n_samples, n_channels), flip it
        if y_data.ndim == 2 and y_data.shape[0] == len(x_data):
            y_data = y_data.T

        cols = ['time'] + ch_names
        data = np.column_stack([x_data] + [y_data[i] for i in range(len(ch_names))])
        pd.DataFrame(data, columns=cols).to_csv(log_file, index=False)
        return True
    except Exception as exc:
        print(f"[WARNING] Could not write CSV from buffer: {exc}")
        print(f"  buffer len={len(_capture_buf)}, "
              f"element type={type(_capture_buf[0]).__name__ if _capture_buf else 'N/A'}, "
              f"element value (truncated)={repr(_capture_buf[0])[:200] if _capture_buf else 'N/A'}")
        return False


def stop_simulation(log_file=None):
    hil.stop_capture()
    hil.stop_simulation()
    if log_file:
        # Give the fileName-based async write a brief chance first (3 s)
        for _ in range(6):
            if os.path.exists(log_file) and os.path.getsize(log_file) > 0:
                break
            time.sleep(0.5)

        if os.path.exists(log_file) and os.path.getsize(log_file) > 0:
            size_kb = os.path.getsize(log_file) / 1024
            print(f"Simulation stopped. CSV saved ({size_kb:.1f} KB) → {log_file}")
        else:
            # Typhoon did not write via fileName → write from the in-memory buffer
            if _write_csv_from_buffer(log_file):
                size_kb = os.path.getsize(log_file) / 1024
                print(f"Simulation stopped. CSV written from buffer "
                      f"({size_kb:.1f} KB) → {log_file}")
            else:
                print(f"[WARNING] CSV not created: {log_file}")
    else:
        print("Simulation stopped successfully.")
