// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif








// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines










































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables





// const variables

//@cmp.var.start
// variables
double _controller_clock1__out;
double _plant_c__out = 1.0;
double _plant_vdc_va1__out;
double _plant_is_a_ia1__out;
double _plant_is_b_ia1__out;
double _plant_is_c_ia1__out;
double _plant_it_a_ia1__out;
double _plant_it_b_ia1__out;
double _plant_it_c_ia1__out;
double _plant_vs_a_va1__out;
double _plant_vs_b_va1__out;
double _plant_vs_c_va1__out;
double _plant_vt_a_va1__out;
double _plant_vt_b_va1__out;
double _plant_vt_c_va1__out;
double _scada_constant1__out = 0.0;
double _scada_control__out;
double _scada_rate_transition10_output__out;
X_UnInt32 _scada_rate_transition7_output__out;
X_UnInt32 _scada_rate_transition8_output__out;
double _scada_rate_transition9_output__out;
X_UnInt32 _scada_interruptor_statcom__out;
double _scada_pref__out;
double _scada_qref__out;
X_UnInt32 _scada_startac__out;
X_UnInt32 _scada_startfsm__out;
X_UnInt32 _scada_wires__out;
double _scada_rms_value1__out;
X_UnInt32 _scada_rms_value1__zc;
double _scada_rms_value7__out;
X_UnInt32 _scada_rms_value7__zc;
double _controller_bus_join3__out[3];
double _scada_rms_value3__out;
X_UnInt32 _scada_rms_value3__zc;
double _scada_rms_value4__out;
X_UnInt32 _scada_rms_value4__zc;
double _scada_rms_value8__out;
X_UnInt32 _scada_rms_value8__zc;
double _controller_bus_join4__out[3];
double _scada_c_function_powers__i_a;
double _scada_c_function_powers__i_b;
double _scada_c_function_powers__i_c;
double _scada_c_function_powers__v_a;
double _scada_c_function_powers__v_b;
double _scada_c_function_powers__v_c;

double _scada_c_function_powers__p;
double _scada_c_function_powers__p_f;
double _scada_c_function_powers__q;
double _scada_c_function_powers__q_f;

double _scada_rms_value6__out;
X_UnInt32 _scada_rms_value6__zc;
double _scada_bus_join7__out[2];
double _controller_c_function_pll__abc[3];

double _controller_c_function_pll__d;
double _controller_c_function_pll__e_q;
double _controller_c_function_pll__omega_pll;
double _controller_c_function_pll__q;
double _controller_c_function_pll__theta_pll;

double _controller_bus_join6__out[2];
double _controller_c_function_abc_to_dq__abc[3];
double _controller_c_function_abc_to_dq__theta;

double _controller_c_function_abc_to_dq__d;
double _controller_c_function_abc_to_dq__q;

double _scada_gain1__out;
double _controller_c_function_current_refer__pq_ref[2];
double _controller_c_function_current_refer__time;
double _controller_c_function_current_refer__vs_dq[2];

double _controller_c_function_current_refer__is_d_ref;
double _controller_c_function_current_refer__is_q_ref;

double _scada_bus_split3__out;
double _scada_bus_split3__out1;
double _controller_bus_join5__out[2];
double _controller_bus_join11__out[2];
double _scada_bus_split4__out;
double _scada_bus_split4__out1;
double _controller_c_function_pi_current_controller__is_dq[2];
double _controller_c_function_pi_current_controller__is_dq_ref[2];
double _controller_c_function_pi_current_controller__omega_pll;
double _controller_c_function_pi_current_controller__time;
double _controller_c_function_pi_current_controller__v_dc;
double _controller_c_function_pi_current_controller__vs_dq[2];

double _controller_c_function_pi_current_controller__eta_d;
double _controller_c_function_pi_current_controller__eta_q;

double _scada_bus_split2__out;
double _scada_bus_split2__out1;
double _controller_bus_join8__out[2];
double _controller_c_function_dq_to_abc__dq[2];
double _controller_c_function_dq_to_abc__theta;

double _controller_c_function_dq_to_abc__a;
double _controller_c_function_dq_to_abc__b;
double _controller_c_function_dq_to_abc__c;

double _scada_bus_split5__out;
double _scada_bus_split5__out1;
double _controller_bus_join9__out[3];
double _plant_bus_split1__out;
double _plant_bus_split1__out1;
double _plant_bus_split1__out2;
double _scada_bus_split1__out;
double _scada_bus_split1__out1;
double _scada_bus_split1__out2;
X_UnInt32 _plant_three_phase_inverter_phase_a_pwm_modulator__channels[1] = {0};
double _plant_three_phase_inverter_phase_a_pwm_modulator__limited_in[1];

X_UnInt32 _plant_three_phase_inverter_phase_b_pwm_modulator__channels[1] = {1};
double _plant_three_phase_inverter_phase_b_pwm_modulator__limited_in[1];

X_UnInt32 _plant_three_phase_inverter_phase_c_pwm_modulator__channels[1] = {2};
double _plant_three_phase_inverter_phase_c_pwm_modulator__limited_in[1];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _controller_clock1__state;
double _scada_rate_transition10_output__state;
X_UnInt32 _scada_rate_transition7_output__state;
X_UnInt32 _scada_rate_transition8_output__state;
double _scada_rate_transition9_output__state;
double _scada_rms_value1__square_sum;
double _scada_rms_value1__sample_cnt;
double _scada_rms_value1__period_cnt;
double _scada_rms_value1__db_timer;
double _scada_rms_value1__previous_filtered_value;
double _scada_rms_value1__previous_correction;
double _scada_rms_value1__previous_value;
double _scada_rms_value1__correction;
double _scada_rms_value1__filtered_value;
double _scada_rms_value1__out_state;
double _scada_rms_value7__square_sum;
double _scada_rms_value7__sample_cnt;
double _scada_rms_value7__period_cnt;
double _scada_rms_value7__db_timer;
double _scada_rms_value7__previous_filtered_value;
double _scada_rms_value7__previous_correction;
double _scada_rms_value7__previous_value;
double _scada_rms_value7__correction;
double _scada_rms_value7__filtered_value;
double _scada_rms_value7__out_state;
double _scada_rms_value3__square_sum;
double _scada_rms_value3__sample_cnt;
double _scada_rms_value3__period_cnt;
double _scada_rms_value3__db_timer;
double _scada_rms_value3__previous_filtered_value;
double _scada_rms_value3__previous_correction;
double _scada_rms_value3__previous_value;
double _scada_rms_value3__correction;
double _scada_rms_value3__filtered_value;
double _scada_rms_value3__out_state;
double _scada_rms_value4__square_sum;
double _scada_rms_value4__sample_cnt;
double _scada_rms_value4__period_cnt;
double _scada_rms_value4__db_timer;
double _scada_rms_value4__previous_filtered_value;
double _scada_rms_value4__previous_correction;
double _scada_rms_value4__previous_value;
double _scada_rms_value4__correction;
double _scada_rms_value4__filtered_value;
double _scada_rms_value4__out_state;
double _scada_rms_value8__square_sum;
double _scada_rms_value8__sample_cnt;
double _scada_rms_value8__period_cnt;
double _scada_rms_value8__db_timer;
double _scada_rms_value8__previous_filtered_value;
double _scada_rms_value8__previous_correction;
double _scada_rms_value8__previous_value;
double _scada_rms_value8__correction;
double _scada_rms_value8__filtered_value;
double _scada_rms_value8__out_state;
double _scada_c_function_powers__p_fil;

