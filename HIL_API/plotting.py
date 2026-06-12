import os
import pandas as pd
import matplotlib.pyplot as plt


def setup_output_dirs(base_dir):
    """Create results/fig/svg and results/fig/pdf. Return results_dir."""
    results_dir = os.path.join(base_dir, 'results')
    os.makedirs(os.path.join(results_dir, 'fig', 'svg'), exist_ok=True)
    os.makedirs(os.path.join(results_dir, 'fig', 'pdf'), exist_ok=True)
    return results_dir


def get_run_paths(results_dir, fig_name, tau_c):
    """Return (log_file, svg_path, pdf_path) for a single tau_c run."""
    suffix = f'_tau_c_{tau_c}'
    log_file = os.path.join(results_dir, fig_name + suffix + '.csv')
    svg_path = os.path.join(results_dir, 'fig', 'svg', fig_name + suffix + '.svg')
    pdf_path = os.path.join(results_dir, 'fig', 'pdf', fig_name + suffix + '.pdf')
    return log_file, svg_path, pdf_path


def plot_dq_currents(log_file, svg_path, pdf_path):
    print("Generating figures...")
    df = pd.read_csv(log_file)
    t = df[df.columns[0]]

    fig, axes = plt.subplots(2, 1, figsize=(10, 8), sharex=True)
    fig.suptitle('Simulation Results')

    axes[0].plot(t, df['SCADA.id'],       label=r'$i_{sd}$',        zorder=1)
    axes[0].plot(t, df['SCADA.is_d_ref'], label=r'$i_{sd}^{\star}$',
                 color='orange', linestyle='--', linewidth=2,        zorder=2)
    axes[0].set_ylabel('Current (A)')
    axes[0].legend()
    axes[0].grid(True)

    axes[1].plot(t, df['SCADA.iq'],       label=r'$i_{sq}$',        zorder=1)
    axes[1].plot(t, df['SCADA.is_q_ref'], label=r'$i_{sq}^{\star}$',
                 color='orange', linestyle='--', linewidth=2,        zorder=2)
    axes[1].set_ylabel('Current (A)')
    axes[1].set_xlabel('Time (s)')
    axes[1].legend()
    axes[1].grid(True)

    plt.tight_layout()
    fig.savefig(svg_path)
    fig.savefig(pdf_path)
    print(f"Figures saved → {svg_path}")
    print(f"              → {pdf_path}")
    plt.close(fig)


def plot_dq_currents_comparison(runs, svg_path, pdf_path):
    """
    Overlay all tau_c runs on a single 2-subplot figure.
    runs: list of {'log_file': str, 'tau_c': float}
    """
    print("Generating comparison figure...")
    fig, axes = plt.subplots(2, 1, figsize=(12, 8), sharex=True)
    fig.suptitle(r'Parametric sweep — $\tau_c$')

    colors = plt.cm.tab10.colors
    for i, run in enumerate(runs):
        df = pd.read_csv(run['log_file'])
        t = df[df.columns[0]]
        color = colors[i % len(colors)]
        label = rf'$\tau_c = {run["tau_c"]}$'
        axes[0].plot(t, df['SCADA.id'], color=color, label=label, zorder=1)
        axes[1].plot(t, df['SCADA.iq'], color=color, label=label, zorder=1)

    # Reference plotted once from the first run (same reference for all)
    df0 = pd.read_csv(runs[0]['log_file'])
    t0 = df0[df0.columns[0]]
    axes[0].plot(t0, df0['SCADA.is_d_ref'], label=r'$i_{sd}^{\star}$',
                 color='orange', linestyle='--', linewidth=2, zorder=10)
    axes[1].plot(t0, df0['SCADA.is_q_ref'], label=r'$i_{sq}^{\star}$',
                 color='orange', linestyle='--', linewidth=2, zorder=10)

    axes[0].set_ylabel('Current (A)')
    axes[0].legend()
    axes[0].grid(True)
    axes[1].set_ylabel('Current (A)')
    axes[1].set_xlabel('Time (s)')
    axes[1].legend()
    axes[1].grid(True)

    plt.tight_layout()
    fig.savefig(svg_path)
    fig.savefig(pdf_path)
    print(f"Comparison figure saved → {svg_path}")
    print(f"                       → {pdf_path}")
    plt.close(fig)


def plot_dq_currents_zoom(runs, zoom_time, half_window, svg_path, pdf_path):
    """
    Zoomed comparison figure around zoom_time ± half_window seconds.
    runs: list of {'log_file': str, 'tau_c': float}
    """
    print(f"Generating zoom figure at t={zoom_time} s...")
    fig, axes = plt.subplots(2, 1, figsize=(10, 8), sharex=True)
    fig.suptitle(rf'Parametric sweep — $\tau_c$ — zoom at $t = {zoom_time}$ s')

    colors = plt.cm.tab10.colors
    for i, run in enumerate(runs):
        df = pd.read_csv(run['log_file'])
        t = df[df.columns[0]]
        mask = (t >= zoom_time - half_window) & (t <= zoom_time + half_window)
        color = colors[i % len(colors)]
        label = rf'$\tau_c = {run["tau_c"]}$'
        axes[0].plot(t[mask], df['SCADA.id'][mask], color=color, label=label, zorder=1)
        axes[1].plot(t[mask], df['SCADA.iq'][mask], color=color, label=label, zorder=1)

    # Reference from first run (same for all)
    df0 = pd.read_csv(runs[0]['log_file'])
    t0 = df0[df0.columns[0]]
    mask0 = (t0 >= zoom_time - half_window) & (t0 <= zoom_time + half_window)
    axes[0].plot(t0[mask0], df0['SCADA.is_d_ref'][mask0], label=r'$i_{sd}^{\star}$',
                 color='orange', linestyle='--', linewidth=2, zorder=10)
    axes[1].plot(t0[mask0], df0['SCADA.is_q_ref'][mask0], label=r'$i_{sq}^{\star}$',
                 color='orange', linestyle='--', linewidth=2, zorder=10)

    # Vertical marker at step time
    for ax in axes:
        ax.axvline(zoom_time, color='gray', linestyle=':', linewidth=1)

    axes[0].set_ylabel('Current (A)')
    axes[0].legend()
    axes[0].grid(True)
    axes[1].set_ylabel('Current (A)')
    axes[1].set_xlabel('Time (s)')
    axes[1].legend()
    axes[1].grid(True)

    plt.tight_layout()
    fig.savefig(svg_path)
    fig.savefig(pdf_path)
    print(f"Zoom figure saved → {svg_path}")
    print(f"                  → {pdf_path}")
    plt.close(fig)
