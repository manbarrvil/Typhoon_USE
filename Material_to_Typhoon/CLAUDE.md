# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this folder is

`Material_to_Typhoon/` is a packaged set of SUNRISE Summer School course material (VSC dq-frame control on Typhoon HIL), prepared to hand over to Typhoon. `Off_sim/`, `RT_sim/` and `chil/chil_CCS/` are identical to `../SS_Belgrade_25/Off_sim`, `RT_sim` and `chil` (that folder's `F28335/` and `students/` are left out). `chil/chil_Automatic_Code_Generation/` exists only here. If you change a model, decide whether `SS_Belgrade_25/` should get the same change, because nothing keeps the two in sync.

The repo-wide conventions in `../CLAUDE.md` (file types, generated-vs-source rules, `.cpd` vs `.tse`) apply here. This folder has no Python code, no build system and no test suite. Everything except the CCS C project is a vendor GUI file.

## Layout: the same four controllers, three execution modes

Every mode has one model per controller variant:

| Variant | Controller |
|---|---|
| `dq_current_ctrl` | dq-frame current control |
| `dq_power_ctrl` | outer P/Q power loop around the current loop |
| `dq_pivsg_ctrl` | PI-based virtual synchronous generator |
| `dq_statcom_ctrl` | STATCOM (reactive/voltage support) |

- **`Off_sim/` (`*_v2_sim.tse`)**: offline, software-only simulation. It compiles to `TyphoonSim.exe` with no HIL device.
- **`RT_sim/` (`*_v3_sim.tse`)**: real-time HIL/VHIL. The controller runs inside the Typhoon model. Each model pairs with a `*_v3_SCADA.cus` panel and a `*_v3_SCADA.runx` run config. `Imagen/` holds the images those SCADA panels use, so keep the relative paths intact. `auxiliar/` has scratch/optional models. `allure-html/` is a static Allure report from an earlier `test_ganancias.py::test_potencia` pytest/TyphoonTest run (the test source is not in this repo), so treat it as output.
- **`chil/` (`*_v2.tse`)**: Controller-HIL. The plant runs on HIL and the controller runs on a TI DSP. It has two subfolders with the same four models, the `*_SCADA.runx.cus` panels and the `settings_v2.runx` / `settings_statcom_v2.runx` run configs. The `.tse` files differ between the two subfolders, so don't assume a fix in one applies to the other.
  - **`chil/chil_CCS/`**: the course version (models saved with Typhoon 2025.1 SP1). It includes the already-generated CCS project and the older F28335 material.
  - **`chil/chil_Automatic_Code_Generation/`**: models only, set up for the Typhoon → CCS automatic code-generation flow (TI RCP setup component, CCS 12.1 at `C:\ti\ccs1210`). There is no generated project or `Target files/`; the user generates them from the model. `dq_current_ctrl` and `dq_pivsg_ctrl` are saved with Typhoon 2025.4 and the other two with 2025.1 SP1. The STATCOM panel is named `dq_STATCOM_ctrl_SCADA.runx.cus` (capitalised), unlike the one in `chil_CCS/`. The `ccs_project_path` / `ccs_root_path` properties in each `.tse` are absolute paths from the author's machine (e.g. `C:\workspace\Typhoon_USE\chil_Auto_code_gen\VSC_USE\updated`), so they must be changed before code generation works anywhere else.
  - `chil/chil_CCS/dq_current_ctrl_acg/` is a CCS 11 project (TMS320F28379D, C2000 codegen 21.6 LTS, XDS100v2) that was auto-generated from the controller subsystem of `dq_current_ctrl_v2.tse`. `dq_current_ctrl.c/.h`, `sp_export_defines.h` and `custom_types.h` are generated, so regenerate them from Typhoon rather than editing them by hand. `main.c` wires the generated subsystem into `scheduler.c`: `TickFunctsArray` = `{TickFct_R0, TickFct_R1, TickFct_Idle}` holds one tick function per model rate, and the array is marked "DO NOT MODIFY". `serial.c` handles SCADA/serial communication. You need the CCS IDE to build and flash it.
  - `chil/chil_CCS/CCS/` is the older F28335 variant: `vsc_3ph3w_v1.tse`, the STATCOM variant, and zipped CCS projects `DSP_SUNRISE_S{S,SS}_F28335.zip`.

The version suffix tells you the mode: `v2` is offline/CHIL and `v3` is real-time. Keep it when you add a new variant.

## Working here

- Open, compile and run models in Typhoon Schematic Editor / HIL SCADA. To script compile/run instead, use `../HIL_API/` (its `compile_if_needed()` handles `.tse` → `.cpd`) and point it at the compiled `.cpd` inside `"<model> Target files/"`.
- `"* Target files/"` directories are compiler output (`.cpd`, `SPC*_*.txt`, `virtual_hil_device.exe`, `TyphoonSim.exe`, DLLs, `*_Model.md` register dumps). Recompile to refresh them and don't edit them.
