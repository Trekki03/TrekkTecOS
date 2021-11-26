#include "mcu/stm32l496zg/stm32l496zg_rcc.h"

uint32_t uartToggleMap[5][2] =
{
        { (uint32_t) &(RCC->APB2ENR), 14uL},
        { (uint32_t) &(RCC->APB1ENR1), 17uL},
        { (uint32_t) &(RCC->APB1ENR1), 18uL},
        { (uint32_t) &(RCC->APB1ENR1), 19uL},
        { (uint32_t) &(RCC->APB1ENR1), 20uL}
};