double _scada_c_function_powers__q_fil;




double _scada_rms_value6__square_sum;
double _scada_rms_value6__sample_cnt;
double _scada_rms_value6__period_cnt;
double _scada_rms_value6__db_timer;
double _scada_rms_value6__previous_filtered_value;
double _scada_rms_value6__previous_correction;
double _scada_rms_value6__previous_value;
double _scada_rms_value6__correction;
double _scada_rms_value6__filtered_value;
double _scada_rms_value6__out_state;
double _controller_c_function_pll__y_q;

double _controller_c_function_pll__theta;










double _controller_c_function_pi_current_controller__y_d;

double _controller_c_function_pi_current_controller__y_q;

double _controller_c_function_pi_current_controller__e_d;

double _controller_c_function_pi_current_controller__e_q;







//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _controller_clock1__state = 0.0f;
    _scada_rate_transition10_output__state =  0.0;
    _scada_rate_transition7_output__state = (X_UnInt32) 0.0;
    _scada_rate_transition8_output__state = (X_UnInt32) 0.0;
    _scada_rate_transition9_output__state =  0.0;
    _scada_rms_value1__square_sum = 0x0;
    _scada_rms_value1__sample_cnt = 0x0;
    _scada_rms_value1__period_cnt = 0x0;
    _scada_rms_value1__db_timer = 0x0;
    _scada_rms_value1__previous_filtered_value = 0x0;
    _scada_rms_value1__previous_correction = 0x0;
    _scada_rms_value1__correction = 0x0;
    _scada_rms_value1__previous_value = 0x0;
    _scada_rms_value1__out_state = 0x0;
    _scada_rms_value1__filtered_value = 0x0;
    _scada_rms_value1__db_timer = 0x0;
    HIL_OutAO(0x400d, 0.0f);
    _scada_rms_value7__square_sum = 0x0;
    _scada_rms_value7__sample_cnt = 0x0;
    _scada_rms_value7__period_cnt = 0x0;
    _scada_rms_value7__db_timer = 0x0;
    _scada_rms_value7__previous_filtered_value = 0x0;
    _scada_rms_value7__previous_correction = 0x0;
    _scada_rms_value7__correction = 0x0;
    _scada_rms_value7__previous_value = 0x0;
    _scada_rms_value7__out_state = 0x0;
    _scada_rms_value7__filtered_value = 0x0;
    _scada_rms_value7__db_timer = 0x0;
    HIL_OutAO(0x400e, 0.0f);
    _scada_rms_value3__square_sum = 0x0;
    _scada_rms_value3__sample_cnt = 0x0;
    _scada_rms_value3__period_cnt = 0x0;
    _scada_rms_value3__db_timer = 0x0;
    _scada_rms_value3__previous_filtered_value = 0x0;
    _scada_rms_value3__previous_correction = 0x0;
    _scada_rms_value3__correction = 0x0;
    _scada_rms_value3__previous_value = 0x0;
    _scada_rms_value3__out_state = 0x0;
    _scada_rms_value3__filtered_value = 0x0;
    _scada_rms_value3__db_timer = 0x0;
    HIL_OutAO(0x400f, 0.0f);
    _scada_rms_value4__square_sum = 0x0;
    _scada_rms_value4__sample_cnt = 0x0;
    _scada_rms_value4__period_cnt = 0x0;
    _scada_rms_value4__db_timer = 0x0;
    _scada_rms_value4__previous_filtered_value = 0x0;
    _scada_rms_value4__previous_correction = 0x0;
    _scada_rms_value4__correction = 0x0;
    _scada_rms_value4__previous_value = 0x0;
    _scada_rms_value4__out_state = 0x0;
    _scada_rms_value4__filtered_value = 0x0;
    _scada_rms_value4__db_timer = 0x0;
    _scada_rms_value8__square_sum = 0x0;
    _scada_rms_value8__sample_cnt = 0x0;
    _scada_rms_value8__period_cnt = 0x0;
    _scada_rms_value8__db_timer = 0x0;
    _scada_rms_value8__previous_filtered_value = 0x0;
    _scada_rms_value8__previous_correction = 0x0;
    _scada_rms_value8__correction = 0x0;
    _scada_rms_value8__previous_value = 0x0;
    _scada_rms_value8__out_state = 0x0;
    _scada_rms_value8__filtered_value = 0x0;
    _scada_rms_value8__db_timer = 0x0;
    {
        _scada_c_function_powers__p_fil = 0 ;
        _scada_c_function_powers__q_fil = 0 ;
    }
    _scada_rms_value6__square_sum = 0x0;
    _scada_rms_value6__sample_cnt = 0x0;
    _scada_rms_value6__period_cnt = 0x0;
    _scada_rms_value6__db_timer = 0x0;
    _scada_rms_value6__previous_filtered_value = 0x0;
    _scada_rms_value6__previous_correction = 0x0;
    _scada_rms_value6__correction = 0x0;
    _scada_rms_value6__previous_value = 0x0;
    _scada_rms_value6__out_state = 0x0;
    _scada_rms_value6__filtered_value = 0x0;
    _scada_rms_value6__db_timer = 0x0;
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    {
        _controller_c_function_pll__y_q = 0 ;
        _controller_c_function_pll__theta = 0 ;
    }
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    {
    }
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    {
    }
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    {
        _controller_c_function_pi_current_controller__e_d = 0.0 ;
        _controller_c_function_pi_current_controller__e_q = 0.0 ;
        _controller_c_function_pi_current_controller__y_d = 0.0 ;
        _controller_c_function_pi_current_controller__y_q = 0.0 ;
    }
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    {
    }
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutInt32(0x2000080 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 20000);
    HIL_OutInt32(0x20000c0 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 40);
    HIL_OutInt32(0x20001c0 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x1);
    HIL_OutInt32(0x2000080 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 20000);
    HIL_OutInt32(0x20000c0 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 40);
    HIL_OutInt32(0x20001c0 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x2);
    HIL_OutInt32(0x2000080 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 20000);
    HIL_OutInt32(0x20000c0 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 40);
    HIL_OutInt32(0x20001c0 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x4);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: virtual_hil/common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: Plant.C
    // Generated from the component: SCADA.Constant1
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Controller.Clock1
    _controller_clock1__out = _controller_clock1__state;
    // Generated from the component: Plant.VDC.Va1
    _plant_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x8));
    // Generated from the component: Plant.is_a.Ia1
    _plant_is_a_ia1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Plant.is_b.Ia1
    _plant_is_b_ia1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: Plant.is_c.Ia1
    _plant_is_c_ia1__out = (HIL_InFloat(0xc80000 + 0x12));
    // Generated from the component: Plant.it_a.Ia1
    _plant_it_a_ia1__out = (HIL_InFloat(0xc80000 + 0x13));
    // Generated from the component: Plant.it_b.Ia1
    _plant_it_b_ia1__out = (HIL_InFloat(0xc80000 + 0x14));
    // Generated from the component: Plant.it_c.Ia1
    _plant_it_c_ia1__out = (HIL_InFloat(0xc80000 + 0x15));
    // Generated from the component: Plant.vs_a.Va1
    _plant_vs_a_va1__out = (HIL_InFloat(0xc80000 + 0x9));
    // Generated from the component: Plant.vs_b.Va1
    _plant_vs_b_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: Plant.vs_c.Va1
    _plant_vs_c_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Plant.vt_a.Va1
    _plant_vt_a_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Plant.vt_b.Va1
    _plant_vt_b_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: Plant.vt_c.Va1
    _plant_vt_c_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: SCADA.Rate Transition10.Output
    _scada_rate_transition10_output__out = _scada_rate_transition10_output__state;
    // Generated from the component: SCADA.Rate Transition7.Output
    _scada_rate_transition7_output__out = _scada_rate_transition7_output__state;
    // Generated from the component: SCADA.Rate Transition8.Output
    _scada_rate_transition8_output__out = _scada_rate_transition8_output__state;
    // Generated from the component: SCADA.Rate Transition9.Output
    _scada_rate_transition9_output__out = _scada_rate_transition9_output__state;
    // Generated from the component: Plant.Three Phase Inverter.Phase A.IGBT Leg global gds ovs.termination1
    // Generated from the component: Plant.Three Phase Inverter.Phase B.IGBT Leg global gds ovs.termination1
    // Generated from the component: Plant.Three Phase Inverter.Phase C.IGBT Leg global gds ovs.termination1
    // Generated from the component: SCADA.RMS value1
    _scada_rms_value1__previous_filtered_value = _scada_rms_value1__filtered_value;
    if (1)
        _scada_rms_value1__filtered_value = _scada_rms_value1__previous_filtered_value * 0.6858407346410207 + _plant_is_a_ia1__out * 0.3141592653589793;
    else
        _scada_rms_value1__filtered_value = _scada_rms_value1__previous_filtered_value * 0.1 + _plant_is_a_ia1__out * 0.9;
    _scada_rms_value1__db_timer += 5e-05;
    if( (_scada_rms_value1__filtered_value >= 0.0) && (_scada_rms_value1__previous_filtered_value < 0.0) && (_scada_rms_value1__db_timer >= 0.0) ) {
        _scada_rms_value1__zc = 1;
        _scada_rms_value1__db_timer = 0;
    } else
        _scada_rms_value1__zc = 0;
    _scada_rms_value1__out = _scada_rms_value1__out_state;
    // Generated from the component: SCADA.is_a_SCADA
    HIL_OutAO(0x400d, (float)_plant_is_a_ia1__out);
    // Generated from the component: SCADA.RMS value7
    _scada_rms_value7__previous_filtered_value = _scada_rms_value7__filtered_value;
    if (1)
        _scada_rms_value7__filtered_value = _scada_rms_value7__previous_filtered_value * 0.6858407346410207 + _plant_is_b_ia1__out * 0.3141592653589793;
    else
        _scada_rms_value7__filtered_value = _scada_rms_value7__previous_filtered_value * 0.1 + _plant_is_b_ia1__out * 0.9;
    _scada_rms_value7__db_timer += 5e-05;
    if( (_scada_rms_value7__filtered_value >= 0.0) && (_scada_rms_value7__previous_filtered_value < 0.0) && (_scada_rms_value7__db_timer >= 0.0) ) {
        _scada_rms_value7__zc = 1;
        _scada_rms_value7__db_timer = 0;
    } else
        _scada_rms_value7__zc = 0;
    _scada_rms_value7__out = _scada_rms_value7__out_state;
    // Generated from the component: SCADA.is_b_SCADA
    HIL_OutAO(0x400e, (float)_plant_is_b_ia1__out);
    // Generated from the component: Controller.Bus Join3
    _controller_bus_join3__out[0] = _plant_is_a_ia1__out;
    _controller_bus_join3__out[1] = _plant_is_b_ia1__out;
    _controller_bus_join3__out[2] = _plant_is_c_ia1__out;
    // Generated from the component: SCADA.RMS value3
    _scada_rms_value3__previous_filtered_value = _scada_rms_value3__filtered_value;
    if (1)
        _scada_rms_value3__filtered_value = _scada_rms_value3__previous_filtered_value * 0.6858407346410207 + _plant_is_c_ia1__out * 0.3141592653589793;
    else
        _scada_rms_value3__filtered_value = _scada_rms_value3__previous_filtered_value * 0.1 + _plant_is_c_ia1__out * 0.9;
    _scada_rms_value3__db_timer += 5e-05;
    if( (_scada_rms_value3__filtered_value >= 0.0) && (_scada_rms_value3__previous_filtered_value < 0.0) && (_scada_rms_value3__db_timer >= 0.0) ) {
        _scada_rms_value3__zc = 1;
        _scada_rms_value3__db_timer = 0;
    } else
        _scada_rms_value3__zc = 0;
    _scada_rms_value3__out = _scada_rms_value3__out_state;
    // Generated from the component: SCADA.is_c_SCADA
    HIL_OutAO(0x400f, (float)_plant_is_c_ia1__out);
    // Generated from the component: SCADA.RMS value4
    _scada_rms_value4__previous_filtered_value = _scada_rms_value4__filtered_value;
    if (1)
        _scada_rms_value4__filtered_value = _scada_rms_value4__previous_filtered_value * 0.6858407346410207 + _plant_vs_a_va1__out * 0.3141592653589793;
    else
        _scada_rms_value4__filtered_value = _scada_rms_value4__previous_filtered_value * 0.1 + _plant_vs_a_va1__out * 0.9;
    _scada_rms_value4__db_timer += 5e-05;
    if( (_scada_rms_value4__filtered_value >= 0.0) && (_scada_rms_value4__previous_filtered_value < 0.0) && (_scada_rms_value4__db_timer >= 0.0) ) {
        _scada_rms_value4__zc = 1;
        _scada_rms_value4__db_timer = 0;
    } else
        _scada_rms_value4__zc = 0;
    _scada_rms_value4__out = _scada_rms_value4__out_state;
    // Generated from the component: SCADA.RMS value8
    _scada_rms_value8__previous_filtered_value = _scada_rms_value8__filtered_value;
    if (1)
        _scada_rms_value8__filtered_value = _scada_rms_value8__previous_filtered_value * 0.6858407346410207 + _plant_vs_b_va1__out * 0.3141592653589793;
    else
        _scada_rms_value8__filtered_value = _scada_rms_value8__previous_filtered_value * 0.1 + _plant_vs_b_va1__out * 0.9;
    _scada_rms_value8__db_timer += 5e-05;
    if( (_scada_rms_value8__filtered_value >= 0.0) && (_scada_rms_value8__previous_filtered_value < 0.0) && (_scada_rms_value8__db_timer >= 0.0) ) {
        _scada_rms_value8__zc = 1;
        _scada_rms_value8__db_timer = 0;
    } else
        _scada_rms_value8__zc = 0;
    _scada_rms_value8__out = _scada_rms_value8__out_state;
    // Generated from the component: Controller.Bus Join4
    _controller_bus_join4__out[0] = _plant_vs_a_va1__out;
    _controller_bus_join4__out[1] = _plant_vs_b_va1__out;
    _controller_bus_join4__out[2] = _plant_vs_c_va1__out;
    // Generated from the component: SCADA.C function powers
    _scada_c_function_powers__i_a = _plant_is_a_ia1__out;
    _scada_c_function_powers__i_b = _plant_is_b_ia1__out;
    _scada_c_function_powers__i_c = _plant_is_c_ia1__out;
    _scada_c_function_powers__v_a = _plant_vs_a_va1__out;
    _scada_c_function_powers__v_b = _plant_vs_b_va1__out;
    _scada_c_function_powers__v_c = _plant_vs_c_va1__out;
    {
        _scada_c_function_powers__p = _scada_c_function_powers__v_a * _scada_c_function_powers__i_a + _scada_c_function_powers__v_b * _scada_c_function_powers__i_b + _scada_c_function_powers__v_c * _scada_c_function_powers__i_c ;
        _scada_c_function_powers__q = 1 / sqrt ( 3 ) * ( _scada_c_function_powers__i_c * ( _scada_c_function_powers__v_a - _scada_c_function_powers__v_b ) + _scada_c_function_powers__i_a * ( _scada_c_function_powers__v_b - _scada_c_function_powers__v_c ) + _scada_c_function_powers__i_b * ( _scada_c_function_powers__v_c - _scada_c_function_powers__v_a ) ) ;
        _scada_c_function_powers__p_f = _scada_c_function_powers__p_fil ;
        _scada_c_function_powers__q_f = _scada_c_function_powers__q_fil ;
    }
    // Generated from the component: SCADA.RMS value6
    _scada_rms_value6__previous_filtered_value = _scada_rms_value6__filtered_value;
    if (1)
        _scada_rms_value6__filtered_value = _scada_rms_value6__previous_filtered_value * 0.6858407346410207 + _plant_vs_c_va1__out * 0.3141592653589793;
    else
        _scada_rms_value6__filtered_value = _scada_rms_value6__previous_filtered_value * 0.1 + _plant_vs_c_va1__out * 0.9;
    _scada_rms_value6__db_timer += 5e-05;
    if( (_scada_rms_value6__filtered_value >= 0.0) && (_scada_rms_value6__previous_filtered_value < 0.0) && (_scada_rms_value6__db_timer >= 0.0) ) {
        _scada_rms_value6__zc = 1;
        _scada_rms_value6__db_timer = 0;
    } else
        _scada_rms_value6__zc = 0;
    _scada_rms_value6__out = _scada_rms_value6__out_state;
    // Generated from the component: SCADA.Fault_type
    HIL_OutAO(0x4001, (float)_scada_constant1__out);
    // Generated from the component: SCADA.p_ref
    HIL_OutAO(0x4017, (float)_scada_rate_transition10_output__out);
    // Generated from the component: Plant.S1.Triple S1 ideal.CTC_Wrapper
    if (_scada_rate_transition7_output__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: SCADA.breaker
    HIL_OutAO(0x4002, (float)_scada_rate_transition7_output__out);
    // Generated from the component: SCADA.sAC
    HIL_OutAO(0x401b, (float)_scada_rate_transition8_output__out);
    // Generated from the component: SCADA.Bus Join7
    _scada_bus_join7__out[0] = _scada_rate_transition10_output__out;
    _scada_bus_join7__out[1] = _scada_rate_transition9_output__out;
    // Generated from the component: SCADA.q_ref
    HIL_OutAO(0x401a, (float)_scada_rate_transition9_output__out);
    // Generated from the component: SCADA.iarms
    HIL_OutAO(0x400a, (float)_scada_rms_value1__out);
    // Generated from the component: SCADA.ibrms
    HIL_OutAO(0x400b, (float)_scada_rms_value7__out);
    // Generated from the component: SCADA.icrms
    HIL_OutAO(0x400c, (float)_scada_rms_value3__out);
    // Generated from the component: SCADA.varms
    HIL_OutAO(0x401f, (float)_scada_rms_value4__out);
    // Generated from the component: SCADA.vbrms
    HIL_OutAO(0x4020, (float)_scada_rms_value8__out);
    // Generated from the component: Controller.C function PLL
    _controller_c_function_pll__abc[0] = _controller_bus_join4__out[0];
    _controller_c_function_pll__abc[1] = _controller_bus_join4__out[1];
    _controller_c_function_pll__abc[2] = _controller_bus_join4__out[2];
    {
        _controller_c_function_pll__d = 2.0 / 3.0 * ( cos ( _controller_c_function_pll__theta ) * _controller_c_function_pll__abc [ 0 ] + cos ( _controller_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_pll__abc [ 1 ] + cos ( _controller_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_pll__abc [ 2 ] ) ;
        _controller_c_function_pll__q = 2.0 / 3.0 * ( - sin ( _controller_c_function_pll__theta ) * _controller_c_function_pll__abc [ 0 ] - sin ( _controller_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_pll__abc [ 1 ] - sin ( _controller_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_pll__abc [ 2 ] ) ;
        _controller_c_function_pll__e_q = _controller_c_function_pll__q ;
        _controller_c_function_pll__omega_pll = 1.8 * _controller_c_function_pll__e_q + _controller_c_function_pll__y_q ;
        _controller_c_function_pll__theta_pll = _controller_c_function_pll__theta ;
    }
    // Generated from the component: SCADA.p
    HIL_OutAO(0x4015, (float)_scada_c_function_powers__p);
    // Generated from the component: SCADA.p_fil
    HIL_OutAO(0x4016, (float)_scada_c_function_powers__p_f);
    // Generated from the component: SCADA.q
    HIL_OutAO(0x4018, (float)_scada_c_function_powers__q);
    // Generated from the component: SCADA.q_fil
    HIL_OutAO(0x4019, (float)_scada_c_function_powers__q_f);
    // Generated from the component: SCADA.vcrms
    HIL_OutAO(0x4021, (float)_scada_rms_value6__out);
    // Generated from the component: Controller.Bus Join6
    _controller_bus_join6__out[0] = _controller_c_function_pll__d;
    _controller_bus_join6__out[1] = _controller_c_function_pll__q;
    // Generated from the component: Controller.C function abc to dq
    _controller_c_function_abc_to_dq__abc[0] = _controller_bus_join3__out[0];
    _controller_c_function_abc_to_dq__abc[1] = _controller_bus_join3__out[1];
    _controller_c_function_abc_to_dq__abc[2] = _controller_bus_join3__out[2];
    _controller_c_function_abc_to_dq__theta = _controller_c_function_pll__theta_pll;
    {
        _controller_c_function_abc_to_dq__d = 2.0 / 3.0 * ( cos ( _controller_c_function_abc_to_dq__theta ) * _controller_c_function_abc_to_dq__abc [ 0 ] + cos ( _controller_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_abc_to_dq__abc [ 1 ] + cos ( _controller_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_abc_to_dq__abc [ 2 ] ) ;
        _controller_c_function_abc_to_dq__q = 2.0 / 3.0 * ( - sin ( _controller_c_function_abc_to_dq__theta ) * _controller_c_function_abc_to_dq__abc [ 0 ] - sin ( _controller_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_abc_to_dq__abc [ 1 ] - sin ( _controller_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: Controller.Termination3
    // Generated from the component: SCADA.Gain1
    _scada_gain1__out = 0.15915494309189535 * _controller_c_function_pll__omega_pll;
    // Generated from the component: SCADA.omega_SCADA
    HIL_OutAO(0x4014, (float)_controller_c_function_pll__omega_pll);
    // Generated from the component: SCADA.theta_SCADA
    HIL_OutAO(0x401c, (float)_controller_c_function_pll__theta_pll);
    // Generated from the component: Controller.C function current refer
    _controller_c_function_current_refer__pq_ref[0] = _scada_bus_join7__out[0];
    _controller_c_function_current_refer__pq_ref[1] = _scada_bus_join7__out[1];
    _controller_c_function_current_refer__time = _scada_rate_transition8_output__out;
    _controller_c_function_current_refer__vs_dq[0] = _controller_bus_join6__out[0];
    _controller_c_function_current_refer__vs_dq[1] = _controller_bus_join6__out[1];
    {
        _controller_c_function_current_refer__is_d_ref = 0 ;
        _controller_c_function_current_refer__is_q_ref = 0 ;
        if ( _controller_c_function_current_refer__time > 0.001 )     {
            _controller_c_function_current_refer__is_d_ref = 2.0 / 3.0 * ( _controller_c_function_current_refer__pq_ref [ 0 ] * _controller_c_function_current_refer__vs_dq [ 0 ] - _controller_c_function_current_refer__pq_ref [ 1 ] * _controller_c_function_current_refer__vs_dq [ 1 ] ) / ( pow ( _controller_c_function_current_refer__vs_dq [ 0 ] , 2 ) + pow ( _controller_c_function_current_refer__vs_dq [ 1 ] , 2 ) ) ;
            _controller_c_function_current_refer__is_q_ref = 2.0 / 3.0 * ( _controller_c_function_current_refer__pq_ref [ 0 ] * _controller_c_function_current_refer__vs_dq [ 1 ] - _controller_c_function_current_refer__pq_ref [ 1 ] * _controller_c_function_current_refer__vs_dq [ 0 ] ) / ( pow ( _controller_c_function_current_refer__vs_dq [ 0 ] , 2 ) + pow ( _controller_c_function_current_refer__vs_dq [ 1 ] , 2 ) ) ;
        }
    }
    // Generated from the component: SCADA.Bus Split3
    _scada_bus_split3__out = _controller_bus_join6__out[0];
    _scada_bus_split3__out1 = _controller_bus_join6__out[1];
    // Generated from the component: Controller.Bus Join5
    _controller_bus_join5__out[0] = _controller_c_function_abc_to_dq__d;
    _controller_bus_join5__out[1] = _controller_c_function_abc_to_dq__q;
    // Generated from the component: SCADA.f_PLL
    HIL_OutAO(0x4009, (float)_scada_gain1__out);
    // Generated from the component: Controller.Bus Join11
    _controller_bus_join11__out[0] = _controller_c_function_current_refer__is_d_ref;
    _controller_bus_join11__out[1] = _controller_c_function_current_refer__is_q_ref;
    // Generated from the component: SCADA.v_d
    HIL_OutAO(0x401d, (float)_scada_bus_split3__out);
    // Generated from the component: SCADA.v_q
    HIL_OutAO(0x401e, (float)_scada_bus_split3__out1);
    // Generated from the component: SCADA.Bus Split4
    _scada_bus_split4__out = _controller_bus_join5__out[0];
    _scada_bus_split4__out1 = _controller_bus_join5__out[1];
    // Generated from the component: Controller.C function PI current controller
    _controller_c_function_pi_current_controller__is_dq[0] = _controller_bus_join5__out[0];
    _controller_c_function_pi_current_controller__is_dq[1] = _controller_bus_join5__out[1];
    _controller_c_function_pi_current_controller__is_dq_ref[0] = _controller_bus_join11__out[0];
    _controller_c_function_pi_current_controller__is_dq_ref[1] = _controller_bus_join11__out[1];
    _controller_c_function_pi_current_controller__omega_pll = _controller_c_function_pll__omega_pll;
    _controller_c_function_pi_current_controller__time = _controller_clock1__out;
    _controller_c_function_pi_current_controller__v_dc = _plant_vdc_va1__out;
    _controller_c_function_pi_current_controller__vs_dq[0] = _controller_bus_join6__out[0];
    _controller_c_function_pi_current_controller__vs_dq[1] = _controller_bus_join6__out[1];
    {
        _controller_c_function_pi_current_controller__eta_d = ( 2 / _controller_c_function_pi_current_controller__v_dc ) * ( 5.0 * _controller_c_function_pi_current_controller__e_d + _controller_c_function_pi_current_controller__y_d - 0.005 * _controller_c_function_pi_current_controller__omega_pll * _controller_c_function_pi_current_controller__is_dq [ 1 ] + _controller_c_function_pi_current_controller__vs_dq [ 0 ] ) ;
        _controller_c_function_pi_current_controller__eta_q = ( 2 / _controller_c_function_pi_current_controller__v_dc ) * ( 5.0 * _controller_c_function_pi_current_controller__e_q + _controller_c_function_pi_current_controller__y_q + 0.005 * _controller_c_function_pi_current_controller__omega_pll * _controller_c_function_pi_current_controller__is_dq [ 0 ] + _controller_c_function_pi_current_controller__vs_dq [ 1 ] ) ;
    }
    // Generated from the component: SCADA.Bus Split2
    _scada_bus_split2__out = _controller_bus_join11__out[0];
    _scada_bus_split2__out1 = _controller_bus_join11__out[1];
    // Generated from the component: SCADA.is_d
    HIL_OutAO(0x4010, (float)_scada_bus_split4__out);
    // Generated from the component: SCADA.is_q
    HIL_OutAO(0x4012, (float)_scada_bus_split4__out1);
    // Generated from the component: Controller.Bus Join8
    _controller_bus_join8__out[0] = _controller_c_function_pi_current_controller__eta_d;
    _controller_bus_join8__out[1] = _controller_c_function_pi_current_controller__eta_q;
    // Generated from the component: SCADA.is_d_ref
    HIL_OutAO(0x4011, (float)_scada_bus_split2__out);
    // Generated from the component: SCADA.is_q_ref
    HIL_OutAO(0x4013, (float)_scada_bus_split2__out1);
    // Generated from the component: Controller.C function dq to abc
    _controller_c_function_dq_to_abc__dq[0] = _controller_bus_join8__out[0];
    _controller_c_function_dq_to_abc__dq[1] = _controller_bus_join8__out[1];
    _controller_c_function_dq_to_abc__theta = _controller_c_function_pll__theta_pll;
    {
        _controller_c_function_dq_to_abc__a = cos ( _controller_c_function_dq_to_abc__theta ) * _controller_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_c_function_dq_to_abc__theta ) * _controller_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_c_function_dq_to_abc__b = cos ( _controller_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_c_function_dq_to_abc__c = cos ( _controller_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc__dq [ 1 ] ;
    }
    // Generated from the component: SCADA.Bus Split5
    _scada_bus_split5__out = _controller_bus_join8__out[0];
    _scada_bus_split5__out1 = _controller_bus_join8__out[1];
    // Generated from the component: Controller.Bus Join9
    _controller_bus_join9__out[0] = _controller_c_function_dq_to_abc__a;
    _controller_bus_join9__out[1] = _controller_c_function_dq_to_abc__b;
    _controller_bus_join9__out[2] = _controller_c_function_dq_to_abc__c;
    // Generated from the component: SCADA.eta_d
    HIL_OutAO(0x4007, (float)_scada_bus_split5__out);
    // Generated from the component: SCADA.eta_q
    HIL_OutAO(0x4008, (float)_scada_bus_split5__out1);
    // Generated from the component: Plant.Bus Split1
    _plant_bus_split1__out = _controller_bus_join9__out[0];
    _plant_bus_split1__out1 = _controller_bus_join9__out[1];
    _plant_bus_split1__out2 = _controller_bus_join9__out[2];
    // Generated from the component: SCADA.Bus Split1
    _scada_bus_split1__out = _controller_bus_join9__out[0];
    _scada_bus_split1__out1 = _controller_bus_join9__out[1];
    _scada_bus_split1__out2 = _controller_bus_join9__out[2];
    // Generated from the component: Plant.Three Phase Inverter.Phase A.PWM_Modulator
    _plant_three_phase_inverter_phase_a_pwm_modulator__limited_in[0] = MIN(MAX(_plant_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], ((X_UnInt32)((_plant_three_phase_inverter_phase_a_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_plant_c__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x1);
    // Generated from the component: Plant.Three Phase Inverter.Phase B.PWM_Modulator
    _plant_three_phase_inverter_phase_b_pwm_modulator__limited_in[0] = MIN(MAX(_plant_bus_split1__out1, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], ((X_UnInt32)((_plant_three_phase_inverter_phase_b_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_plant_c__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x2);
    // Generated from the component: Plant.Three Phase Inverter.Phase C.PWM_Modulator
    _plant_three_phase_inverter_phase_c_pwm_modulator__limited_in[0] = MIN(MAX(_plant_bus_split1__out2, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], ((X_UnInt32)((_plant_three_phase_inverter_phase_c_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_plant_c__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x4);
    // Generated from the component: SCADA.eta_a
    HIL_OutAO(0x4004, (float)_scada_bus_split1__out);
    // Generated from the component: SCADA.eta_b
    HIL_OutAO(0x4005, (float)_scada_bus_split1__out1);
    // Generated from the component: SCADA.eta_c
    HIL_OutAO(0x4006, (float)_scada_bus_split1__out2);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Controller.Clock1
    _controller_clock1__state += 5e-05;
    // Generated from the component: SCADA.RMS value1
    if( _scada_rms_value1__zc ) {
        if (_plant_is_a_ia1__out != _scada_rms_value1__previous_value)
            _scada_rms_value1__correction = - _scada_rms_value1__previous_value / (_plant_is_a_ia1__out - _scada_rms_value1__previous_value);
        if (_scada_rms_value1__correction < 0)
            _scada_rms_value1__correction = 0;
        else
            _scada_rms_value1__correction = 0;
        _scada_rms_value1__sample_cnt += _scada_rms_value1__correction - _scada_rms_value1__previous_correction;
        _scada_rms_value1__out_state = sqrt(_scada_rms_value1__square_sum / _scada_rms_value1__sample_cnt);
        _scada_rms_value1__sample_cnt = 0;
        _scada_rms_value1__previous_correction = _scada_rms_value1__correction;
        _scada_rms_value1__square_sum = 0;
    } else if ( _scada_rms_value1__sample_cnt >= 10000 ) {
        _scada_rms_value1__out_state = sqrt(_scada_rms_value1__square_sum / _scada_rms_value1__sample_cnt);
        _scada_rms_value1__sample_cnt = 0;
        _scada_rms_value1__square_sum = 0;
    }
    _scada_rms_value1__previous_value = _plant_is_a_ia1__out;
    _scada_rms_value1__square_sum += _plant_is_a_ia1__out * _plant_is_a_ia1__out;
    _scada_rms_value1__sample_cnt ++;
    // Generated from the component: SCADA.RMS value7
    if( _scada_rms_value7__zc ) {
        if (_plant_is_b_ia1__out != _scada_rms_value7__previous_value)
            _scada_rms_value7__correction = - _scada_rms_value7__previous_value / (_plant_is_b_ia1__out - _scada_rms_value7__previous_value);
        if (_scada_rms_value7__correction < 0)
            _scada_rms_value7__correction = 0;
        else
            _scada_rms_value7__correction = 0;
        _scada_rms_value7__sample_cnt += _scada_rms_value7__correction - _scada_rms_value7__previous_correction;
        _scada_rms_value7__out_state = sqrt(_scada_rms_value7__square_sum / _scada_rms_value7__sample_cnt);
        _scada_rms_value7__sample_cnt = 0;
        _scada_rms_value7__previous_correction = _scada_rms_value7__correction;
        _scada_rms_value7__square_sum = 0;
    } else if ( _scada_rms_value7__sample_cnt >= 10000 ) {
        _scada_rms_value7__out_state = sqrt(_scada_rms_value7__square_sum / _scada_rms_value7__sample_cnt);
        _scada_rms_value7__sample_cnt = 0;
        _scada_rms_value7__square_sum = 0;
    }
    _scada_rms_value7__previous_value = _plant_is_b_ia1__out;
    _scada_rms_value7__square_sum += _plant_is_b_ia1__out * _plant_is_b_ia1__out;
    _scada_rms_value7__sample_cnt ++;
    // Generated from the component: SCADA.RMS value3
    if( _scada_rms_value3__zc ) {
        if (_plant_is_c_ia1__out != _scada_rms_value3__previous_value)
            _scada_rms_value3__correction = - _scada_rms_value3__previous_value / (_plant_is_c_ia1__out - _scada_rms_value3__previous_value);
        if (_scada_rms_value3__correction < 0)
            _scada_rms_value3__correction = 0;
        else
            _scada_rms_value3__correction = 0;
        _scada_rms_value3__sample_cnt += _scada_rms_value3__correction - _scada_rms_value3__previous_correction;
        _scada_rms_value3__out_state = sqrt(_scada_rms_value3__square_sum / _scada_rms_value3__sample_cnt);
        _scada_rms_value3__sample_cnt = 0;
        _scada_rms_value3__previous_correction = _scada_rms_value3__correction;
        _scada_rms_value3__square_sum = 0;
    } else if ( _scada_rms_value3__sample_cnt >= 10000 ) {
        _scada_rms_value3__out_state = sqrt(_scada_rms_value3__square_sum / _scada_rms_value3__sample_cnt);
        _scada_rms_value3__sample_cnt = 0;
        _scada_rms_value3__square_sum = 0;
    }
    _scada_rms_value3__previous_value = _plant_is_c_ia1__out;
    _scada_rms_value3__square_sum += _plant_is_c_ia1__out * _plant_is_c_ia1__out;
    _scada_rms_value3__sample_cnt ++;
    // Generated from the component: SCADA.RMS value4
    if( _scada_rms_value4__zc ) {
        if (_plant_vs_a_va1__out != _scada_rms_value4__previous_value)
            _scada_rms_value4__correction = - _scada_rms_value4__previous_value / (_plant_vs_a_va1__out - _scada_rms_value4__previous_value);
        if (_scada_rms_value4__correction < 0)
            _scada_rms_value4__correction = 0;
        else
            _scada_rms_value4__correction = 0;
        _scada_rms_value4__sample_cnt += _scada_rms_value4__correction - _scada_rms_value4__previous_correction;
        _scada_rms_value4__out_state = sqrt(_scada_rms_value4__square_sum / _scada_rms_value4__sample_cnt);
        _scada_rms_value4__sample_cnt = 0;
        _scada_rms_value4__previous_correction = _scada_rms_value4__correction;
        _scada_rms_value4__square_sum = 0;
    } else if ( _scada_rms_value4__sample_cnt >= 10000 ) {
        _scada_rms_value4__out_state = sqrt(_scada_rms_value4__square_sum / _scada_rms_value4__sample_cnt);
        _scada_rms_value4__sample_cnt = 0;
        _scada_rms_value4__square_sum = 0;
    }
    _scada_rms_value4__previous_value = _plant_vs_a_va1__out;
    _scada_rms_value4__square_sum += _plant_vs_a_va1__out * _plant_vs_a_va1__out;
    _scada_rms_value4__sample_cnt ++;
    // Generated from the component: SCADA.RMS value8
    if( _scada_rms_value8__zc ) {
        if (_plant_vs_b_va1__out != _scada_rms_value8__previous_value)
            _scada_rms_value8__correction = - _scada_rms_value8__previous_value / (_plant_vs_b_va1__out - _scada_rms_value8__previous_value);
        if (_scada_rms_value8__correction < 0)
            _scada_rms_value8__correction = 0;
        else
            _scada_rms_value8__correction = 0;
        _scada_rms_value8__sample_cnt += _scada_rms_value8__correction - _scada_rms_value8__previous_correction;
        _scada_rms_value8__out_state = sqrt(_scada_rms_value8__square_sum / _scada_rms_value8__sample_cnt);
        _scada_rms_value8__sample_cnt = 0;
        _scada_rms_value8__previous_correction = _scada_rms_value8__correction;
        _scada_rms_value8__square_sum = 0;
    } else if ( _scada_rms_value8__sample_cnt >= 10000 ) {
        _scada_rms_value8__out_state = sqrt(_scada_rms_value8__square_sum / _scada_rms_value8__sample_cnt);
        _scada_rms_value8__sample_cnt = 0;
        _scada_rms_value8__square_sum = 0;
    }
    _scada_rms_value8__previous_value = _plant_vs_b_va1__out;
    _scada_rms_value8__square_sum += _plant_vs_b_va1__out * _plant_vs_b_va1__out;
    _scada_rms_value8__sample_cnt ++;
    // Generated from the component: SCADA.C function powers
    {
        _scada_c_function_powers__p_fil = _scada_c_function_powers__p_fil + 5e-05 * 2 * M_PI * 30.0 * ( _scada_c_function_powers__p - _scada_c_function_powers__p_fil ) ;
        _scada_c_function_powers__q_fil = _scada_c_function_powers__q_fil + 5e-05 * 2 * M_PI * 30.0 * ( _scada_c_function_powers__q - _scada_c_function_powers__q_fil ) ;
    }
    // Generated from the component: SCADA.RMS value6
    if( _scada_rms_value6__zc ) {
        if (_plant_vs_c_va1__out != _scada_rms_value6__previous_value)
            _scada_rms_value6__correction = - _scada_rms_value6__previous_value / (_plant_vs_c_va1__out - _scada_rms_value6__previous_value);
        if (_scada_rms_value6__correction < 0)
            _scada_rms_value6__correction = 0;
        else
            _scada_rms_value6__correction = 0;
        _scada_rms_value6__sample_cnt += _scada_rms_value6__correction - _scada_rms_value6__previous_correction;
        _scada_rms_value6__out_state = sqrt(_scada_rms_value6__square_sum / _scada_rms_value6__sample_cnt);
        _scada_rms_value6__sample_cnt = 0;
        _scada_rms_value6__previous_correction = _scada_rms_value6__correction;
        _scada_rms_value6__square_sum = 0;
    } else if ( _scada_rms_value6__sample_cnt >= 10000 ) {
        _scada_rms_value6__out_state = sqrt(_scada_rms_value6__square_sum / _scada_rms_value6__sample_cnt);
        _scada_rms_value6__sample_cnt = 0;
        _scada_rms_value6__square_sum = 0;
    }
    _scada_rms_value6__previous_value = _plant_vs_c_va1__out;
    _scada_rms_value6__square_sum += _plant_vs_c_va1__out * _plant_vs_c_va1__out;
    _scada_rms_value6__sample_cnt ++;
    // Generated from the component: Controller.C function PLL
    {
        _controller_c_function_pll__y_q = _controller_c_function_pll__y_q + 717.1314741035857 * 5e-05 * _controller_c_function_pll__e_q ;
        _controller_c_function_pll__theta = _controller_c_function_pll__theta + 5e-05 * _controller_c_function_pll__omega_pll ;
        if ( _controller_c_function_pll__theta >= 2 * M_PI )     {
            _controller_c_function_pll__theta = _controller_c_function_pll__theta - 2 * M_PI ;
        }
        if ( _controller_c_function_pll__theta < 0.0 )     {
            _controller_c_function_pll__theta = _controller_c_function_pll__theta + abs ( _controller_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: Controller.C function abc to dq
    {
    }
    // Generated from the component: Controller.C function current refer
    {
    }
    // Generated from the component: Controller.C function PI current controller
    {
        _controller_c_function_pi_current_controller__e_d = _controller_c_function_pi_current_controller__is_dq_ref [ 0 ] - _controller_c_function_pi_current_controller__is_dq [ 0 ] ;
        _controller_c_function_pi_current_controller__e_q = _controller_c_function_pi_current_controller__is_dq_ref [ 1 ] - _controller_c_function_pi_current_controller__is_dq [ 1 ] ;
        _controller_c_function_pi_current_controller__y_d = _controller_c_function_pi_current_controller__y_d + 200.0 * 5e-05 * _controller_c_function_pi_current_controller__e_d ;
        _controller_c_function_pi_current_controller__y_q = _controller_c_function_pi_current_controller__y_q + 200.0 * 5e-05 * _controller_c_function_pi_current_controller__e_q ;
        if ( _controller_c_function_pi_current_controller__time < 0.1 )     {
            _controller_c_function_pi_current_controller__y_d = 0 ;
            _controller_c_function_pi_current_controller__y_q = 0 ;
        }
    }
    // Generated from the component: Controller.C function dq to abc
    {
    }
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: SCADA.Control
    _scada_control__out = XIo_InFloat(0x2f800000);
    // Generated from the component: SCADA.interruptor_STATCOM
    _scada_interruptor_statcom__out = XIo_InInt32(0x2f800004);
    // Generated from the component: SCADA.pref
    _scada_pref__out = XIo_InFloat(0x2f800008);
    // Generated from the component: SCADA.qref
    _scada_qref__out = XIo_InFloat(0x2f80000c);
    // Generated from the component: SCADA.startAC
    _scada_startac__out = XIo_InInt32(0x2f800010);
    // Generated from the component: SCADA.startFSM
    _scada_startfsm__out = XIo_InInt32(0x2f800014);
    // Generated from the component: SCADA.wires
    _scada_wires__out = XIo_InInt32(0x2f800018);
    // Generated from the component: SCADA.CTRL
    HIL_OutAO(0x4000, (float)_scada_control__out);
    // Generated from the component: SCADA.ctrl
    HIL_OutAO(0x4003, (float)_scada_control__out);
    // Generated from the component: SCADA.Rate Transition10.Input
    _scada_rate_transition10_output__state = _scada_pref__out;
    // Generated from the component: SCADA.Rate Transition9.Input
    _scada_rate_transition9_output__state = _scada_qref__out;
    // Generated from the component: SCADA.Rate Transition8.Input
    _scada_rate_transition8_output__state = _scada_startac__out;
    // Generated from the component: SCADA.Rate Transition7.Input
    _scada_rate_transition7_output__state = _scada_startfsm__out;
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------