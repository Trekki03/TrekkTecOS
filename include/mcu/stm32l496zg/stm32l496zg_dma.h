/**
 * @file stm32l496zg_dma.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief Contains all stm32l496zg specific dma values/registers etc.
 * @version 0.1
 * @date 2021-08-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef STM32L496ZG_DMA_H
#define STM32L496ZG_DMA_H

#include "stdint.h"

/*********************************************************************
 * 
 * RCC REGISTER
 * 
 ********************************************************************/

typedef struct
{
	uint32_t ISR; 						///< DMA interrupt status register
	uint32_t IFCR; 						///< DMA interrupt flag clear register
	uint32_t CCR1; 						///< DMA channel 1 configuration register
	uint32_t CNDTR1; 					///< DMA channel 1 number of data to transfer registers
	uint32_t CPAR1; 					///< DMA channel 1 peripheral address register
	uint32_t CMAR1; 					///< DMA channel 1 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_1; 
	uint32_t CCR2; 						///< DMA channel 2 configuration register
	uint32_t CNDTR2; 					///< DMA channel 2 number of data to transfer registers
	uint32_t CPAR2; 					///< DMA channel 2 peripheral address register
	uint32_t CMAR2; 					///< DMA channel 2 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_2; 
	uint32_t CCR3; 						///< DMA channel 3 configuration register
	uint32_t CNDTR3; 					///< DMA channel 3 number of data to transfer registers
	uint32_t CPAR3; 					///< DMA channel 3 peripheral address register
	uint32_t CMAR3; 					///< DMA channel 3 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_3; 
	uint32_t CCR4; 						///< DMA channel 4 configuration register
	uint32_t CNDTR4; 					///< DMA channel 4 number of data to transfer registers
	uint32_t CPAR4; 					///< DMA channel 4 peripheral address register
	uint32_t CMAR4; 					///< DMA channel 4 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_4; 
	uint32_t CCR5; 						///< DMA channel 5 configuration register
	uint32_t CNDTR5; 					///< DMA channel 5 number of data to transfer registers
	uint32_t CPAR5; 					///< DMA channel 5 peripheral address register
	uint32_t CMAR5; 					///< DMA channel 5 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_5; 
	uint32_t CCR6; 						///< DMA channel 6 configuration register
	uint32_t CNDTR6; 					///< DMA channel 6 number of data to transfer registers
	uint32_t CPAR6; 					///< DMA channel 6 peripheral address register
	uint32_t CMAR6; 					///< DMA channel 6 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_6; 
	uint32_t CCR7; 						///< DMA channel 7 configuration register
	uint32_t CNDTR7; 					///< DMA channel 7 number of data to transfer registers
	uint32_t CPAR7; 					///< DMA channel 7 peripheral address register
	uint32_t CMAR7; 					///< DMA channel 7 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_7; 
	uint32_t DMA_OFFSET_DO_NOT_USE_8; 
	uint32_t DMA_OFFSET_DO_NOT_USE_9; 
	uint32_t DMA_OFFSET_DO_NOT_USE_10; 
	uint32_t DMA_OFFSET_DO_NOT_USE_11;
	uint32_t DMA_OFFSET_DO_NOT_USE_12; 
	uint32_t CSELR; 					///< DMA channel selection register
} dma_struct_t;

#define DMA1 ((dma_struct_t*) 0x40020000) ///< DMA1 base address
#define DMA2 ((dma_struct_t*) 0x40020400) ///< DMA2 base address


/*********************************************************************
 * 
 * TypeDefs / Data
 * 
 ********************************************************************/

/**
 * @enum dma_transfer_direction_t
 * @brief Direction of DMA memory transfer for @ref Dma_SetTransferDirection()
 */
typedef enum
{
    DIRECTION_READ_FROM_PERIPHERAL  = 0b0, ///< DMA, read from peripheral
    DIRECTION_READ_FROM_MEMORY      = 0b1  ///< DMA, read from memory
} dma_transfer_direction_t;

typedef enum
{
    PERIPHERAL_SIZE_8_BIT   = 0b00,     ///< peripheral data size: 8 bit
    PERIPHERAL_SIZE_16_BIT  = 0b01,     ///< peripheral data size: 16 bit
    PERIPHERAL_SIZE_32_BIT  = 0b10      ///< peripheral data size: 32 bit
} peripheral_size_t;

