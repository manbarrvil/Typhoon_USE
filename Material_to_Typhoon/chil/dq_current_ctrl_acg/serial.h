#ifndef SCI_API_H_
#define SCI_API_H_

#include "types.h"
#include "F2837xD_device.h"
#include "F2837xD_Examples.h"



#define FLOAT_SIZE          4U
#define RX_MSG_SIZE         5U
#define FIFO_SIZE_BYTES     16U

#define sin(x)          sinf(x)
#define cos(x)          cosf(x)
#define tan(x)          tanf(x)
#define asin(x)         asinf(x)
#define acos(x)         acosf(x)
#define atan(x)         atanf(x)
#define atan2(y, x)     atan2f(y, x)
#define asinh(x)        asinhf(x)
#define acosh(x)        acoshf(x)
#define tanh(x)         tanhf(x)
#define atanh(x)        atanhf(x)
#define fabs(x)         fabsf(x)
#define sqrt(x)         sqrtf(x)
#define trunc(x)        truncf(x)
#define fmod(x, y)      fmodf(x, y)
#define pow(x, y)       powf(x,y )
#define log(x)          logf(x)

#ifdef MAX
#undef MAX
#endif
#define MAX(value, limit) ((((float)value) > ((float)limit)) ? (value) : (limit))

#ifdef MIN
#undef MIN
#endif
#define MIN(value, limit) ((((float)value) < ((float)limit)) ? (value) : (limit))



typedef struct
{
    union {
      float a;
      unsigned char bytes[2];
    } data;

    Uint16 ping;
    Uint16 rx_defined;
    volatile struct SCI_REGS* SciRegs;

} SciConfig;


void Transmit_data(SciConfig*, real_t*, Uint16, Uint16, Uint16);
void Receive_data(SciConfig*, real_t*, Uint16);

extern SciConfig SerialComm;


#endif /* SCI_API_H_ */