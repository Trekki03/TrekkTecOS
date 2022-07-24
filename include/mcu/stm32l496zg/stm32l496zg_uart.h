#ifndef STM32L496ZG_UART_H
#define STM32L496ZG_UART_H

#include "stdint.h"

/*********************************************************************
 * 
 * UART REGISTER
 * 
 ********************************************************************/

typedef struct
{
    volatile uint32_t CR1;                          ///< USART control register 1    
    volatile uint32_t CR2;                          ///< USART control register 2
    volatile uint32_t CR3;                          ///< USART control register 3
    volatile uint32_t BRR;                          ///< USART baude rate register
    volatile uint32_t GTPR;                         ///< USART guard time and prescaler register
    volatile uint32_t RTOR;                         ///< USART reciever timeout register
    volatile uint32_t RQR;                          ///< USART request register
    volatile uint32_t ISR;                          ///< USART interrupt and status register
    volatile uint32_t ICR;                          ///< USART interrupt flag clear register
    volatile uint32_t RDR;                          ///< USART reciever data register
    volatile uint32_t TDR;                          ///< USART tramit data register

} uart_struct_t;

#define USART1 ((uart_struct_t*) 0x40013800) ///< USART 1 base address struct
#define USART2 ((uart_struct_t*) 0x40004400) ///< USART 2 base address struct
#define USART3 ((uart_struct_t*) 0x40004800) ///< USART 3 base address struct
#define UART4  ((uart_struct_t*) 0x40004C00) ///< UART 4 base address struct
#define UART5  ((uart_struct_t*) 0x40005000) ///< UART 5 base address struct

/*********************************************************************
 * 
 * TypeDefs
 * 
 ********************************************************************/
typedef enum
{
    UART_WORD_LENGTH_8_BITS = 0b00,    ///< UART Word Length: 8 bits
    UART_WORD_LENGTH_9_BITS = 0b01,    ///< UART Word Length: 9 bits
    UART_WORD_LENGTH_7_BITS = 0b10     ///< UART Word Length: 7 bits
} uart_word_length_t;

typedef enum
{
    UART_OVERSAMLING_MODE_8 = 0b0,  ///< UART Oversampling by 8
    UART_OVERSAMLING_MODE_16 = 0b1  ///< UART Oversampling by 16
} uart_oversamling_mode_t;

typedef enum
{
    UART_STOP_BIT_COUNT_1 = 0b00,          ///< UART 1 stop bit
    UART_STOP_BIT_COUNT_0_POINT_5 = 0b01,  ///< UART 1 stop bit
    UART_STOP_BIT_COUNT_2 = 0b10,          ///< UART 1 stop bit
    UART_STOP_BIT_COUNT_1_POINT_5 = 0b11   ///< UART 1 stop bit
} uart_stop_bit_count_t;

// *************************** Vars ******************************

extern uint32_t* uartCrRegisterMap[5][3];
extern uint32_t* uartBRRegisterMap[5]; 

/*********************************************************************
 * 
 * Values for functions
 * 
 ********************************************************************/
// Set Word Length
#define UART_SET_WORD_LENGTH_VALUE_LENGTH 2
#define UART_SET_WORD_LENGTH_OFFSET 28

// Set Oversamling Mode
#define UART_SET_OVERSAMLING_MODE_VALUE_LENGTH 1
#define UART_SET_OVERSAMLING_MODE_OFFSET 15

// Set Baudrate
#define UART_SET_BAUDRATE_VALUE_LENGTH 16
#define UART_SET_BAUDRATE_OFFSET 0

// Set Stop bits
#define UART_SET_STOP_BIT_VALUE_LENGTH 2
#define UART_SET_STOP_BIT_OFFSET 12

// Toggle DMA Transmit
#define UART_TOGGLE_DMA_TRANSMIT_VALUE_LENGTH 1
#define UART_TOGGLE_DMA_TRANSMIT_OFFSET 7

// Toggle UART
#define UART_TOGGLE_UART_VALUE_LENGTH 1
#define UART_TOGGLE_UART_OFFSET 0 

// Toggle Transmitter
#define UART_TOGGLE_TRANSMITTER_VALUE_LENGTH 1
#define UART_TOGGLE_TRANSMITTER_OFFSET 3

#endif /* STM32L496ZG_UART_H */
