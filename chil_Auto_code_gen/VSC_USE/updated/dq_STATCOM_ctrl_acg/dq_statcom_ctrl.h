/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: dq_statcom_ctrl.h
*
* Code generated from model             : 'dq_statcom_ctrl_v1'.
* Subsystem selected for code generation: 'dq_statcom_ctrl'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 26-May-2025 @ 05:16:25 PM
*
*/

#include "serial.h"

// External input
typedef struct {
} dq_statcom_ctrl_ExtIn;


// External output
typedef struct {
} dq_statcom_ctrl_ExtOut;

// Sinks
typedef struct {
    // Generated from the component: dq_STATCOM_ctrl.is_d_ref.in
    real_t _dq_statcom_ctrl_is_d_ref_in;
    // Generated from the component: dq_STATCOM_ctrl.is_q_ref.in
    real_t _dq_statcom_ctrl_is_q_ref_in;
    // Generated from the component: dq_STATCOM_ctrl.p_fil.in
    real_t _dq_statcom_ctrl_p_fil_in;
    // Generated from the component: dq_STATCOM_ctrl.p.in
    real_t _dq_statcom_ctrl_p_in;
    // Generated from the component: dq_STATCOM_ctrl.q_fil.in
    real_t _dq_statcom_ctrl_q_fil_in;
    // Generated from the component: dq_STATCOM_ctrl.q.in
    real_t _dq_statcom_ctrl_q_in;
    // Generated from the component: dq_STATCOM_ctrl.q_ref.in
    real_t _dq_statcom_ctrl_q_ref_in;
    // Generated from the component: dq_STATCOM_ctrl.v_dc_ref.in
    real_t _dq_statcom_ctrl_v_dc_ref_in;
} dq_statcom_ctrl_ModelSinks;

// States
typedef struct {
    // Generated from the component: dq_STATCOM_ctrl.ADC (Generic)1.ADC.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.ADC (Generic)2.ADC.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.ADC (Generic)3.ADC.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.ADC (Generic)4.ADC.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.ADC (Generic)5.ADC.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.ADC (Generic)6.ADC.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.ADC (Generic)7.ADC.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.Delay1
    real_t _dq_statcom_ctrl_delay1__state[1];
    uint_t _dq_statcom_ctrl_delay1__cbi;

    // Generated from the component: dq_STATCOM_ctrl.SCI Receive1.advanced c function
    real_t _dq_statcom_ctrl_sci_receive1_advanced_c_function__state_var[4];




    // Generated from the component: dq_STATCOM_ctrl.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: dq_STATCOM_ctrl.GPIO DO (Generic)1.GPIO DO.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.Rate Limiter1
    real_t _dq_statcom_ctrl_rate_limiter1__state;
    int_t _dq_statcom_ctrl_rate_limiter1__first_step;
    // Generated from the component: dq_STATCOM_ctrl.ePWM (Generic)2.ePWM 1.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.GPIO DO (Generic)2.GPIO DO.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.C function powers
    real_t _dq_statcom_ctrl_c_function_powers__p_fil;

    real_t _dq_statcom_ctrl_c_function_powers__q_fil;




    // Generated from the component: dq_STATCOM_ctrl.C function PI voltage controller
    real_t _dq_statcom_ctrl_c_function_pi_voltage_controller__y_dc;

    real_t _dq_statcom_ctrl_c_function_pi_voltage_controller__e_dc;




    // Generated from the component: dq_STATCOM_ctrl.C function PLL
    real_t _dq_statcom_ctrl_c_function_pll__y_q;

    real_t _dq_statcom_ctrl_c_function_pll__theta;




    // Generated from the component: dq_STATCOM_ctrl.C function abc to dq



    // Generated from the component: dq_STATCOM_ctrl.SCI Send1.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.C function current refer



    // Generated from the component: dq_STATCOM_ctrl.C function PI current controller
    real_t _dq_statcom_ctrl_c_function_pi_current_controller__y_d;

    real_t _dq_statcom_ctrl_c_function_pi_current_controller__y_q;

    real_t _dq_statcom_ctrl_c_function_pi_current_controller__e_d;

    real_t _dq_statcom_ctrl_c_function_pi_current_controller__e_q;




    // Generated from the component: dq_STATCOM_ctrl.C function dq to abc



    // Generated from the component: dq_STATCOM_ctrl.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: dq_STATCOM_ctrl.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA



    // Generated from the component: dq_STATCOM_ctrl.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA



    // Generated from the component: dq_STATCOM_ctrl.ePWM (Generic)1.ePWM 1.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.ePWM (Generic)1.ePWM 2.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.ePWM (Generic)1.ePWM 3.advanced c function



    // Generated from the component: dq_STATCOM_ctrl.SCI Setup1.advanced c function



} dq_statcom_ctrl_ModelStates;

// Model data structure
typedef struct {
    dq_statcom_ctrl_ExtIn *p_extIn;
    dq_statcom_ctrl_ExtOut *p_extOut;
    dq_statcom_ctrl_ModelSinks *p_Sinks;
    dq_statcom_ctrl_ModelStates *p_States;
} dq_statcom_ctrl_ModelData;

// External input
extern dq_statcom_ctrl_ExtIn dq_statcom_ctrl_ext_In;

// External output
extern dq_statcom_ctrl_ExtOut dq_statcom_ctrl_ext_Out;

// Sinks
extern dq_statcom_ctrl_ModelSinks dq_statcom_ctrl_m_Sinks;

// States
extern dq_statcom_ctrl_ModelStates dq_statcom_ctrl_m_States;

// Model data structure
extern dq_statcom_ctrl_ModelData dq_statcom_ctrl_m_Data;

// Model entry point functions
// Execution rate: 5e-05
extern void dq_statcom_ctrl_init0(dq_statcom_ctrl_ModelData *p_m_Data);
extern void dq_statcom_ctrl_step0(dq_statcom_ctrl_ModelData *p_m_Data);
// Execution rate: 0.001
extern void dq_statcom_ctrl_init1(dq_statcom_ctrl_ModelData *p_m_Data);
extern void dq_statcom_ctrl_step1(dq_statcom_ctrl_ModelData *p_m_Data);