typedef enum
{
    CHANNEL_PRIORITY_LOW        = 0b00, ///< low dma channel priority
    CHANNEL_PRIORITY_MEDIUM     = 0b01, ///< medium dma channel priority
    CHANNEL_PRIORITY_HIGH       = 0b10, ///< high dma channel priority
    CHANNEL_PRIORITY_VERY_HIGH  = 0b11  ///< very high dma channel priority
} channel_priority_t;

typedef enum
{
    DMA_1_CHANNEL_1_REQUEST_0 = 0b0000, ///< Requests: ADC1
    DMA_1_CHANNEL_1_REQUEST_1 = 0b0001, ///< Requests: None
    DMA_1_CHANNEL_1_REQUEST_2 = 0b0010, ///< Requests: None
    DMA_1_CHANNEL_1_REQUEST_3 = 0b0011, ///< Requests: None
    DMA_1_CHANNEL_1_REQUEST_4 = 0b0100, ///< Requests: TIM2_CH3
    DMA_1_CHANNEL_1_REQUEST_5 = 0b0101, ///< Requests: TIM17_CH1 and TIM17_UP
    DMA_1_CHANNEL_1_REQUEST_6 = 0b0110, ///< Requests: TIM4_CH1
    DMA_1_CHANNEL_1_REQUEST_7 = 0b0111, ///< Requests: None
} dma_1_channel_1_requests_t;

typedef enum
{
    DMA_1_CHANNEL_2_REQUEST_0 = 0b0000, ///< Requests: ADC2
    DMA_1_CHANNEL_2_REQUEST_1 = 0b0001, ///< Requests: SPI1_RX
    DMA_1_CHANNEL_2_REQUEST_2 = 0b0010, ///< Requests: USART3_TX
    DMA_1_CHANNEL_2_REQUEST_3 = 0b0011, ///< Requests: I2C3_TX
    DMA_1_CHANNEL_2_REQUEST_4 = 0b0100, ///< Requests: TIM2_UP
    DMA_1_CHANNEL_2_REQUEST_5 = 0b0101, ///< Requests: TIM3_CH3
    DMA_1_CHANNEL_2_REQUEST_6 = 0b0110, ///< Requests: None
    DMA_1_CHANNEL_2_REQUEST_7 = 0b0111, ///< Requests: TIM1_CH1
} dma_1_channel_2_requests_t;

typedef enum
{
    DMA_1_CHANNEL_3_REQUEST_0 = 0b0000, ///< Requests: ADC3
    DMA_1_CHANNEL_3_REQUEST_1 = 0b0001, ///< Requests: SPI1_TX
    DMA_1_CHANNEL_3_REQUEST_2 = 0b0010, ///< Requests: USART3_RX
    DMA_1_CHANNEL_3_REQUEST_3 = 0b0011, ///< Requests: I2C3_RX
    DMA_1_CHANNEL_3_REQUEST_4 = 0b0100, ///< Requests: TIM16_CH1 and TIM16_UP
    DMA_1_CHANNEL_3_REQUEST_5 = 0b0101, ///< Requests: TIM3_CH4 and TIM3_UP
    DMA_1_CHANNEL_3_REQUEST_6 = 0b0110, ///< Requests: TIM6_UP and DAC_CH1
    DMA_1_CHANNEL_3_REQUEST_7 = 0b0111, ///< Requests: TIM1_CH2
} dma_1_channel_3_requests_t;

typedef enum
{
    DMA_1_CHANNEL_4_REQUEST_0 = 0b0000, ///< Requests: DFSDM1_FLT0
    DMA_1_CHANNEL_4_REQUEST_1 = 0b0001, ///< Requests: SPI2_RX
    DMA_1_CHANNEL_4_REQUEST_2 = 0b0010, ///< Requests: USART1_TX
    DMA_1_CHANNEL_4_REQUEST_3 = 0b0011, ///< Requests: I2C2_TX
    DMA_1_CHANNEL_4_REQUEST_4 = 0b0100, ///< Requests: None
    DMA_1_CHANNEL_4_REQUEST_5 = 0b0101, ///< Requests: TIM7_UP and DAC_CH2
    DMA_1_CHANNEL_4_REQUEST_6 = 0b0110, ///< Requests: TIM4_CH2
    DMA_1_CHANNEL_4_REQUEST_7 = 0b0111, ///< Requests: TIM1_CH4 and TIM1_TRIG and TIM1_COM
} dma_1_channel_4_requests_t;

