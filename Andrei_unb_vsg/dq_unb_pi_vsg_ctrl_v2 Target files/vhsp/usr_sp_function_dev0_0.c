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
double _plant_iag_ia1__out;
double _plant_ibg_ia1__out;
double _plant_icg_ia1__out;
double _plant_va_va1__out;
double _plant_vb_va1__out;
double _plant_vc_va1__out;
double _plant_c_function_powers__i_a;
double _plant_c_function_powers__i_b;
double _plant_c_function_powers__i_c;
double _plant_c_function_powers__v_a;
double _plant_c_function_powers__v_b;
double _plant_c_function_powers__v_c;

double _plant_c_function_powers__p;
double _plant_c_function_powers__p_f;
double _plant_c_function_powers__q;
double _plant_c_function_powers__q_f;

//@cmp.var.end

//@cmp.svar.start
// state variables
double _plant_c_function_powers__p_fil;

double _plant_c_function_powers__q_fil;




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
    {
        _plant_c_function_powers__p_fil = 0 ;
        _plant_c_function_powers__q_fil = 0 ;
    }
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
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
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Plant.Iag.Ia1
    _plant_iag_ia1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Plant.Ibg.Ia1
    _plant_ibg_ia1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: Plant.Icg.Ia1
    _plant_icg_ia1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Plant.Va.Va1
    _plant_va_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: Plant.Vb.Va1
    _plant_vb_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Plant.Vc.Va1
    _plant_vc_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Plant.C function powers
    _plant_c_function_powers__i_a = _plant_iag_ia1__out;
    _plant_c_function_powers__i_b = _plant_ibg_ia1__out;
    _plant_c_function_powers__i_c = _plant_icg_ia1__out;
    _plant_c_function_powers__v_a = _plant_va_va1__out;
    _plant_c_function_powers__v_b = _plant_vb_va1__out;
    _plant_c_function_powers__v_c = _plant_vc_va1__out;
    {
        _plant_c_function_powers__p = _plant_c_function_powers__v_a * _plant_c_function_powers__i_a + _plant_c_function_powers__v_b * _plant_c_function_powers__i_b + _plant_c_function_powers__v_c * _plant_c_function_powers__i_c ;
        _plant_c_function_powers__q = 1 / sqrt ( 3 ) * ( _plant_c_function_powers__i_c * ( _plant_c_function_powers__v_a - _plant_c_function_powers__v_b ) + _plant_c_function_powers__i_a * ( _plant_c_function_powers__v_b - _plant_c_function_powers__v_c ) + _plant_c_function_powers__i_b * ( _plant_c_function_powers__v_c - _plant_c_function_powers__v_a ) ) ;
        _plant_c_function_powers__p_f = _plant_c_function_powers__p_fil ;
        _plant_c_function_powers__q_f = _plant_c_function_powers__q_fil ;
    }
    // Generated from the component: Plant.p
    HIL_OutAO(0x4000, (float)_plant_c_function_powers__p);
    // Generated from the component: Plant.pf
    HIL_OutAO(0x4001, (float)_plant_c_function_powers__p_f);
    // Generated from the component: Plant.q
    HIL_OutAO(0x4002, (float)_plant_c_function_powers__q);
    // Generated from the component: Plant.qf
    HIL_OutAO(0x4003, (float)_plant_c_function_powers__q_f);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Plant.C function powers
    {
        _plant_c_function_powers__p_fil = _plant_c_function_powers__p_fil + 5e-05 * 2 * M_PI * 50.0 * ( _plant_c_function_powers__p - _plant_c_function_powers__p_fil ) ;
        _plant_c_function_powers__q_fil = _plant_c_function_powers__q_fil + 5e-05 * 2 * M_PI * 50.0 * ( _plant_c_function_powers__q - _plant_c_function_powers__q_fil ) ;
    }
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------