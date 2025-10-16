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
#include <time.h>
#include <stdarg.h>

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

//#define SP_SCOPE_FILE_DEBUG
#define SP_SCOPE_BUFF_SIZE (4194304*4)
#define SP_SCOPE_BUFF_SIZE_PER_ER (SP_SCOPE_BUFF_SIZE/4)

//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables




extern X_UnInt8* sp_scope_buffer_dev0;
extern FILE* f_sp_scope_debug;
uint64_t sp_scope_buff_addr_cpu0_er0_dev0;
uint64_t sp_scope_buff_start_addr_cpu0_er0_dev0;
uint32_t sp_scope_buff_index_cpu0_er0_dev0;
uint64_t sp_scope_buff_addr_cpu0_er1_dev0;
uint64_t sp_scope_buff_start_addr_cpu0_er1_dev0;
uint32_t sp_scope_buff_index_cpu0_er1_dev0;

// const variables

//@cmp.var.start
// variables
double _plant_constant1__out = 0.0;
double _plant_iag1_ia1__out;
double _plant_ibg1_ia1__out;
double _plant_icg1_ia1__out;
double _plant_rate_transition1_output__out[3];
double _plant_rate_transition2_output__out[3];
double _plant_upi_cc_constant10__out = 1.0;
double _plant_upi_cc_constant2__out = 1.0;
double _plant_upi_cc_constant3__out = 1.0;
double _plant_upi_cc_constant5__out = 1.0;
double _plant_upi_cc_constant8__out = 1.0;
double _plant_upi_cc_constant9__out = 1.0;
double _plant_upi_cc_low_pass_filter1__out;
double _plant_upi_cc_low_pass_filter1__previous_filtered_value;
double _plant_upi_cc_low_pass_filter2__out;
double _plant_upi_cc_low_pass_filter2__previous_filtered_value;
double _plant_upi_cc_ramp1__out;
double _plant_upi_cc_unit_delay1__out;
double _plant_va1_va1__out;
double _plant_vb1_va1__out;
double _plant_vc1_va1__out;
float _plant_probe1__in;
float _plant_probe2__in;
double _plant_bus_join2__out[3];
float _plant_probe3__in;
double _plant_upi_cc_bus_split1__out;
double _plant_upi_cc_bus_split1__out1;
double _plant_upi_cc_bus_split1__out2;
double _plant_upi_cc_gain2__out;
double _plant_upi_cc_gain4__out;
double _plant_upi_cc_limit1__out;
double _plant_upi_cc_c_function_abc_to_d__abc[3];
double _plant_upi_cc_c_function_abc_to_d__theta;

double _plant_upi_cc_c_function_abc_to_d__d;
double _plant_upi_cc_c_function_abc_to_d__q;

double _plant_upi_cc_c_function_abc_to_d1__abc[3];
double _plant_upi_cc_c_function_abc_to_d1__theta;

double _plant_upi_cc_c_function_abc_to_d1__d;
double _plant_upi_cc_c_function_abc_to_d1__q;

double _plant_bus_join1__out[3];
double _plant_upi_cc_rms_value6__out;
double _plant_upi_cc_sum1__out;
double _plant_upi_cc_sum2__out;
double _plant_upi_cc_bus_join19__out[2];
double _plant_upi_cc_bus_join20__out[2];
double _plant_upi_cc_gain3__out;
double _plant_upi_cc_gain5__out;
double _plant_upi_cc_c_function_vsg1__e_0;
double _plant_upi_cc_c_function_vsg1__is_dq[2];
double _plant_upi_cc_c_function_vsg1__omega_base;
double _plant_upi_cc_c_function_vsg1__on_vsg;
double _plant_upi_cc_c_function_vsg1__p_m_ref;
double _plant_upi_cc_c_function_vsg1__q_s_ref;
double _plant_upi_cc_c_function_vsg1__reset_int;
double _plant_upi_cc_c_function_vsg1__theta_pll;
double _plant_upi_cc_c_function_vsg1__vs_dq[2];

double _plant_upi_cc_c_function_vsg1__e;
double _plant_upi_cc_c_function_vsg1__is_d;
double _plant_upi_cc_c_function_vsg1__is_dq_ref_fil[2];
double _plant_upi_cc_c_function_vsg1__is_q;
double _plant_upi_cc_c_function_vsg1__omega_vsg;
double _plant_upi_cc_c_function_vsg1__p_s;
double _plant_upi_cc_c_function_vsg1__p_s_fil;
double _plant_upi_cc_c_function_vsg1__q_s;
double _plant_upi_cc_c_function_vsg1__q_s_fil;
double _plant_upi_cc_c_function_vsg1__theta_vsg;
double _plant_upi_cc_c_function_vsg1__vs_d;
double _plant_upi_cc_c_function_vsg1__vs_q;
double _plant_upi_cc_c_function_vsg1__vt_dq_ref[2];

