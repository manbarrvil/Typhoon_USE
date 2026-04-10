/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: dq_current_ctrl.h
*
* Code generated from model             : 'dq_current_ctrl_v1'.
* Subsystem selected for code generation: 'dq_current_ctrl'.
*
* Schematic Editor version              : 2025.1 SP1
<<<<<<< HEAD
* C source code generated on            : 06-Jun-2025 @ 08:56:23 PM
=======
* C source code generated on            : 07-Jun-2025 @ 12:22:07 PM
>>>>>>> aea9860927cf4b779f5bda26fb65a58d9e991a5c
*
*/

#include "serial.h"

// External input
typedef struct {
} dq_current_ctrl_ExtIn;


// External output
typedef struct {
} dq_current_ctrl_ExtOut;

// Sinks
typedef struct {
} dq_current_ctrl_ModelSinks;

// States
typedef struct {
    // Generated from the component: dq_current_ctrl.ADC (Generic)1.ADC.advanced c function



    // Generated from the component: dq_current_ctrl.ADC (Generic)2.ADC.advanced c function



    // Generated from the component: dq_current_ctrl.ADC (Generic)3.ADC.advanced c function



    // Generated from the component: dq_current_ctrl.ADC (Generic)4.ADC.advanced c function



    // Generated from the component: dq_current_ctrl.ADC (Generic)5.ADC.advanced c function



    // Generated from the component: dq_current_ctrl.ADC (Generic)6.ADC.advanced c function



    // Generated from the component: dq_current_ctrl.Delay1
    real_t _dq_current_ctrl_delay1__state[1];
    uint_t _dq_current_ctrl_delay1__cbi;

    // Generated from the component: dq_current_ctrl.SCI Receive1.advanced c function
    real_t _dq_current_ctrl_sci_receive1_advanced_c_function__state_var[4];




    // Generated from the component: dq_current_ctrl.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: dq_current_ctrl.GPIO DO (Generic)1.GPIO DO.advanced c function



    // Generated from the component: dq_current_ctrl.ePWM (Generic)2.ePWM 1.advanced c function



    // Generated from the component: dq_current_ctrl.GPIO DO (Generic)2.GPIO DO.advanced c function



    // Generated from the component: dq_current_ctrl.C function PLL
    real_t _dq_current_ctrl_c_function_pll__y_q;

    real_t _dq_current_ctrl_c_function_pll__theta;




    // Generated from the component: dq_current_ctrl.C function abc to dq



    // Generated from the component: dq_current_ctrl.SCI Send1.advanced c function



    // Generated from the component: dq_current_ctrl.C function PI current controller
    real_t _dq_current_ctrl_c_function_pi_current_controller__y_d;

    real_t _dq_current_ctrl_c_function_pi_current_controller__y_q;

    real_t _dq_current_ctrl_c_function_pi_current_controller__e_d;

    real_t _dq_current_ctrl_c_function_pi_current_controller__e_q;




    // Generated from the component: dq_current_ctrl.C function dq to abc



    // Generated from the component: dq_current_ctrl.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: dq_current_ctrl.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA



    // Generated from the component: dq_current_ctrl.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA



    // Generated from the component: dq_current_ctrl.ePWM (Generic)1.ePWM 1.advanced c function



    // Generated from the component: dq_current_ctrl.ePWM (Generic)1.ePWM 2.advanced c function



    // Generated from the component: dq_current_ctrl.ePWM (Generic)1.ePWM 3.advanced c function



    // Generated from the component: dq_current_ctrl.SCI Setup1.advanced c function



} dq_current_ctrl_ModelStates;

// Model data structure
typedef struct {
    dq_current_ctrl_ExtIn *p_extIn;
    dq_current_ctrl_ExtOut *p_extOut;
    dq_current_ctrl_ModelSinks *p_Sinks;
    dq_current_ctrl_ModelStates *p_States;
} dq_current_ctrl_ModelData;

// External input
extern dq_current_ctrl_ExtIn dq_current_ctrl_ext_In;

// External output
extern dq_current_ctrl_ExtOut dq_current_ctrl_ext_Out;

// Sinks
extern dq_current_ctrl_ModelSinks dq_current_ctrl_m_Sinks;

// States
extern dq_current_ctrl_ModelStates dq_current_ctrl_m_States;

// Model data structure
extern dq_current_ctrl_ModelData dq_current_ctrl_m_Data;

// Model entry point functions
// Execution rate: 5e-05
extern void dq_current_ctrl_init0(dq_current_ctrl_ModelData *p_m_Data);
extern void dq_current_ctrl_step0(dq_current_ctrl_ModelData *p_m_Data);
// Execution rate: 0.1
extern void dq_current_ctrl_init1(dq_current_ctrl_ModelData *p_m_Data);
extern void dq_current_ctrl_step1(dq_current_ctrl_ModelData *p_m_Data);