typedef enum
{
    DMA_1_CHANNEL_5_REQUEST_0 = 0b0000, ///< Requests: DFSDM1_FLT1
    DMA_1_CHANNEL_5_REQUEST_1 = 0b0001, ///< Requests: SPI2_TX
    DMA_1_CHANNEL_5_REQUEST_2 = 0b0010, ///< Requests: USART1_RX
    DMA_1_CHANNEL_5_REQUEST_3 = 0b0011, ///< Requests: I2C2_RX
    DMA_1_CHANNEL_5_REQUEST_4 = 0b0100, ///< Requests: TIM2_CH1
    DMA_1_CHANNEL_5_REQUEST_5 = 0b0101, ///< Requests: QUADSPI
    DMA_1_CHANNEL_5_REQUEST_6 = 0b0110, ///< Requests: TIM4_CH3
    DMA_1_CHANNEL_5_REQUEST_7 = 0b0111, ///< Requests: TIM15_CH1 and TIM15_UP and TIM15_TRIG and TIM15_COM
} dma_1_channel_5_requests_t;

typedef enum
{
    DMA_1_CHANNEL_6_REQUEST_0 = 0b0000, ///< Requests: DFSDM1_FLT2
    DMA_1_CHANNEL_6_REQUEST_1 = 0b0001, ///< Requests: SAI2_A
    DMA_1_CHANNEL_6_REQUEST_2 = 0b0010, ///< Requests: USART2_RX
    DMA_1_CHANNEL_6_REQUEST_3 = 0b0011, ///< Requests: I2C1_TX
    DMA_1_CHANNEL_6_REQUEST_4 = 0b0100, ///< Requests: TIM16_CH1 and TIM16_UP
    DMA_1_CHANNEL_6_REQUEST_5 = 0b0101, ///< Requests: TIM3_CH1 and TIM3_TRIG
    DMA_1_CHANNEL_6_REQUEST_6 = 0b0110, ///< Requests: None
    DMA_1_CHANNEL_6_REQUEST_7 = 0b0111, ///< Requests: TIM1_UP
} dma_1_channel_6_requests_t;

typedef enum
{
    DMA_1_CHANNEL_7_REQUEST_0 = 0b0000, ///< Requests: DFSDM1_FLT3
    DMA_1_CHANNEL_7_REQUEST_1 = 0b0001, ///< Requests: SAI2_B
    DMA_1_CHANNEL_7_REQUEST_2 = 0b0010, ///< Requests: USART2_TX
    DMA_1_CHANNEL_7_REQUEST_3 = 0b0011, ///< Requests: I2C1_RX
    DMA_1_CHANNEL_7_REQUEST_4 = 0b0100, ///< Requests: TIM2_CH2 and TIM2_CH4
    DMA_1_CHANNEL_7_REQUEST_5 = 0b0101, ///< Requests: TIM17_CH1 and TIM17_UP
    DMA_1_CHANNEL_7_REQUEST_6 = 0b0110, ///< Requests: TIM4_UP
    DMA_1_CHANNEL_7_REQUEST_7 = 0b0111, ///< Requests: TIM1_CH3
} dma_1_channel_7_requests_t;

typedef enum
{
    DMA_2_CHANNEL_1_REQUEST_0 = 0b0000, ///< Requests: I2C4_RX
    DMA_2_CHANNEL_1_REQUEST_1 = 0b0001, ///< Requests: SAI1_A
    DMA_2_CHANNEL_1_REQUEST_2 = 0b0010, ///< Requests: UART5_TX
    DMA_2_CHANNEL_1_REQUEST_3 = 0b0011, ///< Requests: SPI3_RX
    DMA_2_CHANNEL_1_REQUEST_4 = 0b0100, ///< Requests: SWPMI1_RX
    DMA_2_CHANNEL_1_REQUEST_5 = 0b0101, ///< Requests: TIM5_CH4 and TIM5_TRIG
    DMA_2_CHANNEL_1_REQUEST_6 = 0b0110, ///< Requests: AES_IN
    DMA_2_CHANNEL_1_REQUEST_7 = 0b0111, ///< Requests: TIM8_CH3 and TIM8_UP
} dma_2_channel_1_requests_t;

typedef enum
{
    DMA_2_CHANNEL_2_REQUEST_0 = 0b0000, ///< Requests: I2C4_TX
    DMA_2_CHANNEL_2_REQUEST_1 = 0b0001, ///< Requests: SAI1_B
    DMA_2_CHANNEL_2_REQUEST_2 = 0b0010, ///< Requests: UART5_RX
    DMA_2_CHANNEL_2_REQUEST_3 = 0b0011, ///< Requests: SPI3_TX
    DMA_2_CHANNEL_2_REQUEST_4 = 0b0100, ///< Requests: SWPMI1_TX
    DMA_2_CHANNEL_2_REQUEST_5 = 0b0101, ///< Requests: TIM5_CH3 and TIM5_UP
    DMA_2_CHANNEL_2_REQUEST_6 = 0b0110, ///< Requests: AES_OUT
    DMA_2_CHANNEL_2_REQUEST_7 = 0b0111, ///< Requests: TIM8_CH4 and TIM8_TRIG and TIM8_COM
} dma_2_channel_2_requests_t;

