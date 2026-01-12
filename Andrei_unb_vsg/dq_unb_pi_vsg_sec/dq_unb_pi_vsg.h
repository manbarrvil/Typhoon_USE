/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: dq_unb_pi_vsg.h
*
* Code generated from model             : 'dq_unb_pi_vsg_ctrl_sec'.
* Subsystem selected for code generation: 'dq_unb_pi_vsg'.
*
* Schematic Editor version              : 2025.3
* C source code generated on            : 29-Dec-2025 @ 01:46:24 PM
*
*/

#include "serial.h"

// External input
typedef struct {
} dq_unb_pi_vsg_ExtIn;


// External output
typedef struct {
} dq_unb_pi_vsg_ExtOut;

// Sinks
typedef struct {
} dq_unb_pi_vsg_ModelSinks;

// States
typedef struct {
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)1.ADC.advanced c function



    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)2.ADC.advanced c function



    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)3.ADC.advanced c function



    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)4.ADC.advanced c function



    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)5.ADC.advanced c function



    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)6.ADC.advanced c function



    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)7.ADC.advanced c function



    // Generated from the component: dq_unb_pi_vsg.Delay1
    real_t _dq_unb_pi_vsg_delay1__state[1];
    uint_t _dq_unb_pi_vsg_delay1__cbi;

    // Generated from the component: dq_unb_pi_vsg.SCI Receive1.advanced c function
    real_t _dq_unb_pi_vsg_sci_receive1_advanced_c_function__state_var[4];




    // Generated from the component: dq_unb_pi_vsg.Unit Delay1
    real_t _dq_unb_pi_vsg_unit_delay1__state;
    // Generated from the component: dq_unb_pi_vsg.Unit Delay2
    real_t _dq_unb_pi_vsg_unit_delay2__state;
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: dq_unb_pi_vsg.GPIO DO (Generic)1.GPIO DO.advanced c function



    // Generated from the component: dq_unb_pi_vsg.Integrator1
    real_t _dq_unb_pi_vsg_integrator1__state;
    real_t _dq_unb_pi_vsg_integrator1__reset_state;
    // Generated from the component: dq_unb_pi_vsg.Subsystem13.Integrator1
    real_t _dq_unb_pi_vsg_subsystem13_integrator1__state;
    real_t _dq_unb_pi_vsg_subsystem13_integrator1__reset_state;
    // Generated from the component: dq_unb_pi_vsg.Subsystem14.Integrator1
    real_t _dq_unb_pi_vsg_subsystem14_integrator1__state;
    real_t _dq_unb_pi_vsg_subsystem14_integrator1__reset_state;
    // Generated from the component: dq_unb_pi_vsg.Subsystem15.Integrator1
    real_t _dq_unb_pi_vsg_subsystem15_integrator1__state;
    real_t _dq_unb_pi_vsg_subsystem15_integrator1__reset_state;
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)2.ePWM 1.advanced c function



    // Generated from the component: dq_unb_pi_vsg.GPIO DO (Generic)2.GPIO DO.advanced c function



    // Generated from the component: dq_unb_pi_vsg.C function dq to abc4



    // Generated from the component: dq_unb_pi_vsg.RMS value4
    real_t _dq_unb_pi_vsg_rms_value4__square_sum;
    real_t _dq_unb_pi_vsg_rms_value4__sample_cnt;
    real_t _dq_unb_pi_vsg_rms_value4__period_cnt;
    real_t _dq_unb_pi_vsg_rms_value4__db_timer;
    real_t _dq_unb_pi_vsg_rms_value4__previous_filtered_value;
    real_t _dq_unb_pi_vsg_rms_value4__previous_correction;
    real_t _dq_unb_pi_vsg_rms_value4__previous_value;
    real_t _dq_unb_pi_vsg_rms_value4__correction;
    real_t _dq_unb_pi_vsg_rms_value4__out_state;    // Generated from the component: dq_unb_pi_vsg.C function abc to dq1



    // Generated from the component: dq_unb_pi_vsg.C function PLL
    real_t _dq_unb_pi_vsg_c_function_pll__y_q;

    real_t _dq_unb_pi_vsg_c_function_pll__theta;

    real_t _dq_unb_pi_vsg_c_function_pll__y_d;




    // Generated from the component: dq_unb_pi_vsg.C function abc to dq



    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem8.Subsystem6.LPF
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__x_out;

    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__period;




    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem9.Subsystem6.LPF
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__x_out;

    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__period;




    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem8.Subsystem6.LPF
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__x_out;

    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__period;




    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem9.Subsystem6.LPF
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__x_out;

    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__period;




    // Generated from the component: dq_unb_pi_vsg.RMS value3
    real_t _dq_unb_pi_vsg_rms_value3__square_sum;
    real_t _dq_unb_pi_vsg_rms_value3__sample_cnt;
    real_t _dq_unb_pi_vsg_rms_value3__period_cnt;
    real_t _dq_unb_pi_vsg_rms_value3__db_timer;
    real_t _dq_unb_pi_vsg_rms_value3__previous_filtered_value;
    real_t _dq_unb_pi_vsg_rms_value3__previous_correction;
    real_t _dq_unb_pi_vsg_rms_value3__previous_value;
    real_t _dq_unb_pi_vsg_rms_value3__correction;
    real_t _dq_unb_pi_vsg_rms_value3__out_state;    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem8.Subsystem6.LPF1
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__x_out;

    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__period;




    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem9.Subsystem6.LPF1
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__x_out;

    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__period;




    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem8.Subsystem6.LPF1
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__x_out;

    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__period;




    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem9.Subsystem6.LPF1
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__x_out;

    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__period;




    // Generated from the component: dq_unb_pi_vsg.Subsystem11.C function1



    // Generated from the component: dq_unb_pi_vsg.Subsystem10.C function1



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 4.D_to_CMPA



    // Generated from the component: dq_unb_pi_vsg.C function dq to abc3



    // Generated from the component: dq_unb_pi_vsg.C function dq to abc2



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 4.advanced c function



    // Generated from the component: dq_unb_pi_vsg.RMS value1
    real_t _dq_unb_pi_vsg_rms_value1__square_sum;
    real_t _dq_unb_pi_vsg_rms_value1__sample_cnt;
    real_t _dq_unb_pi_vsg_rms_value1__period_cnt;
    real_t _dq_unb_pi_vsg_rms_value1__db_timer;
    real_t _dq_unb_pi_vsg_rms_value1__previous_filtered_value;
    real_t _dq_unb_pi_vsg_rms_value1__previous_correction;
    real_t _dq_unb_pi_vsg_rms_value1__previous_value;
    real_t _dq_unb_pi_vsg_rms_value1__correction;
    real_t _dq_unb_pi_vsg_rms_value1__out_state;    // Generated from the component: dq_unb_pi_vsg.RMS value2
    real_t _dq_unb_pi_vsg_rms_value2__square_sum;
    real_t _dq_unb_pi_vsg_rms_value2__sample_cnt;
    real_t _dq_unb_pi_vsg_rms_value2__period_cnt;
    real_t _dq_unb_pi_vsg_rms_value2__db_timer;
    real_t _dq_unb_pi_vsg_rms_value2__previous_filtered_value;
    real_t _dq_unb_pi_vsg_rms_value2__previous_correction;
    real_t _dq_unb_pi_vsg_rms_value2__previous_value;
    real_t _dq_unb_pi_vsg_rms_value2__correction;
    real_t _dq_unb_pi_vsg_rms_value2__out_state;    // Generated from the component: dq_unb_pi_vsg.C function VSG
    real_t _dq_unb_pi_vsg_c_function_vsg__x_p;

    real_t _dq_unb_pi_vsg_c_function_vsg__x_q;

    real_t _dq_unb_pi_vsg_c_function_vsg__theta;

    real_t _dq_unb_pi_vsg_c_function_vsg__x_isd;

    real_t _dq_unb_pi_vsg_c_function_vsg__x_isq;

    real_t _dq_unb_pi_vsg_c_function_vsg__e_p;

    real_t _dq_unb_pi_vsg_c_function_vsg__e_q;




    // Generated from the component: dq_unb_pi_vsg.C function abc to dq2



    // Generated from the component: dq_unb_pi_vsg.C function abc to dq3



    // Generated from the component: dq_unb_pi_vsg.SCI Send1.advanced c function



    // Generated from the component: dq_unb_pi_vsg.Subsystem13.Discrete Transfer Function2
    real_t _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__states[1];
    // Generated from the component: dq_unb_pi_vsg.Subsystem14.Discrete Transfer Function2
    real_t _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__states[1];
    // Generated from the component: dq_unb_pi_vsg.Subsystem15.Discrete Transfer Function2
    real_t _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__states[1];
    // Generated from the component: dq_unb_pi_vsg.C function PI current controller
    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__y_d;

    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__y_q;

    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__e_d;

    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__e_q;




    // Generated from the component: dq_unb_pi_vsg.C function dq to abc1



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 1.advanced c function



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 2.advanced c function



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 3.advanced c function



    // Generated from the component: dq_unb_pi_vsg.SCI Setup1.advanced c function



} dq_unb_pi_vsg_ModelStates;

