/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: dq_unb_pi_vsg.h
*
* Code generated from model             : 'dq_unb_pi_vsg_ctrl_v1'.
* Subsystem selected for code generation: 'dq_unb_pi_vsg'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 08-Jun-2025 @ 01:28:46 PM
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




    // Generated from the component: dq_unb_pi_vsg.VSG_a.Low-Pass Filter1
    real_t _dq_unb_pi_vsg_vsg_a_low_pass_filter1__filtered_value;
    real_t _dq_unb_pi_vsg_vsg_a_low_pass_filter1__previous_in;    // Generated from the component: dq_unb_pi_vsg.VSG_b.Low-Pass Filter1
    real_t _dq_unb_pi_vsg_vsg_b_low_pass_filter1__filtered_value;
    real_t _dq_unb_pi_vsg_vsg_b_low_pass_filter1__previous_in;    // Generated from the component: dq_unb_pi_vsg.VSG_c.Low-Pass Filter1
    real_t _dq_unb_pi_vsg_vsg_c_low_pass_filter1__filtered_value;
    real_t _dq_unb_pi_vsg_vsg_c_low_pass_filter1__previous_in;    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem6.Integrator1
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__state;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__reset_state;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem7.Integrator1
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__state;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__reset_state;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem8.Integrator1
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__state;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__reset_state;
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: dq_unb_pi_vsg.GPIO DO (Generic)1.GPIO DO.advanced c function



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)2.ePWM 1.advanced c function



    // Generated from the component: dq_unb_pi_vsg.GPIO DO (Generic)2.GPIO DO.advanced c function



    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem6.Discrete Transfer Function2
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__states[1];
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem7.Discrete Transfer Function2
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__states[1];
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem8.Discrete Transfer Function2
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__states[1];
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem6.LPF
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__x_out;




    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem8.LPF
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__x_out;




    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem11.LPF
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__x_out;




    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem7.LPF
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__x_out;




    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem9.LPF
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__x_out;




    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem10.LPF
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__x_out;




    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem6.LPF1
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__x_out;




    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem8.LPF1
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__x_out;




    // Generated from the component: dq_unb_pi_vsg.current_ctrl.C function abc to dq1



    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem11.LPF1
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__x_out;




    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem7.LPF1
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__x_out;




    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem9.LPF1
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__x_out;




    // Generated from the component: dq_unb_pi_vsg.current_ctrl.C function PLL
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__y_q;

    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__theta;

    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__y_d;




    // Generated from the component: dq_unb_pi_vsg.current_ctrl.C function abc to dq2



    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem10.LPF1
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__x_out;




    // Generated from the component: dq_unb_pi_vsg.VSG_a.C function VSG1
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_p;

    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_q;

    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta;

    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isd;

    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isq;

    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_p;

    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_q;

    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_ps;

    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_qs;




    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function dq to abc1



    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function dq to abc1



    // Generated from the component: dq_unb_pi_vsg.VSG_a.C function dq to abc



    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function PLL
    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__y_q;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__theta;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__y_d;




    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function PLL
    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__y_q;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__theta;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__y_d;




    // Generated from the component: dq_unb_pi_vsg.VSG_a.C function abc to dq



    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function VSG1
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_p;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_q;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isd;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isq;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_p;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_q;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_ps;

    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_qs;




    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function VSG1
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_p;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_q;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isd;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isq;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_p;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_q;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_ps;

    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_qs;




    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function dq to abc



    // Generated from the component: dq_unb_pi_vsg.SCI Send1.advanced c function



    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function dq to abc



    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function abc to dq



    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function abc to dq



    // Generated from the component: dq_unb_pi_vsg.current_ctrl.C function abc to dq



    // Generated from the component: dq_unb_pi_vsg.C function dq to abc1



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 4.D_to_CMPA



    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 4.advanced c function



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
