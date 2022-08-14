/**
 * @file dma.h
 * 
 * @brief This file contains the functions concerning the flash registers
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef DMA_H
#define DMA_H

// MCU specific includes
#ifdef STM32L496ZG
#   include "mcu/stm32l496zg.h"
#endif

#include "bool.h"

/**
 * @brief enables or disables the "Transfer Complete Interrupt" for a channel of a dma
 *
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param onOff TCI on or off
 */
void Dma_ToggleTransferCompleteInterrupt(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool onOff);

/**
 * @brief sets the transfer direction of an dma channel
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param direction transfer direction of the channel
 *
 */
void Dma_SetTransferDirection(uint32_t dmaNumber, uint32_t dmaChannelNumber, dma_transfer_direction_t direction);

/**
 * @brief enables or disables the circular mode of an dma channel
 *
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param onOff circular mode on or off
 */
void Dma_ToggleCircularMode(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool onOff);

/**
 * @brief enables or disables the peripheral increment of an dma channel
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param onOff peripheral increment on or off
 */
void Dma_TogglePeripheralIncrement(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool onOff);

/**
 * @brief enables or disables the memory increment of an dma channel
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param onOff memory increment on or off
 */
void Dma_ToggleMemoryIncrement(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool onOff);

/**
 * @brief sets the size of each data transfer to the peripheral
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param dataSize size of each data transfer
 */
void Dma_SetPeripheralSize(uint32_t dmaNumber, uint32_t dmaChannelNumber, peripheral_size_t dataSize);

/**
 * @brief sets the priority of an dma channel
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param priority new priority of channel
 */
void Dma_SetChannelPriority(uint32_t dmaNumber, uint32_t dmaChannelNumber, channel_priority_t priority);

/**
 * @brief switch between "Memory To Memory" and "Memory/Peripheral To Peripheral/Memory" mode
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param memoryToMemoryMode True -> "Memory To Memory" Mode, False -> "Memory/Peripheral To Peripheral/Memory" Mode
 */
void Dma_ToggleMemToMemMode(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool memoryToMemoryMode);

/**
 * @brief sets the dma request source
 * @param dma dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param dmaRequestCode binary number of the dma request source. (recommended to use a dma_x_channel_x_requests_t enum)
 */
void Dma_SetDmaChannelRequest(dma_struct_t* dma, uint32_t dmaChannelNumber, uint32_t dmaRequestCode);

/**
 * @brief Sets the address of the peripheral
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param peripheralAddress* 32bit address pointer of the peripheral
 */
void Dma_SetPeripheralAddress(uint32_t dmaNumber, uint32_t dmaChannelNumber, volatile uint32_t * peripheralAddress);

/**
 * @brief Sets the address of the memory
 * @param dmaNumber dma to be configured
 * @param dmaChannelNumber channel to be configured
 * @param peripheralAddress* 32bit address pointer of the memory
 */
void Dma_SetMemoryAddress(uint32_t dmaNumber, uint32_t dmaChannelNumber, volatile uint32_t * memoryAddress);

/**
 * @brief setsup dma for usage with u(s)art
 * 
 * @param usartNumber 1-5
 */
void Dma_SetupDMAForU_s_art(uint32_t usartNumber);

#endif /* DMA_H */
