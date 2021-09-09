/**
 * @file stm32l496zg_systick.h
 * 
 * @brief Contains all stm32l496zg specific systick values/registers etc.
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef STM32L496ZG_SYSTICK_H
#define STM32L496ZG_SYSTICK_H

#include "stdint.h"

/******************* SysTick Register *******************/

typedef struct 
{
    volatile uint32_t CTRL;             ///< SysTick control and status register
    volatile uint32_t LOAD;             ///< SysTick reload value register
    volatile uint32_t VAL;              ///< SysTick current value register
    volatile uint32_t CALIB;            ///< SysTick calibration value register
} systick_struct_t;

#define STK (systick_struct_t*) 0xE000E010;  ///< SysTick base address struct


#endif /* STM32L496ZG_SYSTICK_H */

/* END OF FILE */
