/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: albe_current_ctrl.h
*
* Code generated from model             : 'albe_current_ctrl_v1'.
* Subsystem selected for code generation: 'albe_current_ctrl'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 06-Jun-2025 @ 04:29:23 PM
*
*/

#include "serial.h"

// External input
typedef struct {
} albe_current_ctrl_ExtIn;


// External output
typedef struct {
} albe_current_ctrl_ExtOut;

// Sinks
typedef struct {
} albe_current_ctrl_ModelSinks;

// States
typedef struct {
    // Generated from the component: albe_current_ctrl.ADC (Generic)1.ADC.advanced c function



    // Generated from the component: albe_current_ctrl.ADC (Generic)2.ADC.advanced c function



    // Generated from the component: albe_current_ctrl.ADC (Generic)3.ADC.advanced c function



    // Generated from the component: albe_current_ctrl.ADC (Generic)4.ADC.advanced c function



    // Generated from the component: albe_current_ctrl.ADC (Generic)5.ADC.advanced c function



    // Generated from the component: albe_current_ctrl.ADC (Generic)6.ADC.advanced c function



    // Generated from the component: albe_current_ctrl.ADC (Generic)7.ADC.advanced c function



    // Generated from the component: albe_current_ctrl.Delay1
    real_t _albe_current_ctrl_delay1__state[1];
    uint_t _albe_current_ctrl_delay1__cbi;

    // Generated from the component: albe_current_ctrl.SCI Receive1.advanced c function
    real_t _albe_current_ctrl_sci_receive1_advanced_c_function__state_var[4];




    // Generated from the component: albe_current_ctrl.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: albe_current_ctrl.GPIO DO (Generic)1.GPIO DO.advanced c function



    // Generated from the component: albe_current_ctrl.ePWM (Generic)2.ePWM 1.advanced c function



    // Generated from the component: albe_current_ctrl.GPIO DO (Generic)2.GPIO DO.advanced c function



    // Generated from the component: albe_current_ctrl.C function dq to abc1



    // Generated from the component: albe_current_ctrl.ePWM (Generic)3.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: albe_current_ctrl.ePWM (Generic)3.ePWM 1.advanced c function



    // Generated from the component: albe_current_ctrl.current_ctrl.C function abc to dq1



    // Generated from the component: albe_current_ctrl.current_ctrl.C function PLL
    real_t _albe_current_ctrl_current_ctrl_c_function_pll__y_q;

    real_t _albe_current_ctrl_current_ctrl_c_function_pll__theta;




    // Generated from the component: albe_current_ctrl.current_ctrl.C function abc to dq2



    // Generated from the component: albe_current_ctrl.C function dq to abc2



    // Generated from the component: albe_current_ctrl.SCI Send1.advanced c function



    // Generated from the component: albe_current_ctrl.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA



    // Generated from the component: albe_current_ctrl.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA



    // Generated from the component: albe_current_ctrl.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA



    // Generated from the component: albe_current_ctrl.ePWM (Generic)1.ePWM 1.advanced c function



    // Generated from the component: albe_current_ctrl.ePWM (Generic)1.ePWM 2.advanced c function



    // Generated from the component: albe_current_ctrl.ePWM (Generic)1.ePWM 3.advanced c function



    // Generated from the component: albe_current_ctrl.current_ctrl.C function abc to dq



    // Generated from the component: albe_current_ctrl.SCI Setup1.advanced c function



} albe_current_ctrl_ModelStates;

// Model data structure
typedef struct {
    albe_current_ctrl_ExtIn *p_extIn;
    albe_current_ctrl_ExtOut *p_extOut;
    albe_current_ctrl_ModelSinks *p_Sinks;
    albe_current_ctrl_ModelStates *p_States;
} albe_current_ctrl_ModelData;

// External input
extern albe_current_ctrl_ExtIn albe_current_ctrl_ext_In;

// External output
extern albe_current_ctrl_ExtOut albe_current_ctrl_ext_Out;

// Sinks
extern albe_current_ctrl_ModelSinks albe_current_ctrl_m_Sinks;

// States
extern albe_current_ctrl_ModelStates albe_current_ctrl_m_States;

// Model data structure
extern albe_current_ctrl_ModelData albe_current_ctrl_m_Data;

// Model entry point functions
// Execution rate: 5e-05
extern void albe_current_ctrl_init0(albe_current_ctrl_ModelData *p_m_Data);
extern void albe_current_ctrl_step0(albe_current_ctrl_ModelData *p_m_Data);
// Execution rate: 0.1
extern void albe_current_ctrl_init1(albe_current_ctrl_ModelData *p_m_Data);
extern void albe_current_ctrl_step1(albe_current_ctrl_ModelData *p_m_Data);
