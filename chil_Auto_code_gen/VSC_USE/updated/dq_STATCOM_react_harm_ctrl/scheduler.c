#include "scheduler.h"


// Define number of tasks. This number includes number of execution rates + 1 for the idle task
#define NR_OF_TASKS              (2)


const uint32_t tasksPeriodGCD   = EX_RATE0;  // Greatest common denominator for all periods - equal to fastest execution rate
const uint32_t periodR0         = EX_RATE0;


const uint32_t periods[NR_OF_TASKS] = { EX_RATE0, 0U};

unsigned char runningTasks[NR_OF_TASKS];
unsigned char currentTask = 0;
const uint32_t idleTask = 255;

task tasks[NR_OF_TASKS];

Uint32 timestamp = 0, eval_running = 0, int_enabled = 0, scheduler_halt = 0;


void initTasks(task *task_array, void (**TickFunctsArray)(void)) {
    unsigned short i;
    for(i=0; i<NR_OF_TASKS; ++i) {
        task_array[i].period = periods[i];
        task_array[i].elapsedTime = tasks[i].period;
        task_array[i].isRunning = 0;
        task_array[i].TickFct = TickFunctsArray[i];

        runningTasks[i] = idleTask;
    }
}

//*****************************************************************************
//
// ISR for the CPUTimer0 interrupt
//
//*****************************************************************************
__interrupt void userISR(void)
{
    unsigned char i;

    if(eval_running)
        evalExRate();

    DisableUserInterrupts();

    for(i=0; i<NR_OF_TASKS; ++i){
        if(   (tasks[i].elapsedTime >= tasks[i].period)
           && (runningTasks[currentTask] > i)
           && (!tasks[i].isRunning)) {

            tasks[i].elapsedTime = 0;
            tasks[i].isRunning = 1;
            runningTasks[++currentTask] = i;        //New task is added to the running tasks stack

            EnableUserInterrupts();

            tasks[i].TickFct();

            tasks[i].isRunning = 0;
            runningTasks[currentTask--] = 255;      //Removing the value of the top task in stack. Decrementing the current task index
        }
        tasks[i].elapsedTime += tasksPeriodGCD;
    }
}


void setupScheduler(void (**TickFunctsArray)(void)) {

    initTasks(tasks, TickFunctsArray);

    EALLOW;
    PieVectTable.TIMER0_INT=&userISR;
    initCPUTimer();
    configCPUTimer(DEVICE_SYSCLK_FREQ);
    EDIS;
}

// initCPUTimers - This function initializes all three CPU timers
// to a known state.
void initCPUTimer(void)
{
    // Initialize timer period to maximum
    CpuTimer0Regs.PRD.all = 0xFFFFFFFF;

    // Initialize pre-scale counter to divide by 1 (SYSCLKOUT)
    CpuTimer0Regs.TPR.bit.TDDR = 0;
    CpuTimer0Regs.TPRH.bit.TDDRH = 0;

    // Make sure timer is stopped
    CpuTimer0Regs.TCR.bit.TSS = 1;

    // Reload all counter register with period value
    CpuTimer0Regs.TCR.bit.TRB = 1;

    // Initialize timer period to maximum
    CpuTimer1Regs.PRD.all = 0xFFFFFFFF;

    // Initialize pre-scale counter to divide by 1 (SYSCLKOUT)
    CpuTimer1Regs.TPR.bit.TDDR = 0;
    CpuTimer1Regs.TPRH.bit.TDDRH = 0;

    // Make sure timer is stopped
    CpuTimer1Regs.TCR.bit.TSS = 1;

    // Reload all counter register with period value
    CpuTimer1Regs.TCR.bit.TRB = 1;
}


// configCPUTimer - This function initializes the selected timer to count
// up to tasksPeriodGCD us
void configCPUTimer(uint32_t freq)
{
    // Initialize timer period:
    uint32_t ticks = (uint32_t)(freq / 1000000 * tasksPeriodGCD);
    CpuTimer0Regs.PRD.all = ticks - 1;

    // Set pre-scale counter to divide by 1 (SYSCLKOUT):
    CpuTimer0Regs.TPR.bit.TDDR = 0;
    CpuTimer0Regs.TPRH.bit.TDDRH = 0;

    // Initializes timer control register. The timer is stopped, reloaded,
    CpuTimer0Regs.TCR.bit.TSS = 1;
    CpuTimer0Regs.TCR.bit.TRB = 1;

    // Stop after next decrement emulation mode
    CpuTimer0Regs.TCR.bit.FREE = 0;
    CpuTimer0Regs.TCR.bit.SOFT = 0;

    //Enable timer interrupt
    CpuTimer0Regs.TCR.bit.TIE = 1;

    // Reload and start timer
    CpuTimer0Regs.TCR.bit.TRB = 1;
    CpuTimer0Regs.TCR.bit.TSS = 0;
}


void EnableUserInterrupts(void)
{
    PieCtrlRegs.PIEIER1.bit.INTx7 = 1;
    IER |= M_INT1;
    EINT;
    ERTM;
    int_enabled = 1;
}


void DisableUserInterrupts(void)
{
    PieCtrlRegs.PIEIER1.bit.INTx7 = 0;
    NOP;
    NOP;
    NOP;
    NOP;
    NOP;
    PieCtrlRegs.PIEIFR1.bit.INTx7 = 0;
    PieCtrlRegs.PIEACK.bit.ACK1 = 1;
    IFR = 0x0000;
    int_enabled = 0;
}


void evalExRate(void)
{
    Uint16 i = 0;
    Uint32 t1 = 0, t2 = 0;

    DisableUserInterrupts();

    // Reload and start the timer
    CpuTimer1Regs.TCR.bit.TRB = 1;
    CpuTimer1Regs.TCR.bit.TSS = 0;
    DELAY_US(1);

    while(t1 <= t2)
    {
        t1 = CpuTimer1Regs.TIM.all;

        for(i=0; i<NR_OF_TASKS; ++i)
            tasks[i].TickFct();

        t2 = CpuTimer1Regs.TIM.all;
    }

    timestamp = t1 - t2;

    while(eval_running);

    // Reload and stop the timer
    CpuTimer1Regs.TCR.bit.TRB = 1;
    CpuTimer1Regs.TCR.bit.TSS = 1;

    EnableUserInterrupts();
}


void CpuStatus(void)
{
    if(!int_enabled) { // Halt the Scheduler if interrupt is disabled
        scheduler_halt = 1;
        while(1);
    }
}