typedef enum
{
    DMA_2_CHANNEL_3_REQUEST_0 = 0b0000, ///< Requests: ADC1
    DMA_2_CHANNEL_3_REQUEST_1 = 0b0001, ///< Requests: SAI2_A
    DMA_2_CHANNEL_3_REQUEST_2 = 0b0010, ///< Requests: UART4_TX
    DMA_2_CHANNEL_3_REQUEST_3 = 0b0011, ///< Requests: None
    DMA_2_CHANNEL_3_REQUEST_4 = 0b0100, ///< Requests: SPI1_RX
    DMA_2_CHANNEL_3_REQUEST_5 = 0b0101, ///< Requests: None
    DMA_2_CHANNEL_3_REQUEST_6 = 0b0110, ///< Requests: AES_OUT
    DMA_2_CHANNEL_3_REQUEST_7 = 0b0111, ///< Requests: None
} dma_2_channel_3_requests_t;

typedef enum
{
    DMA_2_CHANNEL_4_REQUEST_0 = 0b0000, ///< Requests: ADC2
    DMA_2_CHANNEL_4_REQUEST_1 = 0b0001, ///< Requests: SAI2_B
    DMA_2_CHANNEL_4_REQUEST_2 = 0b0010, ///< Requests: None
    DMA_2_CHANNEL_4_REQUEST_3 = 0b0011, ///< Requests: TIM6_UP and DAC_CH1
    DMA_2_CHANNEL_4_REQUEST_4 = 0b0100, ///< Requests: SPI1_TX
    DMA_2_CHANNEL_4_REQUEST_5 = 0b0101, ///< Requests: TIM5_CH2
    DMA_2_CHANNEL_4_REQUEST_6 = 0b0110, ///< Requests: None
    DMA_2_CHANNEL_4_REQUEST_7 = 0b0111, ///< Requests: SDMMC1
} dma_2_channel_4_requests_t;

typedef enum
{
    DMA_2_CHANNEL_5_REQUEST_0 = 0b0000, ///< Requests: ADC3
    DMA_2_CHANNEL_5_REQUEST_1 = 0b0001, ///< Requests: None
    DMA_2_CHANNEL_5_REQUEST_2 = 0b0010, ///< Requests: UART4_RX
    DMA_2_CHANNEL_5_REQUEST_3 = 0b0011, ///< Requests: TIM7_UP and DAC_CH2
    DMA_2_CHANNEL_5_REQUEST_4 = 0b0100, ///< Requests: DCMI
    DMA_2_CHANNEL_5_REQUEST_5 = 0b0101, ///< Requests: TIM5_CH1
    DMA_2_CHANNEL_5_REQUEST_6 = 0b0110, ///< Requests: AES_IN
    DMA_2_CHANNEL_5_REQUEST_7 = 0b0111, ///< Requests: SDMMC1
} dma_2_channel_5_requests_t;

typedef enum
{
    DMA_2_CHANNEL_6_REQUEST_0 = 0b0000, ///< Requests: DCMI
    DMA_2_CHANNEL_6_REQUEST_1 = 0b0001, ///< Requests: SAI1_A
    DMA_2_CHANNEL_6_REQUEST_2 = 0b0010, ///< Requests: USART1_TX
    DMA_2_CHANNEL_6_REQUEST_3 = 0b0011, ///< Requests: None
    DMA_2_CHANNEL_6_REQUEST_4 = 0b0100, ///< Requests: LPUART1_TX
    DMA_2_CHANNEL_6_REQUEST_5 = 0b0101, ///< Requests: I2C1_RX
    DMA_2_CHANNEL_6_REQUEST_6 = 0b0110, ///< Requests: None
    DMA_2_CHANNEL_6_REQUEST_7 = 0b0111, ///< Requests: TIM8_CH1
} dma_2_channel_6_requests_t;

