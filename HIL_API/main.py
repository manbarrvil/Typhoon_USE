import os
import webbrowser
import dashboard
from hil_simulation import (launch_control_center, kill_control_center,
                             compile_if_needed,
                             load_model, set_scada_input,
                             start_simulation_and_capture,
                             schedule_contactor_close, run_loop, stop_simulation)
from plotting import (setup_output_dirs, get_run_paths,
                      plot_dq_currents_comparison, plot_dq_currents_zoom)

TSE_FILE     = r'C:\workspace\Typhoon_USE\Real_time_sim_VHIL\dq_current_ctrl_v3_vhil.tse'
EXE_PATH     = r'C:\Program Files\Typhoon HIL Control Center 2026.2\typhoon_hil.exe'
BASE_DIR     = r'c:\workspace\Typhoon_USE\HIL_API'
FIG_NAME     = 'step_id_ref_iq_ref'
SIGNALS      = ['SCADA.is_d_ref', 'SCADA.is_q_ref', 'SCADA.id', 'SCADA.iq']
EVENTS       = [
    {'time': 1.1, 'input': 'SCADA.startAC',  'value': 1,     'requires': None},
    {'time': 1.5, 'input': 'SCADA.i_d_ref',  'value': 10.0,  'requires': 'SCADA.startAC'},
    {'time': 2.0, 'input': 'SCADA.i_q_ref',  'value': -10.0, 'requires': 'SCADA.startAC'},
]
TAU_C_VALUES = [1e-3, 5e-3, 10e-3]


def run_batch():
    """Parametric sweep over TAU_C_VALUES — saves CSVs and generates figures."""
    results_dir = setup_output_dirs(BASE_DIR)
    launch_control_center(EXE_PATH)
    cpd_path = compile_if_needed(TSE_FILE)

    runs = []
    for tau_c in TAU_C_VALUES:
        log_file, svg_path, pdf_path = get_run_paths(results_dir, FIG_NAME, tau_c)
        print(f"\n{'='*50}")
        print(f"  tau_c = {tau_c}")
        print(f"{'='*50}")
        load_model(cpd_path)
        sim_step = start_simulation_and_capture(log_file, SIGNALS)
        set_scada_input('SCADA.tau_c', tau_c)
        schedule_contactor_close('Plant.S1', close_at_s=1.0, sim_step=sim_step)
        run_loop(stop_at_s=2.5, events=EVENTS)
        stop_simulation(log_file)
        runs.append({'log_file': log_file, 'tau_c': tau_c})

    kill_control_center()

    comp_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_comparison.svg')
    comp_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_comparison.pdf')
    plot_dq_currents_comparison(runs, comp_svg, comp_pdf)

    zoom1_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_zoom_1p5s.svg')
    zoom1_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_zoom_1p5s.pdf')
    plot_dq_currents_zoom(runs, zoom_time=1.5, half_window=0.1,
                          svg_path=zoom1_svg, pdf_path=zoom1_pdf)

    zoom2_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_zoom_2p0s.svg')
    zoom2_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_zoom_2p0s.pdf')
    plot_dq_currents_zoom(runs, zoom_time=2.0, half_window=0.1,
                          svg_path=zoom2_svg, pdf_path=zoom2_pdf)


def _run_one(cpd_path, results_dir, tau_c):
    """Execute a single simulation run and return the log_file path."""
    log_file, _, _ = get_run_paths(results_dir, FIG_NAME, tau_c)
    dashboard.new_run()
    dashboard.set_status("running")
    load_model(cpd_path)
    sim_step = start_simulation_and_capture(log_file, SIGNALS)
    set_scada_input('SCADA.tau_c', tau_c)
    schedule_contactor_close('Plant.S1', close_at_s=1.0, sim_step=sim_step)
    run_loop(stop_at_s=2.5, events=EVENTS, signal_callback=dashboard.push_signals)
    stop_simulation(log_file)
    print(f"Run complete — results saved to {log_file}")
    return log_file


def run_interactive():
    """
    Interactive dashboard: opens a browser where the user selects tau_c
    and watches live id/iq signals. Runs indefinitely until Ctrl+C.
    Supports single run and batch sweep with comparison plots.
    """
    results_dir = setup_output_dirs(BASE_DIR)
    launch_control_center(EXE_PATH)
    cpd_path = compile_if_needed(TSE_FILE)

    url = dashboard.start()
    webbrowser.open(url)

    print("Interactive dashboard open. Set tau_c in the browser and click Run.")
    print("Press Ctrl+C to stop.\n")

    try:
        while True:
            dashboard.set_status("idle")
            dashboard.clear_batch_info()
            req = dashboard.wait_for_run_request()

            if req['mode'] == 'single':
                tau_c = req['tau_c']
                print(f"\ntau_c = {tau_c}  — single run...")
                _run_one(cpd_path, results_dir, tau_c)
                dashboard.set_status("done")

            elif req['mode'] == 'batch':
                tau_c_values = req['tau_c_values']
                print(f"\nBatch sweep: {tau_c_values}")
                runs = []
                for i, tau_c in enumerate(tau_c_values, 1):
                    print(f"\n[{i}/{len(tau_c_values)}] tau_c = {tau_c}")
                    dashboard.set_batch_info(i, len(tau_c_values), tau_c)
                    log_file = _run_one(cpd_path, results_dir, tau_c)
                    runs.append({'log_file': log_file, 'tau_c': tau_c})

                dashboard.set_status("batch_done")
                dashboard.clear_batch_info()
                print("\nGenerating comparison figures...")

                comp_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_comparison.svg')
                comp_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_comparison.pdf')
                plot_dq_currents_comparison(runs, comp_svg, comp_pdf)

                zoom1_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_zoom_1p5s.svg')
                zoom1_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_zoom_1p5s.pdf')
                plot_dq_currents_zoom(runs, zoom_time=1.5, half_window=0.1,
                                      svg_path=zoom1_svg, pdf_path=zoom1_pdf)

                zoom2_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_zoom_2p0s.svg')
                zoom2_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_zoom_2p0s.pdf')
                plot_dq_currents_zoom(runs, zoom_time=2.0, half_window=0.1,
                                      svg_path=zoom2_svg, pdf_path=zoom2_pdf)
                print("Batch complete — comparison figures saved.")

    except KeyboardInterrupt:
        print("\nInteractive mode stopped.")
        kill_control_center()


if __name__ == '__main__':
    run_interactive()
