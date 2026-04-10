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

#ifndef HARM_CTRL_TYPES_H
#define HARM_CTRL_TYPES_H

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


#ifndef HARM_CTRL_CUSTOM_TYPES_H
// Use default types
typedef int int_t;
typedef unsigned int uint_t;
typedef double real_t;
#endif

#endif