// Model data structure
typedef struct {
    dq_unb_pi_vsg_ExtIn *p_extIn;
    dq_unb_pi_vsg_ExtOut *p_extOut;
    dq_unb_pi_vsg_ModelSinks *p_Sinks;
    dq_unb_pi_vsg_ModelStates *p_States;
} dq_unb_pi_vsg_ModelData;

// External input
extern dq_unb_pi_vsg_ExtIn dq_unb_pi_vsg_ext_In;

// External output
extern dq_unb_pi_vsg_ExtOut dq_unb_pi_vsg_ext_Out;

// Sinks
extern dq_unb_pi_vsg_ModelSinks dq_unb_pi_vsg_m_Sinks;

// States
extern dq_unb_pi_vsg_ModelStates dq_unb_pi_vsg_m_States;

// Model data structure
extern dq_unb_pi_vsg_ModelData dq_unb_pi_vsg_m_Data;

// Model entry point functions
// Execution rate: 5e-05
extern void dq_unb_pi_vsg_init0(dq_unb_pi_vsg_ModelData *p_m_Data);
extern void dq_unb_pi_vsg_step0(dq_unb_pi_vsg_ModelData *p_m_Data);
// Execution rate: 0.1
extern void dq_unb_pi_vsg_init1(dq_unb_pi_vsg_ModelData *p_m_Data);
extern void dq_unb_pi_vsg_step1(dq_unb_pi_vsg_ModelData *p_m_Data);
