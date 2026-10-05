# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this folder is

`Material_to_Typhoon/` is a packaged set of SUNRISE Summer School course material (VSC dq-frame control on Typhoon HIL), prepared to hand over to Typhoon. Its contents are identical to the matching files in `../SS_Belgrade_25/`, but it leaves out that folder's `F28335/` and `students/` subfolders. If you change a model here, decide whether `SS_Belgrade_25/` should get the same change, because nothing keeps the two in sync.

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
- **`chil/` (`*_v2.tse`)**: Controller-HIL. The plant runs on HIL and the controller runs on a TI DSP. The panels are the `*_SCADA.runx.cus` files, and `settings_v2.runx` / `settings_statcom_v2.runx` are the run configs.
  - `chil/dq_current_ctrl_acg/` is a CCS 11 project (TMS320F28379D, C2000 codegen 21.6 LTS, XDS100v2) that was auto-generated from the controller subsystem of `dq_current_ctrl_v2.tse`. `dq_current_ctrl.c/.h`, `sp_export_defines.h` and `custom_types.h` are generated, so regenerate them from Typhoon rather than editing them by hand. `main.c` wires the generated subsystem into `scheduler.c`: `TickFunctsArray` = `{TickFct_R0, TickFct_R1, TickFct_Idle}` holds one tick function per model rate, and the array is marked "DO NOT MODIFY". `serial.c` handles SCADA/serial communication. You need the CCS IDE to build and flash it.
  - `chil/CCS/` is the older F28335 variant: `vsc_3ph3w_v1.tse`, the STATCOM variant, and zipped CCS projects `DSP_SUNRISE_S{S,SS}_F28335.zip`.

The version suffix tells you the mode: `v2` is offline/CHIL and `v3` is real-time. Keep it when you add a new variant.

## Working here

- Open, compile and run models in Typhoon Schematic Editor / HIL SCADA. To script compile/run instead, use `../HIL_API/` (its `compile_if_needed()` handles `.tse` → `.cpd`) and point it at the compiled `.cpd` inside `"<model> Target files/"`.
- `"* Target files/"` directories are compiler output (`.cpd`, `SPC*_*.txt`, `virtual_hil_device.exe`, `TyphoonSim.exe`, DLLs, `*_Model.md` register dumps). Recompile to refresh them and don't edit them.
