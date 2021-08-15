/**
 * @file flash.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief This file contains the functions concerning the flash registers
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef FLASH_H
#define FLASH_H

// Includes
#ifdef STM32L452RE
    #include "mcu/stm32l452re.h"
#endif
#include "bool.h"

/**
 * @brief enables or disables the data cache
 * 
 * @param onOff data cache on or off
 */
void ToggleDataCache(bool onOff);

/**
 * @brief enables or disables the instruction cache
 * 
 * @param onOff instruction cache on or off
 */
void ToggleInstructionCache(bool onOff);

/**
 * @brief enables or disables the prefetch buffer
 * 
 * @param onOff prefetch buffer on or off
 */
void TogglePrefetchBuffer(bool onOff);

/**
 * @brief Set the Flash Latency
 * 
 * @param latency flash latency which should be set
 */
void SetFlashLatency(flash_latency_value_t latency);

#endif /* FLASH_H */
