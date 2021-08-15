/**
 * @file stm32l452re_systick.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief Contains all stm32l452re specific systick values/registers etc.
 * @version 0.1
 * @date 2021-08-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef STM32L452RE_SYSTICK_H
#define STM32L452RE_SYSTICK_H

#include "stdint.h"

/*********************************************************************
 * 
 * SysTick REGISTER
 * 
 ********************************************************************/

typedef struct 
{
    volatile uint32_t CTRL;                         ///< SysTick control and status register
    volatile uint32_t LOAD;                         ///< SysTick reload value register
    volatile uint32_t VAL;                          ///< SysTick current value register
    volatile uint32_t CALIB;                        ///< SysTick calibration value register
} systick_struct_t;

extern systick_struct_t*    const STK;              ///< SysTick base address struct


#endif /* STM32L452RE_SYSTICK_H */
