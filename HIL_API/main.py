import os
from hil_simulation import (launch_control_center, compile_if_needed,
                             load_model, set_scada_input,
                             start_simulation_and_capture,
                             schedule_contactor_close, run_loop, stop_simulation)
from plotting import (setup_output_dirs, get_run_paths,
                      plot_dq_currents_comparison, plot_dq_currents_zoom)

TSE_FILE = r'C:\workspace\Typhoon_USE\Real_time_sim_VHIL\dq_current_ctrl_v3_vhil.tse'
EXE_PATH = r'C:\Program Files\Typhoon HIL Control Center 2025.4\typhoon_hil.exe'
BASE_DIR   = r'c:\workspace\Typhoon_USE\HIL_API'
FIG_NAME   = 'step_id_ref_iq_ref'
SIGNALS    = ['SCADA.is_d_ref', 'SCADA.is_q_ref', 'SCADA.id', 'SCADA.iq', 'SCADA.tau_c']
EVENTS     = [
    {'time': 1.1, 'input': 'SCADA.startAC',  'value': 1,     'requires': None},
    {'time': 1.5, 'input': 'SCADA.i_d_ref',  'value': 10.0,  'requires': 'SCADA.startAC'},
    {'time': 2.0, 'input': 'SCADA.i_q_ref',  'value': -10.0, 'requires': 'SCADA.startAC'},
]

TAU_C_VALUES = [1e-3, 2e-3, 5e-3]

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

comp_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_comparison.svg')
comp_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_comparison.pdf')
plot_dq_currents_comparison(runs, comp_svg, comp_pdf)

zoom1_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_zoom_1p5s.svg')
zoom1_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_zoom_1p5s.pdf')
plot_dq_currents_zoom(runs, zoom_time=1.5, half_window=0.3, svg_path=zoom1_svg, pdf_path=zoom1_pdf)

zoom2_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_zoom_2p0s.svg')
zoom2_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_zoom_2p0s.pdf')
plot_dq_currents_zoom(runs, zoom_time=2.0, half_window=0.3, svg_path=zoom2_svg, pdf_path=zoom2_pdf)