typedef enum
{
    DMA_2_CHANNEL_7_REQUEST_0 = 0b0000, ///< Requests: None
    DMA_2_CHANNEL_7_REQUEST_1 = 0b0001, ///< Requests: SAI1_B
    DMA_2_CHANNEL_7_REQUEST_2 = 0b0010, ///< Requests: USART1_RX
    DMA_2_CHANNEL_7_REQUEST_3 = 0b0011, ///< Requests: QUADSPI
    DMA_2_CHANNEL_7_REQUEST_4 = 0b0100, ///< Requests: LPUART1_RX
    DMA_2_CHANNEL_7_REQUEST_5 = 0b0101, ///< Requests: I2C1_TX
    DMA_2_CHANNEL_7_REQUEST_6 = 0b0110, ///< Requests: HASH_IN
    DMA_2_CHANNEL_7_REQUEST_7 = 0b0111, ///< Requests: TIM8_CH2
} dma_2_channel_7_requests_t;

/*********************************************************************
 *
 *  Functions
 *
 ********************************************************************/

/**
 * @brief return the corresponding CCR register for a dma/channel combination
 * @param dmaNumber selected dma number
 * @param dmaChannelNumber selected dma channel
 * @return CCR register pointer for dma/channel combination
 */
uint32_t* GetCcrRegister(uint32_t dmaNumber, uint32_t dmaChannelNumber);

/**
 * @brief return the corresponding CPAR register for a dma/channel combination
 * @param dmaNumber selected dma number
 * @param dmaChannelNumber selected dma channel
 * @return CPAR register pointer for dma/channel combination
 */
uint32_t* GetCparRegister(uint32_t dmaNumber, uint32_t dmaChannelNumber);

/**
 * @brief return the corresponding CMAR register for a dma/channel combination
 * @param dmaNumber selected dma number
 * @param dmaChannelNumber selected dma channel
 * @return CMAR register pointer for dma/channel combination
 */
uint32_t* GetCmarRegister(uint32_t dmaNumber, uint32_t dmaChannelNumber);
/*********************************************************************
 * 
 * Values for functions
 * 
 ********************************************************************/

// ToggleTransferCompleteInterrupt
#define TOGGLE_TRANSFER_COMPLETE_INTERRUPT_VALUE_ON 1uL
#define TOGGLE_TRANSFER_COMPLETE_INTERRUPT_VALUE_OFF 0uL
#define TOGGLE_TRANSFER_COMPLETE_INTERRUPT_VALUE_LENGTH 1uL
#define TOGGLE_TRANSFER_COMPLETE_INTERRUPT_OFFSET 1uL

// SetTransferDirection
#define SET_TRANSFER_DIRECTION_VALUE_LENGTH 1uL
#define SET_TRANSFER_DIRECTION_OFFSET 4uL

// ToggleCircularMode
#define TOGGLE_CIRCULAR_MODE_VALUE_ON 1uL
#define TOGGLE_CIRCULAR_MODE_VALUE_OFF 0uL
#define TOGGLE_CIRCULAR_MODE_VALUE_LENGTH 1uL
#define TOGGLE_CIRCULAR_MODE_OFFSET 5uL

// TogglePeripheralIncrement
#define TOGGLE_PERIPHERAL_INCREMENT_VALUE_ON 1uL
#define TOGGLE_PERIPHERAL_INCREMENT_VALUE_OFF 0uL
#define TOGGLE_PERIPHERAL_INCREMENT_VALUE_LENGTH 1uL
#define TOGGLE_PERIPHERAL_INCREMENT_OFFSET 6uL

// TogglePeripheralIncrement
#define TOGGLE_MEMORY_INCREMENT_VALUE_ON 1uL
#define TOGGLE_MEMORY_INCREMENT_VALUE_OFF 0uL
#define TOGGLE_MEMORY_INCREMENT_VALUE_LENGTH 1uL
#define TOGGLE_MEMORY_INCREMENT_OFFSET 7uL

// SetPeripheralDataSize
#define SET_PERIPHERAL_SIZE_VALUE_LENGTH 2uL
#define SET_PERIPHERAL_SIZE_OFFSET 8uL

// SetChannelPriority
#define SET_CHANNEL_PRIORITY_VALUE_LENGTH 2uL
#define SET_CHANNEL_PRIORITY_OFFSET 12uL

// ToggleMemToMemMode
#define TOGGLE_MEM_TO_MEM_MODE_VALUE_ON 1uL
#define TOGGLE_MEM_TO_MEM_MODE_VALUE_OFF 0uL
#define TOGGLE_MEM_TO_MEM_MODE_VALUE_LENGTH 1uL
#define TOGGLE_MEM_TO_MEM_MODE_OFFSET 14uL

// SetDmaChannelRequest
#define SET_DMA_CHANNEL_REQUEST_VALUE_LENGTH 4uL




#endif /* STM32L496ZG_DMA_H */
