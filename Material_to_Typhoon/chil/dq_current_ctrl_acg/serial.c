#include "serial.h"


SciConfig SerialComm = {.rx_defined = 0};


void Transmit_data(SciConfig* serial, real_t* data, Uint16 vct_size, Uint16 prd, Uint16 trigger)
{
    Uint16 i, j;

    if(FIFO_SIZE_BYTES - serial->SciRegs->SCIFFTX.bit.TXFFST < 4 * vct_size)
        return;

    switch(prd)
    {
        case 0:         /* If prd == 0 transmit function waits for ping from SCADA widget in order to initiate data transmitting */
            if(!serial->rx_defined)
                /* If SCI Receive component is not used, function for Transmit needs to check for ping */
                serial->ping = ((!serial->SciRegs->SCIFFRX.bit.RXFFST) || ((serial->SciRegs->SCIRXBUF.all & 0x00FF) != 5)) ? 0 : 1;
            if(!serial->ping)
                return;
            break;
        case 1:         /* If prd == 1 transmit function executes in every step function */
            break;
        case 2:         /* If prd == 2 transmit function executes in every step function while the trigger is active */
            if(!trigger)
                return;
            break;
    }

    serial->ping = 0;

    for(j = 0; j < vct_size; j++) /* Sending data */
    {
        serial->data.a = data[j];
        for(i = 0; i < FLOAT_SIZE; i++)
        {
            *(Uint16*)(&serial->SciRegs->SCITXBUF) = (serial->data.bytes[i/2] & 0x00FF << i%2 * 8) >> i%2 * 8; /* Applying bytes to output register*/
        }
    }
}


void Receive_data(SciConfig* serial, real_t *p_states, Uint16 vct_size)
{
    Uint16 i, index, rx_data[FLOAT_SIZE];

    while(vct_size--)
    {
        if(serial->SciRegs->SCIFFRX.bit.RXFFST < RX_MSG_SIZE)
            return;

        index = serial->SciRegs->SCIRXBUF.all & 0x00FF;
        for(i = 0; i < FLOAT_SIZE; i++)
            rx_data[i] = serial->SciRegs->SCIRXBUF.all & 0x00FF;

        if(index == 5)
        {
            serial->ping = 1;
            continue;
        }

        serial->data.bytes[0] = (rx_data[1] << 8) + rx_data[0];
        serial->data.bytes[1] = (rx_data[3] << 8) + rx_data[2];

        if (serial->SciRegs->SCIRXST.bit.RXERROR == 1)
        {
            serial->SciRegs->SCICTL1.bit.SWRESET = 1;
            serial->SciRegs->SCICTL1.bit.SWRESET = 0;
            serial->SciRegs->SCICTL1.bit.SWRESET = 1;
        }
        p_states[index-1] = serial->data.a;
    }
}