/**
 * @file flash.h
 * 
 * @brief This file contains the functions concerning the flash registers
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef FLASH_H
#define FLASH_H

// MCU specific includes
#ifdef STM32L496ZG
#   include "mcu/stm32l496zg.h"
#endif

#include "bool.h"

/**
 * @brief enables or disables the data cache
 * 
 * @param onOff data cache on or off
 */
void Flash_ToggleDataCache (bool b_onOff);

/**
 * @brief enables or disables the instruction cache
 * 
 * @param onOff instruction cache on or off
 */
void Flash_ToggleInstructionCache (bool b_onOff);

/**
 * @brief enables or disables the prefetch buffer
 * 
 * @param onOff prefetch buffer on or off
 */
void Flash_TogglePrefetchBuffer (bool b_onOff);

/**
 * @brief Set the Flash Latency
 * 
 * @param latency flash latency which should be set
 */
void Flash_SetFlashLatency (flash_latency_value_t latency);

#endif /* FLASH_H */

/* END OF FILE */
