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

#include<math.h>
#include<stdint.h>

// Map internal types to C standard types
#ifndef X_UnInt8
typedef unsigned char X_UnInt8;   // uint8_t from C standard lib
#endif

#ifndef X_UnInt16
typedef unsigned short X_UnInt16; // uint16_t from C standard lib
#endif

#ifndef X_UnInt32
typedef unsigned int X_UnInt32;   // uint32_t from C standard lib
#endif

#ifndef PLATFORM_INFO
#define PLATFORM_NAME "launchxl-f28379d"
#endif

#ifndef ALBE_CURRENT_CTRL_TYPES_H
#define ALBE_CURRENT_CTRL_TYPES_H

#include "custom_types.h"

// generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif


#ifndef ALBE_CURRENT_CTRL_CUSTOM_TYPES_H
// Use default types
typedef int int_t;
typedef unsigned int uint_t;
typedef double real_t;
#endif

#endif
