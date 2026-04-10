#ifndef __SCHEDULER_H__
#define __SCHEDULER_H__

#include "types.h"
#include "F2837xD_device.h"
#include "F2837xD_Examples.h"


#ifndef NOP
#define NOP    __asm(" NOP")
#endif



#define DEVICE_SYSCLK_FREQ                 200000000U

<<<<<<< HEAD
#define EX_RATE0                           (50U)
#define EX_RATE1                           (100000U)
=======
#define EX_RATE0                           (0.0001U)
>>>>>>> aea9860927cf4b779f5bda26fb65a58d9e991a5c


#define SETUP_SCHEDULER(TickFunctsArray)   setupScheduler(TickFunctsArray)


// Task structure for scheduler-based task
typedef struct task{
    uint32_t period;        // Rate at which the task should tick
    uint32_t elapsedTime;   // Time since task's last tick
    unsigned char isRunning;  // Boolean information saying whether task is currently running
    void (*TickFct)(void);  // Function to call for task's tick
} task;


//*****************************************************************************
//
// This function sets up the scheduler based on the ISR
//
//*****************************************************************************
void setupScheduler(void (**TickFunctsArray)(void));

void configCPUTimer(uint32_t freq);

//*****************************************************************************
//
// Initialization for the CPUTimer with cpuTimer as base register
//
//*****************************************************************************
void initCPUTimer(void);

//*****************************************************************************
//
// Enabling interrupt
//
//*****************************************************************************
void EnableUserInterrupts(void);

//*****************************************************************************
//
// Disabling interrupt
//
//*****************************************************************************
void DisableUserInterrupts(void);

//*****************************************************************************
//
// CPU Status check
//
//*****************************************************************************
void CpuStatus(void);
//*****************************************************************************
//
// Evaluation of execution rate
//
//*****************************************************************************
void evalExRate(void);
//*****************************************************************************
//
// ISR prototype
//
//*****************************************************************************
__interrupt void userISR(void);

extern void TickFct_R0(void);
<<<<<<< HEAD
extern void TickFct_R1(void);
=======
>>>>>>> aea9860927cf4b779f5bda26fb65a58d9e991a5c

extern void TickFct_Idle(void);



#endif
