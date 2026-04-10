/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: harm_ctrl.h
*
* Code generated from model             : 'dq_statcom_react_harm_ctrl_v1'.
* Subsystem selected for code generation: 'harm_ctrl'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 25-May-2025 @ 02:11:16 PM
*
*/

#include "serial.h"

// External input
typedef struct {
} harm_ctrl_ExtIn;


// External output
typedef struct {
} harm_ctrl_ExtOut;

// Sinks
typedef struct {
    // Generated from the component: harm_ctrl.is_d_ref.in
    real_t _harm_ctrl_is_d_ref_in;
    // Generated from the component: harm_ctrl.is_q_ref.in
    real_t _harm_ctrl_is_q_ref_in;
} harm_ctrl_ModelSinks;

// States
typedef struct {
    // Generated from the component: harm_ctrl.ADC (Generic)1.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)10.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)11.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)12.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)13.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)2.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)3.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)4.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)5.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)6.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)7.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)8.ADC.advanced c function



    // Generated from the component: harm_ctrl.ADC (Generic)9.ADC.advanced c function



    // Generated from the component: harm_ctrl.Delay1
    real_t _harm_ctrl_delay1__state[1];
    uint_t _harm_ctrl_delay1__cbi;

    // Generated from the component: harm_ctrl.Discrete Transfer Function1
    real_t _harm_ctrl_discrete_transfer_function1__states[2];
    // Generated from the component: harm_ctrl.Discrete Transfer Function2
    real_t _harm_ctrl_discrete_transfer_function2__states[2];
    // Generated from the component: harm_ctrl.SCI Receive1.advanced c function
    real_t _harm_ctrl_sci_receive1_advanced_c_function__state_var[4];




    // Generated from the component: harm_ctrl.Step3
    real_t _harm_ctrl_step3__state;
    // Generated from the component: harm_ctrl.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: harm_ctrl.GPIO DO (Generic)1.GPIO DO.advanced c function



    // Generated from the component: harm_ctrl.Rate Limiter1
    real_t _harm_ctrl_rate_limiter1__state;
    int_t _harm_ctrl_rate_limiter1__first_step;
    // Generated from the component: harm_ctrl.ePWM (Generic)2.ePWM 1.advanced c function



    // Generated from the component: harm_ctrl.GPIO DO (Generic)2.GPIO DO.advanced c function



    // Generated from the component: harm_ctrl.C function PI voltage controller
    real_t _harm_ctrl_c_function_pi_voltage_controller__y_dc;

    real_t _harm_ctrl_c_function_pi_voltage_controller__e_dc;




    // Generated from the component: harm_ctrl.C function powers
    real_t _harm_ctrl_c_function_powers__p_fil;

    real_t _harm_ctrl_c_function_powers__q_fil;




    // Generated from the component: harm_ctrl.C function PLL
    real_t _harm_ctrl_c_function_pll__y_q;

    real_t _harm_ctrl_c_function_pll__theta;




    // Generated from the component: harm_ctrl.C function1
    real_t _harm_ctrl_c_function1__y_qref;

    real_t _harm_ctrl_c_function1__e_qref;




    // Generated from the component: harm_ctrl.C function abc to dq



    // Generated from the component: harm_ctrl.C function abc to dq1



    // Generated from the component: harm_ctrl.SCI Send1.advanced c function



    // Generated from the component: harm_ctrl.C function dq to abc1



    // Generated from the component: harm_ctrl.C function current refer



    // Generated from the component: harm_ctrl.C function PI current controller
    real_t _harm_ctrl_c_function_pi_current_controller__y_d;

    real_t _harm_ctrl_c_function_pi_current_controller__y_q;

    real_t _harm_ctrl_c_function_pi_current_controller__e_d;

    real_t _harm_ctrl_c_function_pi_current_controller__e_q;




    // Generated from the component: harm_ctrl.C function dq to abc



    // Generated from the component: harm_ctrl.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: harm_ctrl.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA



    // Generated from the component: harm_ctrl.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA



    // Generated from the component: harm_ctrl.ePWM (Generic)1.ePWM 1.advanced c function



    // Generated from the component: harm_ctrl.ePWM (Generic)1.ePWM 2.advanced c function



    // Generated from the component: harm_ctrl.ePWM (Generic)1.ePWM 3.advanced c function



    // Generated from the component: harm_ctrl.SCI Setup1.advanced c function



} harm_ctrl_ModelStates;

// Model data structure
typedef struct {
    harm_ctrl_ExtIn *p_extIn;
    harm_ctrl_ExtOut *p_extOut;
    harm_ctrl_ModelSinks *p_Sinks;
    harm_ctrl_ModelStates *p_States;
} harm_ctrl_ModelData;

// External input
extern harm_ctrl_ExtIn harm_ctrl_ext_In;

// External output
extern harm_ctrl_ExtOut harm_ctrl_ext_Out;

// Sinks
extern harm_ctrl_ModelSinks harm_ctrl_m_Sinks;

// States
extern harm_ctrl_ModelStates harm_ctrl_m_States;

// Model data structure
extern harm_ctrl_ModelData harm_ctrl_m_Data;

// Model entry point functions
// Execution rate: 5e-05
extern void harm_ctrl_init0(harm_ctrl_ModelData *p_m_Data);
extern void harm_ctrl_step0(harm_ctrl_ModelData *p_m_Data);
// Execution rate: 0.001
extern void harm_ctrl_init1(harm_ctrl_ModelData *p_m_Data);
extern void harm_ctrl_step1(harm_ctrl_ModelData *p_m_Data);
