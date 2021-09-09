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
	uint32_t CMAR1; 					///< DMA chennel 1 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_1; 
	uint32_t CCR2; 						///< DMA channel 2 configuration register
	uint32_t CNDTR2; 					///< DMA channel 2 number of data to transfer registers
	uint32_t CPAR2; 					///< DMA channel 2 peripheral address register
	uint32_t CMAR2; 					///< DMA chennel 2 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_2; 
	uint32_t CCR3; 						///< DMA channel 3 configuration register
	uint32_t CNDTR3; 					///< DMA channel 3 number of data to transfer registers
	uint32_t CPAR3; 					///< DMA channel 3 peripheral address register
	uint32_t CMAR3; 					///< DMA chennel 3 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_3; 
	uint32_t CCR4; 						///< DMA channel 4 configuration register
	uint32_t CNDTR4; 					///< DMA channel 4 number of data to transfer registers
	uint32_t CPAR4; 					///< DMA channel 4 peripheral address register
	uint32_t CMAR4; 					///< DMA chennel 4 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_4; 
	uint32_t CCR5; 						///< DMA channel 5 configuration register
	uint32_t CNDTR5; 					///< DMA channel 5 number of data to transfer registers
	uint32_t CPAR5; 					///< DMA channel 5 peripheral address register
	uint32_t CMAR5; 					///< DMA chennel 5 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_5; 
	uint32_t CCR6; 						///< DMA channel 6 configuration register
	uint32_t CNDTR6; 					///< DMA channel 6 number of data to transfer registers
	uint32_t CPAR6; 					///< DMA channel 6 peripheral address register
	uint32_t CMAR6; 					///< DMA chennel 6 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_6; 
	uint32_t CCR7; 						///< DMA channel 7 configuration register
	uint32_t CNDTR7; 					///< DMA channel 7 number of data to transfer registers
	uint32_t CPAR7; 					///< DMA channel 7 peripheral address register
	uint32_t CMAR7; 					///< DMA chennel 7 memory address register
	uint32_t DMA_OFFSET_DO_NOT_USE_7; 
	uint32_t DMA_OFFSET_DO_NOT_USE_8; 
	uint32_t DMA_OFFSET_DO_NOT_USE_9; 
	uint32_t DMA_OFFSET_DO_NOT_USE_10; 
	uint32_t DMA_OFFSET_DO_NOT_USE_11;
	uint32_t DMA_OFFSET_DO_NOT_USE_12; 
	uint32_t CSELR; 					///< DMA chanel selection register
} dma_struct_t;

#define DMA1 ((dma_struct_t*) 0x40020000) ///< DMA1 base address
#define DMA2 ((dma_struct_t*) 0x40020400) ///< DMA2 base address


/*********************************************************************
 * 
 * TypeDefs
 * 
 ********************************************************************/
/*********************************************************************
 * 
 * Values for functions
 * 
 ********************************************************************/

#endif /* STM32L496ZG_DMA_H */
