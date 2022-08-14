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
#include "bool.h"

/**
 * @brief Set word length of uart
 * @param uartNumber 1-5
 * @param wordLength 7 to 9 bits
 */
void Uart_SetWordLength(int uartNumber, uart_word_length_t wordLength);


/**
 * @brief Set Uart Oversampling
 * @param uartNumber 1-5
 * @param oversamlingMode 8 or 16
 */
void Uart_SetOversamling(int uartNumber, uart_oversamling_mode_t oversamlingMode);

/**
 * @brief Sets the Uarts baud rate 
 * IMPORTANT: Has to be set after setting Oversamling Mode
 *  
 * @param uartNumber 1-5
 * @param mcuApb1Frequency frequency of the apb1 clock (clock source of uart) 
 * @param baudRate desiered baudrate (e.g. 9600, 115200) 
 */
void Uart_SetBaudrate(int uartNumber, int mcuApb1Frequency, int baudRate);

/**
 * @brief Sets the UART stop bits
 * 
 * @param uartNumber 1-5
 * @param stopBits number of stop bits
 */
void Uart_SetStopBits(int uartNumber, uart_stop_bit_count_t stopBits);

/**
 * @brief Enables or disables dma transmit
 * 
 * @param uartNumber 1-5
 * @param active 
 */
void Uart_ToggleDmaTransmit(int uartNumber, bool active);

/**
 * @brief Enables or disables the uart peripheral
 * 
 * @param uartNumber 1-5
 * @param active 
 */
void Uart_ToggleUart(int uartNumber, bool active);

/**
 * @brief Enables or disables uart transmitter
 * 
 * @param uartNumber 1-5
 * @param active 
 */
void Uart_ToggleTransmitter(int uartNumber, bool active);

/**
 * @brief Sets up everything to use Usart
 * 
 * @param uartNumber 1-5
 */
void Uart_SetupU_S_ART(int uartNumber);

#endif /* UART_H */
