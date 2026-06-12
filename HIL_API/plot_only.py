import os
from plotting import (setup_output_dirs, get_run_paths,
                      plot_dq_currents_comparison, plot_dq_currents_zoom)

BASE_DIR     = r'c:\workspace\Typhoon_USE\HIL_API'
FIG_NAME     = 'step_id_ref_iq_ref'
TAU_C_VALUES = [1e-3, 2e-3, 5e-3]

results_dir = setup_output_dirs(BASE_DIR)

runs = []
for tau_c in TAU_C_VALUES:
    log_file, svg_path, pdf_path = get_run_paths(results_dir, FIG_NAME, tau_c)
    if not os.path.exists(log_file):
        print(f"[WARNING] CSV not found, skipping: {log_file}")
        continue
    runs.append({'log_file': log_file, 'tau_c': tau_c})

if not runs:
    raise SystemExit("No CSV files found — run main.py first.")

comp_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_comparison.svg')
comp_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_comparison.pdf')
plot_dq_currents_comparison(runs, comp_svg, comp_pdf)

zoom1_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_zoom_1p5s.svg')
zoom1_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_zoom_1p5s.pdf')
plot_dq_currents_zoom(runs, zoom_time=1.5, half_window=0.3, svg_path=zoom1_svg, pdf_path=zoom1_pdf)

zoom2_svg = os.path.join(results_dir, 'fig', 'svg', FIG_NAME + '_zoom_2p0s.svg')
zoom2_pdf = os.path.join(results_dir, 'fig', 'pdf', FIG_NAME + '_zoom_2p0s.pdf')
plot_dq_currents_zoom(runs, zoom_time=2.0, half_window=0.3, svg_path=zoom2_svg, pdf_path=zoom2_pdf)
