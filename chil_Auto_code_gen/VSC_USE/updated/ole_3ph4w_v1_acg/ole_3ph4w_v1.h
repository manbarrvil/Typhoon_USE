/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: ole_3ph4w_v1.h
*
* Code generated from model             : 'ol_3ph4w_v1'.
* Subsystem selected for code generation: 'ole_3ph4w_v1'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 07-Jun-2025 @ 04:33:26 PM
*
*/

#include "serial.h"

// External input
typedef struct {
} ole_3ph4w_v1_ExtIn;


// External output
typedef struct {
} ole_3ph4w_v1_ExtOut;

// Sinks
typedef struct {
} ole_3ph4w_v1_ModelSinks;

// States
typedef struct {
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)1.ADC.advanced c function



    // Generated from the component: ole_3ph4w_v1.ADC (Generic)2.ADC.advanced c function



    // Generated from the component: ole_3ph4w_v1.ADC (Generic)3.ADC.advanced c function



    // Generated from the component: ole_3ph4w_v1.ADC (Generic)4.ADC.advanced c function



    // Generated from the component: ole_3ph4w_v1.ADC (Generic)5.ADC.advanced c function



    // Generated from the component: ole_3ph4w_v1.ADC (Generic)6.ADC.advanced c function



    // Generated from the component: ole_3ph4w_v1.ADC (Generic)7.ADC.advanced c function



    // Generated from the component: ole_3ph4w_v1.Delay1
    real_t _ole_3ph4w_v1_delay1__state[1];
    uint_t _ole_3ph4w_v1_delay1__cbi;

    // Generated from the component: ole_3ph4w_v1.SCI Receive1.advanced c function
    real_t _ole_3ph4w_v1_sci_receive1_advanced_c_function__state_var[4];




    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem6.Integrator1
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__state;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__reset_state;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem7.Integrator1
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__state;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__reset_state;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem8.Integrator1
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__state;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__reset_state;
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: ole_3ph4w_v1.GPIO DO (Generic)1.GPIO DO.advanced c function



    // Generated from the component: ole_3ph4w_v1.current_ctrl.Integrator Rollover1
    real_t _ole_3ph4w_v1_current_ctrl_integrator_rollover1__state;
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)2.ePWM 1.advanced c function



    // Generated from the component: ole_3ph4w_v1.GPIO DO (Generic)2.GPIO DO.advanced c function



    // Generated from the component: ole_3ph4w_v1.C function dq to abc2



    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem6.Discrete Transfer Function2
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__states[1];
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem7.Discrete Transfer Function2
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__states[1];
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem8.Discrete Transfer Function2
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__states[1];
    // Generated from the component: ole_3ph4w_v1.RMS value2
    real_t _ole_3ph4w_v1_rms_value2__square_sum;
    real_t _ole_3ph4w_v1_rms_value2__sample_cnt;
    real_t _ole_3ph4w_v1_rms_value2__period_cnt;
    real_t _ole_3ph4w_v1_rms_value2__db_timer;
    real_t _ole_3ph4w_v1_rms_value2__previous_filtered_value;
    real_t _ole_3ph4w_v1_rms_value2__previous_correction;
    real_t _ole_3ph4w_v1_rms_value2__previous_value;
    real_t _ole_3ph4w_v1_rms_value2__correction;
    real_t _ole_3ph4w_v1_rms_value2__out_state;    // Generated from the component: ole_3ph4w_v1.RMS value1
    real_t _ole_3ph4w_v1_rms_value1__square_sum;
    real_t _ole_3ph4w_v1_rms_value1__sample_cnt;
    real_t _ole_3ph4w_v1_rms_value1__period_cnt;
    real_t _ole_3ph4w_v1_rms_value1__db_timer;
    real_t _ole_3ph4w_v1_rms_value1__previous_filtered_value;
    real_t _ole_3ph4w_v1_rms_value1__previous_correction;
    real_t _ole_3ph4w_v1_rms_value1__previous_value;
    real_t _ole_3ph4w_v1_rms_value1__correction;
    real_t _ole_3ph4w_v1_rms_value1__out_state;    // Generated from the component: ole_3ph4w_v1.current_ctrl.C function abc to dq



    // Generated from the component: ole_3ph4w_v1.current_ctrl.C function abc to dq1



    // Generated from the component: ole_3ph4w_v1.current_ctrl.C function PLL
    real_t _ole_3ph4w_v1_current_ctrl_c_function_pll__y_q;

    real_t _ole_3ph4w_v1_current_ctrl_c_function_pll__theta;




    // Generated from the component: ole_3ph4w_v1.current_ctrl.C function abc to dq2



    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA



    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA



    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.ePWM 1.advanced c function



    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.ePWM 2.advanced c function



    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.ePWM 3.advanced c function



    // Generated from the component: ole_3ph4w_v1.RMS value3
    real_t _ole_3ph4w_v1_rms_value3__square_sum;
    real_t _ole_3ph4w_v1_rms_value3__sample_cnt;
    real_t _ole_3ph4w_v1_rms_value3__period_cnt;
    real_t _ole_3ph4w_v1_rms_value3__db_timer;
    real_t _ole_3ph4w_v1_rms_value3__previous_filtered_value;
    real_t _ole_3ph4w_v1_rms_value3__previous_correction;
    real_t _ole_3ph4w_v1_rms_value3__previous_value;
    real_t _ole_3ph4w_v1_rms_value3__correction;
    real_t _ole_3ph4w_v1_rms_value3__out_state;    // Generated from the component: ole_3ph4w_v1.C function dq to abc1



    // Generated from the component: ole_3ph4w_v1.SCI Send1.advanced c function



    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.D_to_CMPA 4.D_to_CMPA



    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.ePWM 4.advanced c function



    // Generated from the component: ole_3ph4w_v1.SCI Setup1.advanced c function



} ole_3ph4w_v1_ModelStates;

// Model data structure
typedef struct {
    ole_3ph4w_v1_ExtIn *p_extIn;
    ole_3ph4w_v1_ExtOut *p_extOut;
    ole_3ph4w_v1_ModelSinks *p_Sinks;
    ole_3ph4w_v1_ModelStates *p_States;
} ole_3ph4w_v1_ModelData;

// External input
extern ole_3ph4w_v1_ExtIn ole_3ph4w_v1_ext_In;

// External output
extern ole_3ph4w_v1_ExtOut ole_3ph4w_v1_ext_Out;

// Sinks
extern ole_3ph4w_v1_ModelSinks ole_3ph4w_v1_m_Sinks;

// States
extern ole_3ph4w_v1_ModelStates ole_3ph4w_v1_m_States;

// Model data structure
extern ole_3ph4w_v1_ModelData ole_3ph4w_v1_m_Data;

// Model entry point functions
// Execution rate: 5e-05
extern void ole_3ph4w_v1_init0(ole_3ph4w_v1_ModelData *p_m_Data);
extern void ole_3ph4w_v1_step0(ole_3ph4w_v1_ModelData *p_m_Data);
// Execution rate: 0.1
extern void ole_3ph4w_v1_init1(ole_3ph4w_v1_ModelData *p_m_Data);
extern void ole_3ph4w_v1_step1(ole_3ph4w_v1_ModelData *p_m_Data);
