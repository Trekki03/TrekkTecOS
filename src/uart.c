#include "uart.h"
#include "register.h"

uint32_t* Local_GetCrRegister(uint32_t uartNumber, uint32_t crNumber)
{
    return uartCrRegisterMap[uartNumber][crNumber];
}

void Uart_SetWordLength(int uartNumber, uart_word_length_t wordLength)
{
    uint32_t* controlRegister = Local_GetCrRegister(uartNumber, 1);
    Register_WriteIntoRegister(controlRegister, wordLength, UART_SET_WORD_LENGTH_VALUE_LENGTH, UART_SET_WORD_LENGTH_OFFSET);
}