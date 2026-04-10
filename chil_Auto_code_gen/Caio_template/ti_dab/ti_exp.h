/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: ti_exp.h
*
* Code generated from model             : 'model3_dab_chil_rcp_updated'.
* Subsystem selected for code generation: 'ti_exp'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 20-May-2025 @ 01:49:41 PM
*
*/

#include "serial.h"

// External input
typedef struct {
} ti_exp_ExtIn;


// External output
typedef struct {
} ti_exp_ExtOut;

// Sinks
typedef struct {
} ti_exp_ModelSinks;

// States
typedef struct {
    // Generated from the component: ti_exp.ADC (Generic)1.ADC.advanced c function



    // Generated from the component: ti_exp.GPIO - HIL DO1.GPIO DI.advanced c function



    // Generated from the component: ti_exp.SCI Receive1.advanced c function
    real_t _ti_exp_sci_receive1_advanced_c_function__state_var[1];




    // Generated from the component: ti_exp.ePWM (Generic)1.deg_to_TBPHS 2.deg_to_TBPHS
    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__in_fmd;

    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__target_angle;

    int_t _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__delay;




    // Generated from the component: ti_exp.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: ti_exp.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA



    // Generated from the component: ti_exp.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA



    // Generated from the component: ti_exp.ePWM (Generic)1.D_to_CMPA 4.D_to_CMPA



    // Generated from the component: ti_exp.ePWM (Generic)1.ePWM 1.advanced c function



    // Generated from the component: ti_exp.ePWM (Generic)1.ePWM 2.advanced c function



    // Generated from the component: ti_exp.PID controller3
    real_t _ti_exp_pid_controller3__integrator_state;
    int_t _ti_exp_pid_controller3__av_active;
    real_t _ti_exp_pid_controller3__filter_state;
    int_t _ti_exp_pid_controller3__reset_state;    // Generated from the component: ti_exp.ePWM (Generic)1.deg_to_TBPHS 4.deg_to_TBPHS
    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__in_fmd;

    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__target_angle;

    int_t _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__delay;




    // Generated from the component: ti_exp.ePWM (Generic)1.deg_to_TBPHS 3.deg_to_TBPHS
    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__in_fmd;

    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__target_angle;

    int_t _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__delay;




    // Generated from the component: ti_exp.ePWM (Generic)1.ePWM 4.advanced c function



    // Generated from the component: ti_exp.ePWM (Generic)1.ePWM 3.advanced c function



    // Generated from the component: ti_exp.Rate Transition1.Output
    real_t _ti_exp_rate_transition1_output__state;
    // Generated from the component: ti_exp.Rate Transition2.Output
    real_t _ti_exp_rate_transition2_output__state;
    // Generated from the component: ti_exp.Rate Transition3.Output
    real_t _ti_exp_rate_transition3_output__state;
    // Generated from the component: ti_exp.SCI Send1.advanced c function



    // Generated from the component: ti_exp.SCI Setup1.advanced c function



} ti_exp_ModelStates;

// Model data structure
typedef struct {
    ti_exp_ExtIn *p_extIn;
    ti_exp_ExtOut *p_extOut;
    ti_exp_ModelSinks *p_Sinks;
    ti_exp_ModelStates *p_States;
} ti_exp_ModelData;

// External input
extern ti_exp_ExtIn ti_exp_ext_In;

// External output
extern ti_exp_ExtOut ti_exp_ext_Out;

// Sinks
extern ti_exp_ModelSinks ti_exp_m_Sinks;

// States
extern ti_exp_ModelStates ti_exp_m_States;

// Model data structure
extern ti_exp_ModelData ti_exp_m_Data;

// Model entry point functions
// Execution rate: 5e-05
extern void ti_exp_init0(ti_exp_ModelData *p_m_Data);
extern void ti_exp_step0(ti_exp_ModelData *p_m_Data);
// Execution rate: 0.001
extern void ti_exp_init1(ti_exp_ModelData *p_m_Data);
extern void ti_exp_step1(ti_exp_ModelData *p_m_Data);