double _plant_upi_cc_bus_join11__out[2];
double _plant_upi_cc_bus_join18__out[2];
double _plant_upi_cc_c_function_dq_to_abc__dq[2];
double _plant_upi_cc_c_function_dq_to_abc__theta;

double _plant_upi_cc_c_function_dq_to_abc__a;
double _plant_upi_cc_c_function_dq_to_abc__b;
double _plant_upi_cc_c_function_dq_to_abc__c;

double _plant_upi_cc_bus_join15__out[3];
double _plant_bus_split1__out;
double _plant_bus_split1__out1;
double _plant_bus_split1__out2; //@cmp.var.end

//@cmp.svar.start
// state variables
double _plant_rate_transition1_output__state[3];
double _plant_rate_transition2_output__state[3];
double _plant_upi_cc_low_pass_filter1__filtered_value;
double _plant_upi_cc_low_pass_filter1__previous_in;
double _plant_upi_cc_low_pass_filter2__filtered_value;
double _plant_upi_cc_low_pass_filter2__previous_in;
double _plant_upi_cc_ramp1__state;
double _plant_upi_cc_unit_delay1__state;






double _plant_upi_cc_rms_value6__square_sum;
double _plant_upi_cc_rms_value6__sample_cnt;
double _plant_upi_cc_rms_value6__period_cnt;
double _plant_upi_cc_rms_value6__db_timer;
double _plant_upi_cc_rms_value6__previous_filtered_value;
double _plant_upi_cc_rms_value6__previous_correction;
double _plant_upi_cc_rms_value6__previous_value;
double _plant_upi_cc_rms_value6__correction;
double _plant_upi_cc_rms_value6__out_state;
double _plant_upi_cc_c_function_vsg1__x_p;

double _plant_upi_cc_c_function_vsg1__x_q;

double _plant_upi_cc_c_function_vsg1__theta;

double _plant_upi_cc_c_function_vsg1__x_isd;

double _plant_upi_cc_c_function_vsg1__x_isq;

double _plant_upi_cc_c_function_vsg1__e_p;

double _plant_upi_cc_c_function_vsg1__e_q;

double _plant_upi_cc_c_function_vsg1__x_ps;

double _plant_upi_cc_c_function_vsg1__x_qs;







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





// generated using template: \templates\virtual_hil\fmi_custom_logger_fncs.template---------------------------------




// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _plant_rate_transition1_output__state[0] =  0.0;
    _plant_rate_transition1_output__state[1] =  0.0;
    _plant_rate_transition1_output__state[2] =  0.0;
    _plant_rate_transition2_output__state[0] =  0.0;
    _plant_rate_transition2_output__state[1] =  0.0;
    _plant_rate_transition2_output__state[2] =  0.0;
    _plant_upi_cc_low_pass_filter1__filtered_value = 0.0 / (1 - 6.283185307179586 * 100.0 * 5e-05 );
    _plant_upi_cc_low_pass_filter1__previous_in = 0x0;
    _plant_upi_cc_low_pass_filter2__filtered_value = 0.0 / (1 - 6.283185307179586 * 100.0 * 5e-05 );
    _plant_upi_cc_low_pass_filter2__previous_in = 0x0;
    _plant_upi_cc_ramp1__state = 0.0f;
    _plant_upi_cc_unit_delay1__state = 0.0;
    HIL_OutFloat(137101315, 0.0);
    HIL_OutAO(0x4000, 0.0f);
    sp_scope_buff_index_cpu0_er1_dev0 = 0;
    HIL_OutAO(0x4001, 0.0f);
    sp_scope_buff_index_cpu0_er1_dev0 = 0;
    HIL_OutAO(0x4002, 0.0f);
    sp_scope_buff_index_cpu0_er1_dev0 = 0;
    {
    }
    {
    }
    _plant_upi_cc_rms_value6__square_sum = 0x0;
    _plant_upi_cc_rms_value6__sample_cnt = 0x0;
    _plant_upi_cc_rms_value6__period_cnt = 0x0;
    _plant_upi_cc_rms_value6__db_timer = 0x0;
    _plant_upi_cc_rms_value6__previous_filtered_value = 0x0;
    _plant_upi_cc_rms_value6__previous_correction = 0x0;
    _plant_upi_cc_rms_value6__correction = 0x0;
    _plant_upi_cc_rms_value6__previous_value = 0x0;
    _plant_upi_cc_rms_value6__out_state = 0x0;
    {
        _plant_upi_cc_c_function_vsg1__x_p = 0.0 ;
        _plant_upi_cc_c_function_vsg1__x_q = 0.0 ;
        _plant_upi_cc_c_function_vsg1__theta = 0.0 ;
        _plant_upi_cc_c_function_vsg1__x_isd = 0.0 ;
        _plant_upi_cc_c_function_vsg1__x_isq = 0.0 ;
        _plant_upi_cc_c_function_vsg1__e_p = 0.0 ;
        _plant_upi_cc_c_function_vsg1__e_q = 0.0 ;
        _plant_upi_cc_c_function_vsg1__x_ps = 0.0 ;
        _plant_upi_cc_c_function_vsg1__x_qs = 0.0 ;
    }
    {
    }
    HIL_OutFloat(137101312, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutFloat(137101314, 0.0);
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
    sp_scope_buff_index_cpu0_er0_dev0 = 0;
    sp_scope_buff_start_addr_cpu0_er0_dev0 = (uint64_t)sp_scope_buffer_dev0 + 0 * SP_SCOPE_BUFF_SIZE + 0 * SP_SCOPE_BUFF_SIZE_PER_ER;
    sp_scope_buff_index_cpu0_er1_dev0 = 0;
    sp_scope_buff_start_addr_cpu0_er1_dev0 = (uint64_t)sp_scope_buffer_dev0 + 0 * SP_SCOPE_BUFF_SIZE + 1 * SP_SCOPE_BUFF_SIZE_PER_ER;
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
    // Generated from the component: Plant.Constant1
    // Generated from the component: Plant.UPI_CC.Constant10
    // Generated from the component: Plant.UPI_CC.Constant2
    // Generated from the component: Plant.UPI_CC.Constant3
    // Generated from the component: Plant.UPI_CC.Constant5
    // Generated from the component: Plant.UPI_CC.Constant8
    // Generated from the component: Plant.UPI_CC.Constant9
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Plant.Rate Transition1.Output
    _plant_rate_transition1_output__out[0] = _plant_rate_transition1_output__state[0];
    _plant_rate_transition1_output__out[1] = _plant_rate_transition1_output__state[1];
    _plant_rate_transition1_output__out[2] = _plant_rate_transition1_output__state[2];
    // Generated from the component: Plant.Rate Transition2.Output
    _plant_rate_transition2_output__out[0] = _plant_rate_transition2_output__state[0];
    _plant_rate_transition2_output__out[1] = _plant_rate_transition2_output__state[1];
    _plant_rate_transition2_output__out[2] = _plant_rate_transition2_output__state[2];
    // Generated from the component: Plant.UPI_CC.Low-Pass Filter1
    _plant_upi_cc_low_pass_filter1__previous_filtered_value = _plant_upi_cc_low_pass_filter1__filtered_value;
    _plant_upi_cc_low_pass_filter1__filtered_value = _plant_upi_cc_low_pass_filter1__previous_in * (6.283185307179586 * 100.0 * 5e-05) + _plant_upi_cc_low_pass_filter1__previous_filtered_value * (1 - 6.283185307179586 * 100.0 * 5e-05 );
    _plant_upi_cc_low_pass_filter1__out = _plant_upi_cc_low_pass_filter1__filtered_value;
    // Generated from the component: Plant.UPI_CC.Low-Pass Filter2
    _plant_upi_cc_low_pass_filter2__previous_filtered_value = _plant_upi_cc_low_pass_filter2__filtered_value;
    _plant_upi_cc_low_pass_filter2__filtered_value = _plant_upi_cc_low_pass_filter2__previous_in * (6.283185307179586 * 100.0 * 5e-05) + _plant_upi_cc_low_pass_filter2__previous_filtered_value * (1 - 6.283185307179586 * 100.0 * 5e-05 );
    _plant_upi_cc_low_pass_filter2__out = _plant_upi_cc_low_pass_filter2__filtered_value;
    // Generated from the component: Plant.UPI_CC.Ramp1
    if (_plant_upi_cc_ramp1__state < 0.0) {
        _plant_upi_cc_ramp1__out = 0.0;
    } else {
        _plant_upi_cc_ramp1__out = (1.0 * (_plant_upi_cc_ramp1__state - 0.0) + 0.0);
    }
    // Generated from the component: Plant.UPI_CC.Unit Delay1
    _plant_upi_cc_unit_delay1__out = _plant_upi_cc_unit_delay1__state;
    // Generated from the component: Plant.Vsp4.Vs1
    HIL_OutFloat(137101315, (float) _plant_constant1__out);
    // Generated from the component: Plant.UPI_CC.Bus Split1
    _plant_upi_cc_bus_split1__out = _plant_rate_transition2_output__out[0];
    _plant_upi_cc_bus_split1__out1 = _plant_rate_transition2_output__out[1];
    _plant_upi_cc_bus_split1__out2 = _plant_rate_transition2_output__out[2];
    // Generated from the component: Plant.UPI_CC.Gain2
    _plant_upi_cc_gain2__out = 0.0031830988618379067 * _plant_upi_cc_low_pass_filter1__out;
    // Generated from the component: Plant.UPI_CC.Gain4
    _plant_upi_cc_gain4__out = 0.0031830988618379067 * _plant_upi_cc_low_pass_filter2__out;
    // Generated from the component: Plant.UPI_CC.Limit1
    _plant_upi_cc_limit1__out = MIN(MAX(_plant_upi_cc_ramp1__out, -1.0), 1.0);
    // Generated from the component: Plant.UPI_CC.C function abc to d
    _plant_upi_cc_c_function_abc_to_d__abc[0] = _plant_rate_transition1_output__out[0];
    _plant_upi_cc_c_function_abc_to_d__abc[1] = _plant_rate_transition1_output__out[1];
    _plant_upi_cc_c_function_abc_to_d__abc[2] = _plant_rate_transition1_output__out[2];
    _plant_upi_cc_c_function_abc_to_d__theta = _plant_upi_cc_unit_delay1__out;
    {
        _plant_upi_cc_c_function_abc_to_d__d = 2.0 / 3.0 * ( cos ( _plant_upi_cc_c_function_abc_to_d__theta ) * _plant_upi_cc_c_function_abc_to_d__abc [ 0 ] + cos ( _plant_upi_cc_c_function_abc_to_d__theta - 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_abc_to_d__abc [ 1 ] + cos ( _plant_upi_cc_c_function_abc_to_d__theta + 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_abc_to_d__abc [ 2 ] ) ;
        _plant_upi_cc_c_function_abc_to_d__q = 2.0 / 3.0 * ( - sin ( _plant_upi_cc_c_function_abc_to_d__theta ) * _plant_upi_cc_c_function_abc_to_d__abc [ 0 ] - sin ( _plant_upi_cc_c_function_abc_to_d__theta - 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_abc_to_d__abc [ 1 ] - sin ( _plant_upi_cc_c_function_abc_to_d__theta + 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_abc_to_d__abc [ 2 ] ) ;
    }
    // Generated from the component: Plant.UPI_CC.C function abc to d1
    _plant_upi_cc_c_function_abc_to_d1__abc[0] = _plant_rate_transition2_output__out[0];
    _plant_upi_cc_c_function_abc_to_d1__abc[1] = _plant_rate_transition2_output__out[1];
    _plant_upi_cc_c_function_abc_to_d1__abc[2] = _plant_rate_transition2_output__out[2];
    _plant_upi_cc_c_function_abc_to_d1__theta = _plant_upi_cc_unit_delay1__out;
    {
        _plant_upi_cc_c_function_abc_to_d1__d = 2.0 / 3.0 * ( cos ( _plant_upi_cc_c_function_abc_to_d1__theta ) * _plant_upi_cc_c_function_abc_to_d1__abc [ 0 ] + cos ( _plant_upi_cc_c_function_abc_to_d1__theta - 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_abc_to_d1__abc [ 1 ] + cos ( _plant_upi_cc_c_function_abc_to_d1__theta + 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_abc_to_d1__abc [ 2 ] ) ;
        _plant_upi_cc_c_function_abc_to_d1__q = 2.0 / 3.0 * ( - sin ( _plant_upi_cc_c_function_abc_to_d1__theta ) * _plant_upi_cc_c_function_abc_to_d1__abc [ 0 ] - sin ( _plant_upi_cc_c_function_abc_to_d1__theta - 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_abc_to_d1__abc [ 1 ] - sin ( _plant_upi_cc_c_function_abc_to_d1__theta + 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_abc_to_d1__abc [ 2 ] ) ;
    }
    // Generated from the component: Plant.UPI_CC.RMS value6
    if (_plant_upi_cc_rms_value6__period_cnt >= 2 * M_PI) {
        _plant_upi_cc_rms_value6__out_state = sqrt(_plant_upi_cc_rms_value6__square_sum / (2 * M_PI));
        _plant_upi_cc_rms_value6__square_sum = 0.0f;
        _plant_upi_cc_rms_value6__period_cnt = fmod(_plant_upi_cc_rms_value6__period_cnt, 2 * M_PI);
    }
    _plant_upi_cc_rms_value6__out = _plant_upi_cc_rms_value6__out_state;
    // Generated from the component: Plant.UPI_CC.Termination10
    // Generated from the component: Plant.UPI_CC.Termination11
    // Generated from the component: Plant.UPI_CC.Sum1
    _plant_upi_cc_sum1__out = _plant_upi_cc_constant3__out - _plant_upi_cc_gain2__out;
    // Generated from the component: Plant.UPI_CC.Sum2
    _plant_upi_cc_sum2__out = _plant_upi_cc_constant5__out - _plant_upi_cc_gain4__out;
    // Generated from the component: Plant.UPI_CC.Bus Join19
    _plant_upi_cc_bus_join19__out[0] = _plant_upi_cc_c_function_abc_to_d__d;
    _plant_upi_cc_bus_join19__out[1] = _plant_upi_cc_c_function_abc_to_d__q;
    // Generated from the component: Plant.UPI_CC.Bus Join20
    _plant_upi_cc_bus_join20__out[0] = _plant_upi_cc_c_function_abc_to_d1__d;
    _plant_upi_cc_bus_join20__out[1] = _plant_upi_cc_c_function_abc_to_d1__q;
    // Generated from the component: Plant.UPI_CC.Gain3
    _plant_upi_cc_gain3__out = 20.0 * _plant_upi_cc_sum1__out;
    // Generated from the component: Plant.UPI_CC.Gain5
    _plant_upi_cc_gain5__out = 20.0 * _plant_upi_cc_sum2__out;
    // Generated from the component: Plant.UPI_CC.C function VSG1
    _plant_upi_cc_c_function_vsg1__e_0 = _plant_upi_cc_limit1__out;
    _plant_upi_cc_c_function_vsg1__is_dq[0] = _plant_upi_cc_bus_join19__out[0];
    _plant_upi_cc_c_function_vsg1__is_dq[1] = _plant_upi_cc_bus_join19__out[1];
    _plant_upi_cc_c_function_vsg1__omega_base = _plant_upi_cc_constant2__out;
    _plant_upi_cc_c_function_vsg1__on_vsg = _plant_upi_cc_constant9__out;
    _plant_upi_cc_c_function_vsg1__p_m_ref = _plant_upi_cc_gain3__out;
    _plant_upi_cc_c_function_vsg1__q_s_ref = _plant_upi_cc_gain5__out;
    _plant_upi_cc_c_function_vsg1__reset_int = _plant_upi_cc_constant8__out;
    _plant_upi_cc_c_function_vsg1__theta_pll = _plant_upi_cc_constant10__out;
    _plant_upi_cc_c_function_vsg1__vs_dq[0] = _plant_upi_cc_bus_join20__out[0];
    _plant_upi_cc_c_function_vsg1__vs_dq[1] = _plant_upi_cc_bus_join20__out[1];
    {
        _plant_upi_cc_c_function_vsg1__omega_vsg = ( 15.1 * _plant_upi_cc_c_function_vsg1__e_p + _plant_upi_cc_c_function_vsg1__x_p + _plant_upi_cc_c_function_vsg1__omega_base ) * 2.0 * M_PI * 50.0 ;
        _plant_upi_cc_c_function_vsg1__theta_vsg = _plant_upi_cc_c_function_vsg1__theta ;
        _plant_upi_cc_c_function_vsg1__is_d = _plant_upi_cc_c_function_vsg1__is_dq [ 0 ] ;
        _plant_upi_cc_c_function_vsg1__is_q = _plant_upi_cc_c_function_vsg1__is_dq [ 1 ] ;
        _plant_upi_cc_c_function_vsg1__vs_d = _plant_upi_cc_c_function_vsg1__vs_dq [ 0 ] ;
        _plant_upi_cc_c_function_vsg1__vs_q = _plant_upi_cc_c_function_vsg1__vs_dq [ 1 ] ;
        _plant_upi_cc_c_function_vsg1__p_s = ( _plant_upi_cc_c_function_vsg1__is_d * _plant_upi_cc_c_function_vsg1__vs_d + _plant_upi_cc_c_function_vsg1__is_q * _plant_upi_cc_c_function_vsg1__vs_q ) / ( 40.824829046386306 * 326.5986323710904 ) ;
        _plant_upi_cc_c_function_vsg1__q_s = ( _plant_upi_cc_c_function_vsg1__is_d * _plant_upi_cc_c_function_vsg1__vs_q - _plant_upi_cc_c_function_vsg1__is_q * _plant_upi_cc_c_function_vsg1__vs_d ) / ( 40.824829046386306 * 326.5986323710904 ) ;
        _plant_upi_cc_c_function_vsg1__p_s_fil = _plant_upi_cc_c_function_vsg1__x_ps ;
        _plant_upi_cc_c_function_vsg1__q_s_fil = _plant_upi_cc_c_function_vsg1__x_qs ;
        if ( _plant_upi_cc_c_function_vsg1__on_vsg < 0.5 )     {
            _plant_upi_cc_c_function_vsg1__p_s = 0.0 ;
            _plant_upi_cc_c_function_vsg1__q_s = 0.0 ;
        }
        _plant_upi_cc_c_function_vsg1__e = _plant_upi_cc_c_function_vsg1__e_0 + 0.1 * _plant_upi_cc_c_function_vsg1__e_q + _plant_upi_cc_c_function_vsg1__x_q ;
        _plant_upi_cc_c_function_vsg1__vt_dq_ref [ 0 ] = 0 ;
        _plant_upi_cc_c_function_vsg1__vt_dq_ref [ 1 ] = - _plant_upi_cc_c_function_vsg1__e * 326.5986323710904 ;
    }
    // Generated from the component: Plant.UPI_CC.Bus Join11
    _plant_upi_cc_bus_join11__out[0] = _plant_upi_cc_c_function_vsg1__is_d;
    _plant_upi_cc_bus_join11__out[1] = _plant_upi_cc_c_function_vsg1__is_q;
    // Generated from the component: Plant.UPI_CC.Bus Join18
    _plant_upi_cc_bus_join18__out[0] = _plant_upi_cc_c_function_vsg1__vs_d;
    _plant_upi_cc_bus_join18__out[1] = _plant_upi_cc_c_function_vsg1__vs_q;
    // Generated from the component: Plant.UPI_CC.C function dq to abc
    _plant_upi_cc_c_function_dq_to_abc__dq[0] = _plant_upi_cc_c_function_vsg1__vt_dq_ref[0];
    _plant_upi_cc_c_function_dq_to_abc__dq[1] = _plant_upi_cc_c_function_vsg1__vt_dq_ref[1];
    _plant_upi_cc_c_function_dq_to_abc__theta = _plant_upi_cc_c_function_vsg1__theta_vsg;
    {
        _plant_upi_cc_c_function_dq_to_abc__a = cos ( _plant_upi_cc_c_function_dq_to_abc__theta ) * _plant_upi_cc_c_function_dq_to_abc__dq [ 0 ] - sin ( _plant_upi_cc_c_function_dq_to_abc__theta ) * _plant_upi_cc_c_function_dq_to_abc__dq [ 1 ] ;
        _plant_upi_cc_c_function_dq_to_abc__b = cos ( _plant_upi_cc_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_dq_to_abc__dq [ 0 ] - sin ( _plant_upi_cc_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_dq_to_abc__dq [ 1 ] ;
        _plant_upi_cc_c_function_dq_to_abc__c = cos ( _plant_upi_cc_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_dq_to_abc__dq [ 0 ] - sin ( _plant_upi_cc_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _plant_upi_cc_c_function_dq_to_abc__dq [ 1 ] ;
    }
    // Generated from the component: Plant.UPI_CC.Termination9
    // Generated from the component: Plant.UPI_CC.Bus Join15
    _plant_upi_cc_bus_join15__out[0] = _plant_upi_cc_c_function_dq_to_abc__a;
    _plant_upi_cc_bus_join15__out[1] = _plant_upi_cc_c_function_dq_to_abc__b;
    _plant_upi_cc_bus_join15__out[2] = _plant_upi_cc_c_function_dq_to_abc__c;
    // Generated from the component: Plant.Bus Split1
    _plant_bus_split1__out = _plant_upi_cc_bus_join15__out[0];
    _plant_bus_split1__out1 = _plant_upi_cc_bus_join15__out[1];
    _plant_bus_split1__out2 = _plant_upi_cc_bus_join15__out[2];
    // Generated from the component: Plant.Vsp1.Vs1
    HIL_OutFloat(137101312, (float) _plant_bus_split1__out);
    // Generated from the component: Plant.Vsp2.Vs1
    HIL_OutFloat(137101313, (float) _plant_bus_split1__out1);
    // Generated from the component: Plant.Vsp3.Vs1
    HIL_OutFloat(137101314, (float) _plant_bus_split1__out2);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Plant.UPI_CC.Low-Pass Filter1
    _plant_upi_cc_low_pass_filter1__previous_in = _plant_upi_cc_c_function_vsg1__omega_vsg;
    // Generated from the component: Plant.UPI_CC.Low-Pass Filter2
    _plant_upi_cc_low_pass_filter2__previous_in = _plant_upi_cc_rms_value6__out;
    // Generated from the component: Plant.UPI_CC.Ramp1
    _plant_upi_cc_ramp1__state += 5e-05;
    // Generated from the component: Plant.UPI_CC.Unit Delay1
    _plant_upi_cc_unit_delay1__state = _plant_upi_cc_c_function_vsg1__theta_vsg;
    // Generated from the component: Plant.UPI_CC.C function abc to d
    {
    }
    // Generated from the component: Plant.UPI_CC.C function abc to d1
    {
    }
    // Generated from the component: Plant.UPI_CC.RMS value6
    if (_plant_upi_cc_rms_value6__period_cnt >= 2 * M_PI) {
        _plant_upi_cc_rms_value6__period_cnt = fmod(_plant_upi_cc_rms_value6__period_cnt, 2 * M_PI);
    }
    _plant_upi_cc_rms_value6__period_cnt += 0.015707963267948967;
    _plant_upi_cc_rms_value6__square_sum += _plant_upi_cc_bus_split1__out * _plant_upi_cc_bus_split1__out * 0.015707963267948967;
    // Generated from the component: Plant.UPI_CC.C function VSG1
    {
        _plant_upi_cc_c_function_vsg1__e_p = _plant_upi_cc_c_function_vsg1__p_m_ref - _plant_upi_cc_c_function_vsg1__p_s ;
        _plant_upi_cc_c_function_vsg1__e_q = _plant_upi_cc_c_function_vsg1__q_s_ref - _plant_upi_cc_c_function_vsg1__q_s ;
        _plant_upi_cc_c_function_vsg1__x_p = _plant_upi_cc_c_function_vsg1__x_p + 0.1 * 5e-05 * _plant_upi_cc_c_function_vsg1__e_p ;
        _plant_upi_cc_c_function_vsg1__x_q = _plant_upi_cc_c_function_vsg1__x_q + 25.0 * 5e-05 * _plant_upi_cc_c_function_vsg1__e_q ;
        _plant_upi_cc_c_function_vsg1__theta = _plant_upi_cc_c_function_vsg1__theta + _plant_upi_cc_c_function_vsg1__omega_vsg * 5e-05 ;
        if ( _plant_upi_cc_c_function_vsg1__reset_int < 0.5 )     {
            _plant_upi_cc_c_function_vsg1__theta = _plant_upi_cc_c_function_vsg1__theta_pll ;
            _plant_upi_cc_c_function_vsg1__x_p = 0.0 ;
            _plant_upi_cc_c_function_vsg1__x_q = 0.0 ;
        }
        if ( _plant_upi_cc_c_function_vsg1__theta >= 2 * M_PI )     {
            _plant_upi_cc_c_function_vsg1__theta = _plant_upi_cc_c_function_vsg1__theta - 2 * M_PI ;
        }
        _plant_upi_cc_c_function_vsg1__x_ps = _plant_upi_cc_c_function_vsg1__x_ps + 5e-05 * 2 * M_PI * 1 / ( 0.0024 ) * ( _plant_upi_cc_c_function_vsg1__p_s - _plant_upi_cc_c_function_vsg1__x_ps ) ;
        _plant_upi_cc_c_function_vsg1__x_qs = _plant_upi_cc_c_function_vsg1__x_qs + 5e-05 * 2 * M_PI * 1 / ( 0.0024 ) * ( _plant_upi_cc_c_function_vsg1__q_s - _plant_upi_cc_c_function_vsg1__x_qs ) ;
    }
    // Generated from the component: Plant.UPI_CC.C function dq to abc
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
    // Generated from the component: Plant.Iag1.Ia1
    _plant_iag1_ia1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: Plant.Ibg1.Ia1
    _plant_ibg1_ia1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Plant.Icg1.Ia1
    _plant_icg1_ia1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: Plant.Va1.Va1
    _plant_va1_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: Plant.Vb1.Va1
    _plant_vb1_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Plant.Vc1.Va1
    _plant_vc1_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Plant.Probe1
    HIL_OutAO(0x4000, (float)_plant_iag1_ia1__out);
    _plant_probe1__in = _plant_iag1_ia1__out;
    sp_scope_buff_addr_cpu0_er1_dev0 = sp_scope_buff_start_addr_cpu0_er1_dev0 + sp_scope_buff_index_cpu0_er1_dev0;
    //#ifdef SP_SCOPE_FILE_DEBUG
    //  fprintf(f_sp_scope_debug, "\nstart = %x, index = %x, addr = %x, value = %f.", sp_scope_buff_start_addr_cpu0_er1_dev0, sp_scope_buff_index_cpuuser_sp_cpu}_cpu0_er1_dev0, sp_scope_buff_addr_cpu0_er1_dev0, _plant_probe1__in);
    //#endif
    memcpy((X_UnInt8 *)sp_scope_buff_addr_cpu0_er1_dev0, &_plant_probe1__in, 4);
    //printf("\n\sp_scope_buff_addr_cpu0_er1_dev0, _plant_probe1__in 0x%x\r\n", sp_scope_buff_addr_cpu0_er1_dev0);
    //printf("\n\r addr 0x%x, value 0x%x\r\n", sp_scope_buff_addr_cpu0_er1_dev0, *(X_UnInt32*)(sp_scope_buff_addr_cpu0_er1_dev0));
    //XIo_OutInt32(sp_scope_buff_addr_cpu0_er1_dev0, _plant_probe1__in);
    sp_scope_buff_index_cpu0_er1_dev0 = (sp_scope_buff_index_cpu0_er1_dev0 + 4) % SP_SCOPE_BUFF_SIZE_PER_ER;
    // Generated from the component: Plant.Probe2
    HIL_OutAO(0x4001, (float)_plant_ibg1_ia1__out);
    _plant_probe2__in = _plant_ibg1_ia1__out;
    sp_scope_buff_addr_cpu0_er1_dev0 = sp_scope_buff_start_addr_cpu0_er1_dev0 + sp_scope_buff_index_cpu0_er1_dev0;
    //#ifdef SP_SCOPE_FILE_DEBUG
    //  fprintf(f_sp_scope_debug, "\nstart = %x, index = %x, addr = %x, value = %f.", sp_scope_buff_start_addr_cpu0_er1_dev0, sp_scope_buff_index_cpuuser_sp_cpu}_cpu0_er1_dev0, sp_scope_buff_addr_cpu0_er1_dev0, _plant_probe2__in);
    //#endif
    memcpy((X_UnInt8 *)sp_scope_buff_addr_cpu0_er1_dev0, &_plant_probe2__in, 4);
    //printf("\n\sp_scope_buff_addr_cpu0_er1_dev0, _plant_probe2__in 0x%x\r\n", sp_scope_buff_addr_cpu0_er1_dev0);
    //printf("\n\r addr 0x%x, value 0x%x\r\n", sp_scope_buff_addr_cpu0_er1_dev0, *(X_UnInt32*)(sp_scope_buff_addr_cpu0_er1_dev0));
    //XIo_OutInt32(sp_scope_buff_addr_cpu0_er1_dev0, _plant_probe2__in);
    sp_scope_buff_index_cpu0_er1_dev0 = (sp_scope_buff_index_cpu0_er1_dev0 + 4) % SP_SCOPE_BUFF_SIZE_PER_ER;
    // Generated from the component: Plant.Bus Join2
    _plant_bus_join2__out[0] = _plant_iag1_ia1__out;
    _plant_bus_join2__out[1] = _plant_ibg1_ia1__out;
    _plant_bus_join2__out[2] = _plant_icg1_ia1__out;
    // Generated from the component: Plant.Probe3
    HIL_OutAO(0x4002, (float)_plant_icg1_ia1__out);
    _plant_probe3__in = _plant_icg1_ia1__out;
    sp_scope_buff_addr_cpu0_er1_dev0 = sp_scope_buff_start_addr_cpu0_er1_dev0 + sp_scope_buff_index_cpu0_er1_dev0;
    //#ifdef SP_SCOPE_FILE_DEBUG
    //  fprintf(f_sp_scope_debug, "\nstart = %x, index = %x, addr = %x, value = %f.", sp_scope_buff_start_addr_cpu0_er1_dev0, sp_scope_buff_index_cpuuser_sp_cpu}_cpu0_er1_dev0, sp_scope_buff_addr_cpu0_er1_dev0, _plant_probe3__in);
    //#endif
    memcpy((X_UnInt8 *)sp_scope_buff_addr_cpu0_er1_dev0, &_plant_probe3__in, 4);
    //printf("\n\sp_scope_buff_addr_cpu0_er1_dev0, _plant_probe3__in 0x%x\r\n", sp_scope_buff_addr_cpu0_er1_dev0);
    //printf("\n\r addr 0x%x, value 0x%x\r\n", sp_scope_buff_addr_cpu0_er1_dev0, *(X_UnInt32*)(sp_scope_buff_addr_cpu0_er1_dev0));
    //XIo_OutInt32(sp_scope_buff_addr_cpu0_er1_dev0, _plant_probe3__in);
    sp_scope_buff_index_cpu0_er1_dev0 = (sp_scope_buff_index_cpu0_er1_dev0 + 4) % SP_SCOPE_BUFF_SIZE_PER_ER;
    // Generated from the component: Plant.Bus Join1
    _plant_bus_join1__out[0] = _plant_va1_va1__out;
    _plant_bus_join1__out[1] = _plant_vb1_va1__out;
    _plant_bus_join1__out[2] = _plant_vc1_va1__out;
    // Generated from the component: Plant.Rate Transition1.Input
    _plant_rate_transition1_output__state[0] = _plant_bus_join2__out[0];
    _plant_rate_transition1_output__state[1] = _plant_bus_join2__out[1];
    _plant_rate_transition1_output__state[2] = _plant_bus_join2__out[2];
    // Generated from the component: Plant.Rate Transition2.Input
    _plant_rate_transition2_output__state[0] = _plant_bus_join1__out[0];
    _plant_rate_transition2_output__state[1] = _plant_bus_join1__out[1];
    _plant_rate_transition2_output__state[2] = _plant_bus_join1__out[2];
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------