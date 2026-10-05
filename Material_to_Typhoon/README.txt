===============================================================================
 SUNRISE SUMMER SCHOOL MATERIAL - VSC CONVERTER CONTROL ON TYPHOON HIL
===============================================================================

Typhoon HIL models for dq-frame control of a grid-connected three-phase
voltage source converter (VSC). Each controller is provided in three
execution modes: offline simulation, real-time simulation (HIL) and
Controller-HIL (CHIL) with a Texas Instruments DSP.


-------------------------------------------------------------------------------
 1. INCLUDED CONTROLLERS
-------------------------------------------------------------------------------

  dq_current_ctrl   dq-frame current control.
  dq_power_ctrl     Active/reactive power (P/Q) control on top of the
                    current loop.
  dq_pivsg_ctrl     PI-based virtual synchronous generator (VSG).
  dq_statcom_ctrl   STATCOM operation (reactive power / voltage support).


-------------------------------------------------------------------------------
 2. FOLDER STRUCTURE
-------------------------------------------------------------------------------

Off_sim/          Offline simulation (no HIL hardware required).
  dq_*_ctrl_v2_sim.tse           Schematic Editor models.
  dq_*_ctrl_v2_sim Target files/ Compiled files (TyphoonSim.exe).

RT_sim/           Real-time simulation (HIL / Virtual HIL).
                  The controller is implemented inside the model.
  dq_*_ctrl_v3_sim.tse           Schematic Editor models.
  dq_*_ctrl_v3_SCADA.cus         HIL SCADA panel for each model.
  dq_*_ctrl_v3_SCADA.runx        Run configurations.
  dq_*_ctrl_v3_sim Target files/ Compiled files (.cpd).
  Imagen/                        Images used by the SCADA panels.
  auxiliar/                      Additional example model and panel.
  allure-html/                   Automated test report (open index.html
                                 in a web browser).

chil/             Controller-HIL: the plant is simulated on the HIL and the
                  controller runs on a TI DSP.
  dq_*_ctrl_v2.tse               Schematic Editor models.
  dq_*_ctrl_SCADA.runx.cus       HIL SCADA panels.
  settings_v2.runx               Run configuration.
  settings_statcom_v2.runx       Run configuration (STATCOM).
  dq_current_ctrl_v2 Target files/  Compiled files (.cpd).
  dq_current_ctrl_acg/           Code Composer Studio project with the
                                 current controller auto-generated from
                                 Typhoon.
  CCS/                           Earlier version for the F28335 DSP:
                                 vsc_3ph3w_v1 models (converter and
                                 STATCOM), SCADA panel, run configuration
                                 and zipped CCS projects (.zip).


-------------------------------------------------------------------------------
 3. REQUIREMENTS
-------------------------------------------------------------------------------

  - Typhoon HIL Control Center (Schematic Editor and HIL SCADA).
  - For RT_sim and chil: a Typhoon HIL device or Virtual HIL.
  - For chil: Code Composer Studio 11 and a TI board.
      * dq_current_ctrl_acg: TMS320F28379D (C2000 compiler 21.6.0.LTS,
        XDS100v2 debug probe).
      * CCS/: TMS320F28335.


-------------------------------------------------------------------------------
 4. USAGE
-------------------------------------------------------------------------------

Offline simulation (Off_sim)
  1. Open the .tse model in Schematic Editor.
  2. Compile it and run the simulation.

Real-time simulation (RT_sim)
  1. Open the dq_*_ctrl_v3_sim.tse model and compile it.
  2. Open the matching dq_*_ctrl_v3_SCADA.cus panel in HIL SCADA
     (or load the associated .runx file).
  3. Load the model onto the HIL/VHIL and start the simulation.

Controller-HIL (chil)
  1. Open and compile the dq_*_ctrl_v2.tse model.
  2. Import the dq_current_ctrl_acg project into Code Composer Studio,
     build it and flash it to the DSP.
  3. Connect the DSP to the HIL, open the matching SCADA panel and run
     the simulation.

  The files dq_current_ctrl.c/.h, sp_export_defines.h and custom_types.h
  are generated automatically by Typhoon. If the controller is changed,
  regenerate them from the model instead of editing them by hand.


-------------------------------------------------------------------------------
 5. NOTES
-------------------------------------------------------------------------------

  - The "<model> Target files" folders hold the compilation output. They
    are regenerated when the .tse is compiled and should not be edited.
  - The RT_sim SCADA panels load images from the Imagen/ folder, so keep
    the folder structure intact when moving the material.
