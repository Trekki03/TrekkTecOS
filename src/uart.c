#include "uart.h"
#include "register.h"

uint32_t* Local_GetCrRegister(uint32_t uartNumber, uint32_t crNumber)
{
    return uartCrRegisterMap[uartNumber-1][crNumber-1];
}

void Uart_SetWordLength(int uartNumber, uart_word_length_t wordLength)
{
    uint32_t* controlRegister = Local_GetCrRegister(uartNumber, 1);
    Register_WriteIntoRegister(controlRegister, wordLength, UART_SET_WORD_LENGTH_VALUE_LENGTH, UART_SET_WORD_LENGTH_OFFSET);
}

void Uart_SetOversamling(int uartNumber, uart_oversamling_mode_t oversamlingMode)
{
    uint32_t* controlRegister = Local_GetCrRegister(uartNumber, 1);
    Register_WriteIntoRegister(controlRegister, oversamlingMode, UART_SET_OVERSAMLING_MODE_VALUE_LENGTH, UART_SET_OVERSAMLING_MODE_OFFSET);

}

void Uart_SetBaudrate(int uartNumber, int mcuApb1Frequency, int baudRate)
{
    uint32_t over8 = Register_ReadRegister(Local_GetCrRegister(uartNumber, 1), UART_SET_OVERSAMLING_MODE_VALUE_LENGTH, UART_SET_OVERSAMLING_MODE_OFFSET);
    uint32_t divider = 0;
    if(over8)
    {
        divider = 2*(mcuApb1Frequency/baudRate);
        uint32_t last3Bit = divider & 0b111;
        
        //remove last three bits
        divider = divider & ~(0b111);
        
        //shift last three bits by one
        last3Bit = last3Bit >> 1;

        //connect bits together
        divider = divider | last3Bit;
    } 
    else
    {
        divider = mcuApb1Frequency/baudRate;
    }

    //TODO: Add some type of error system instead of just returning from the function
    if(divider == 0) return; 

    uint32_t* register_p = uartBRRegisterMap[uartNumber-1];
    Register_WriteIntoRegister(register_p, divider, UART_SET_BAUDRATE_VALUE_LENGTH, UART_SET_BAUDRATE_OFFSET);
}


//TODO: Maybe not working, Oszilskop always read in one Stop mode. Check dependencies and logic analyzer
void Uart_SetStopBits(int uartNumber, uart_stop_bit_count_t stopBits)
{
    uint32_t* controlRegister = Local_GetCrRegister(uartNumber, 2);
    Register_WriteIntoRegister(controlRegister, stopBits, UART_SET_STOP_BIT_VALUE_LENGTH, UART_SET_STOP_BIT_OFFSET);
}

void Uart_ToggleDmaTransmit(int uartNumber, bool active)
{
    uint32_t* controlRegister = Local_GetCrRegister(uartNumber, 3);
    Register_WriteIntoRegister(controlRegister, active, UART_TOGGLE_DMA_TRANSMIT_VALUE_LENGTH, UART_TOGGLE_DMA_TRANSMIT_OFFSET);
}

void Uart_ToggleUart(int uartNumber, bool active)
{
    uint32_t* controlRegister = Local_GetCrRegister(uartNumber, 1);
    Register_WriteIntoRegister(controlRegister, active, UART_TOGGLE_UART_VALUE_LENGTH, UART_TOGGLE_UART_OFFSET);
}

void Uart_ToggleTransmitter(int uartNumber, bool active)
{
    uint32_t* controlRegister = Local_GetCrRegister(uartNumber, 1);
    Register_WriteIntoRegister(controlRegister, active, UART_TOGGLE_TRANSMITTER_VALUE_LENGTH, UART_TOGGLE_TRANSMITTER_OFFSET);
}