/**
 * @file uart.h
 * 
 * @brief This file contains the functions concerning the uart registers
 * 
 * @copyright Copyright (c) 2021
 */
#ifndef UART_H
#define UART_H

#include "mcu/stm32l496zg/stm32l496zg_uart.h"

/**
 * @brief Set word length of uart
 * @param uartNumber 1-5
 * @param wordLength 7 to 9 bits
 */
void Uart_SetWordLength(int uartNumber, uart_word_length_t wordLength);


#endif /* UART_H */
