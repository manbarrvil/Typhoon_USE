import os
import subprocess
import typhoon.api.hil as hil
import time
import pandas as pd
import matplotlib.pyplot as plt

_procs = subprocess.run(['tasklist', '/FI', 'IMAGENAME eq typhoon_hil.exe'], capture_output=True, text=True)
if 'typhoon_hil.exe' not in _procs.stdout:
    subprocess.Popen(r'C:\Program Files\Typhoon HIL Control Center 2025.4\typhoon_hil.exe')
    print("Opening Typhoon HIL Control Center...")
else:
    print("Typhoon HIL Control Center is already running.")

# Load compiled model using TyphoonSim (virtual HIL device, no hardware needed)
hil.load_model(
    file=r'C:\workspace\Typhoon_USE\Real_time_sim_VHIL\dq_current_ctrl_v3_vhil Target files\dq_current_ctrl_v3_vhil.cpd',
    offlineMode=False,
    vhil_device=True
)
print("Model loaded successfully.")

# Create results and figure folders
BASE_DIR = r'c:\workspace\Typhoon_USE\HIL_API'
LOG_FILE = os.path.join(BASE_DIR, r'results\step_id_ref_iq_ref.csv')
FIG_NAME = 'step_id_ref_iq_ref'
os.makedirs(os.path.join(BASE_DIR, 'results'), exist_ok=True)
os.makedirs(os.path.join(BASE_DIR, r'results\fig\svg'), exist_ok=True)
os.makedirs(os.path.join(BASE_DIR, r'results\fig\pdf'), exist_ok=True)

# Start simulation
hil.start_simulation()
print("Simulation started.")

# Start capture at 50 µs resolution → saved directly to CSV
sim_step     = hil.get_sim_step()
_capture_buf = []
hil.start_capture(
    cpSettings=[50, 4, 10_000_000, False],  # decimation=50 → 1 sample every 50 µs, 4 channels, 10M samples
    trSettings=['Forced'],
    chSettings=[['SCADA.is_d_ref', 'SCADA.is_q_ref', 'SCADA.id', 'SCADA.iq'], []],
    dataBuffer=_capture_buf,
    fileName=LOG_FILE
)
print(f"Capture started at 50 µs resolution → {LOG_FILE}")

# Schedule contactor Plant.S1 close
close_at   = 1.0  # simulation seconds
execute_at = sim_step * int(close_at / sim_step)
hil.set_contactor('Plant.S1', swControl=True, swState=False, executeAt=None)   # initially open
hil.set_contactor('Plant.S1', swControl=True, swState=True,  executeAt=execute_at)  # close at close_at s
print(f"Contactor Plant.S1 scheduled to close at t={execute_at:.4f} s  (sim_step={sim_step} s)")

startAC_triggered  = False
i_d_ref_triggered  = False
i_q_ref_triggered  = False
last_print_sim_time = -1.0  # print every ~0.1 simulation seconds

try:
    print("Reading signals... Press Ctrl+C to stop.")
    while True:
        sim_time    = hil.get_sim_time()

        if not startAC_triggered and sim_time >= 1.1:
            hil.set_scada_input_value('SCADA.startAC', 1)
            startAC_triggered = True
            print(f"t={sim_time:.4f} s  |  SCADA Input 'startAC' → 1")

        if startAC_triggered and not i_d_ref_triggered and sim_time >= 1.5:
            hil.set_scada_input_value('SCADA.i_d_ref', 10.0)
            i_d_ref_triggered = True
            print(f"t={sim_time:.4f} s  |  SCADA Input 'i_d_ref' → 10.0 A")

        if startAC_triggered and not i_q_ref_triggered and sim_time >= 2.0:
            hil.set_scada_input_value('SCADA.i_q_ref', -10.0)
            i_q_ref_triggered = True
            print(f"t={sim_time:.4f} s  |  SCADA Input 'i_q_ref' → -10.0 A")

        if sim_time - last_print_sim_time >= 0.1:
            voltage_val = hil.read_analog_signal(name="Plant.VDC")
            is_d_ref    = hil.read_analog_signal(name="SCADA.is_d_ref")
            scada_id    = hil.read_analog_signal(name="SCADA.id")
            is_q_ref    = hil.read_analog_signal(name="SCADA.is_q_ref")
            scada_iq    = hil.read_analog_signal(name="SCADA.iq")
            contactor_state = "Closed" if scada_id != 0.0 else "Opened"
            print(f"t={sim_time:.2f} s  |  Voltage = {voltage_val:.2f} V  |  SCADA.is_d_ref = {is_d_ref:.2f} A  |  SCADA.id = {scada_id:.2f}  |  SCADA.is_q_ref = {is_q_ref:.2f} A  |  SCADA.iq = {scada_iq:.2f}  |  Plant.S1 = {contactor_state}")
            last_print_sim_time = sim_time

        if sim_time >= 2.5:
            print("Simulation time reached 2.5 s — stopping.")
            break

        # Tight loop until all timed events are dispatched, then relax
        all_triggered = startAC_triggered and i_d_ref_triggered and i_q_ref_triggered
        time.sleep(0.01 if all_triggered else 0.0)

except KeyboardInterrupt:
    print("\nStopped by user.")

finally:
    hil.stop_capture()
    hil.stop_simulation()
    print("Simulation stopped successfully.")

# Plot results from CSV
print("Generating figures...")
df = pd.read_csv(LOG_FILE)
time_col = df.columns[0]

fig, axes = plt.subplots(2, 1, figsize=(10, 8), sharex=True)
fig.suptitle('Simulation Results')

axes[0].plot(df[time_col], df['SCADA.id'],        label=r'$i_{sd}$',           zorder=1)
axes[0].plot(df[time_col], df['SCADA.is_d_ref'], label=r'$i_{sd}^{\star}$',   color='orange', linestyle='--', linewidth=2, zorder=2)
axes[0].set_ylabel('Current (A)')
axes[0].legend()
axes[0].grid(True)

axes[1].plot(df[time_col], df['SCADA.iq'],        label=r'$i_{sq}$',           zorder=1)
axes[1].plot(df[time_col], df['SCADA.is_q_ref'], label=r'$i_{sq}^{\star}$',   color='orange', linestyle='--', linewidth=2, zorder=2)
axes[1].set_ylabel('Current (A)')
axes[1].set_xlabel('Time (s)')
axes[1].legend()
axes[1].grid(True)

plt.tight_layout()

svg_path = os.path.join(BASE_DIR, 'results', 'fig', 'svg', FIG_NAME + '.svg')
pdf_path = os.path.join(BASE_DIR, 'results', 'fig', 'pdf', FIG_NAME + '.pdf')
fig.savefig(svg_path)
fig.savefig(pdf_path)
print(f"Figures saved → {svg_path}")
print(f"              → {pdf_path}")
plt.close(fig)
