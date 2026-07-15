# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Repository overview

This is a research/teaching repository (SUNRISE Summer School materials) for Hardware-in-the-Loop (HIL) simulation and control of grid-connected power converters — dq-frame current/voltage/power controllers, VSG (virtual synchronous generator), STATCOM, and DAB (dual active bridge) topologies — built on the Typhoon HIL toolchain. It is mostly a collection of vendor GUI-tool projects (Typhoon Schematic Editor models, Code Composer Studio DSP projects) plus one Python automation subproject. There is no top-level build system, package manifest, or test suite — most "building" happens inside vendor IDEs.

## Repository structure

- **`HIL_API/`** — the only actively-developed Python code. Drives Typhoon HIL/VHIL simulations end-to-end (compile model → run → capture signals → plot) and includes a live Flask dashboard. **See [`HIL_API/CLAUDE.md`](HIL_API/CLAUDE.md) for the run command, dependencies, and the full `typhoon.api.hil` reference** — read that file before editing anything under `HIL_API/`.
- **`Real_time_sim_VHIL/`** — the VHIL/real-time models actually driven by `HIL_API` scripts (e.g. `dq_current_ctrl_v3_vhil`, the model referenced by `HIL_API/main.py`).
- **`TyphoonSim/`** — offline, software-only Typhoon models (`.tse` + `TyphoonSim.exe` target files), plus `ODE_plant.py` (analytic state-space ODE of the LCL plant) and JSON exports of its state-space (AB) matrices/equilibrium, used to cross-check the schematic model against hand-derived equations.
- **`Andrei_unb_vsg/`, `chil_CCS/`, `chil_Auto_code_gen/`, `SS_Belgrade_25/`** — CHIL (Controller Hardware-in-the-Loop) projects: a Typhoon schematic model paired with auto-generated C control code for TI F2837x/F28335 DSPs, built/flashed via Code Composer Studio (CCS).
- **`docs/`** — slide decks and PDFs for the course this repo supports (VSC modeling/control, CCS installation).
- **`pss_design.ipynb`** — root-level notebook for controller/power-system-stability design work.

## File types cheat sheet

- **`.tse`** — Typhoon Schematic Editor project; the source of truth for a model. Each has a paired `"<name> Target files/"` directory holding compiled artifacts.
- **`.cpd`** — the compiled model binary inside `"Target files/"`. This is what `hil.load_model()` loads at runtime — never point it at the `.tse`.
- **`.cus`** — Typhoon SCADA/control-panel layout file.
- **`.runx`** — Typhoon Control Center run/settings file.
- **`.slx`** — Simulink model.
- **`*_acg/` folders and files like `dq_unb_pi_vsg.c`/`.h`** — control code auto-generated from the Typhoon schematic. Regenerate these from Typhoon rather than hand-editing the generated logic; `scheduler.c`, `serial.c`, `main.c` are the (mostly static) CCS project scaffolding around the generated subsystem.
- **`.ccsproject` / `.cproject` / `.project`** — Code Composer Studio (TI DSP) project files for CHIL targets (F28335, F2837xD). Building/flashing these requires CCS itself; nothing here is CLI-buildable.

## Working in this repo

- There's no root-level lint/build/test tooling and no `requirements.txt`/`pyproject.toml` — treat vendor project files (`.tse`, `.cus`, `.runx`, `.slx`, CCS projects) as opaque and edit them through their respective GUI tools, not by hand.
- The only code meant to be edited/extended directly is `HIL_API/` (Python) and the CCS C sources under `*_acg`/CHIL project folders — see the per-directory notes above for which files are generated vs. hand-maintained.
- `HIL_API/hil_simulation.py`'s `compile_if_needed()` automates `.tse` → `.cpd` compilation via `typhoon.api.schematic_editor`; CCS DSP builds still require the Code Composer Studio IDE.
- Compiled binaries, DLLs, `.pickle`/`.dat`/`.bin` artifacts, `__pycache__`, and `HIL_API/results/*.csv` are generated output, not source — don't hand-edit them.
