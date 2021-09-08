/**
 * @file stm32l496zg_flash.h
 * 
 * @brief Contains all stm32l496zg specific flash values/registers etc.
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef STM32L496ZG_FLASH_H
#define STM32L496ZG_FLASH_H

#include "stdint.h"

/******************* Flash Register *******************/

typedef struct
{
    volatile uint32_t ACR;               ///< Flash access conrol register      
    volatile uint32_t PDKEYR;            ///< Flash Power-down key register  
    volatile uint32_t KEYR;              ///< Flash key register    
    volatile uint32_t OPTKEYR;           ///< Flash option key register
    volatile uint32_t SR;                ///< Flash status register
    volatile uint32_t CR;                ///< Flash control register
    volatile uint32_t ECCR;              ///< Flash ECC register
    volatile uint32_t FLASH_OFFSET_DONT_USE_1;
    volatile uint32_t OPTR;              ///< Flash option register
    volatile uint32_t PCROP1SR;          ///< Flash PCROP Start address register
    volatile uint32_t PCROP1ER;          ///< Flash PCROÜ End address register
    volatile uint32_t WRP1AR;            ///< Flash WRP area A address register
    volatile uint32_t WRP1BR;            ///< Flash WRP area B address register

} flash_struct_t;

extern flash_struct_t*      const FLASH; ///< FLASH base address struct


/******************* Typedefs *******************/

typedef enum
{
    FLASH_LATENCY_0_WAIT_STATES = 0b000, /**< flash latency 0WS [1 CPU Cylce]: 
                                            V_Core Range 1: <= 16MHz HCLK, 
                                            V_Core Range 2: <= 6Mhz HCLK      */

    FLASH_LATENCY_1_WAIT_STATES = 0b001, /**< flash latency 1WS [2 CPU Cylce]: 
                                            V_Core Range 1: <= 32MHz HCLK, 
                                            V_Core Range 2: <= 12Mhz HCLK     */

    FLASH_LATENCY_2_WAIT_STATES = 0b010, /**< flash latency 2WS [3 CPU Cylce]: 
                                            V_Core Range 1: <= 48MHz HCLK, 
                                            V_Core Range 2: <= 18Mhz HCLK     */

    FLASH_LATENCY_3_WAIT_STATES = 0b011, /**< flash latency 3WS [4 CPU Cylce]: 
                                            V_Core Range 1: <= 64MHz HCLK, 
                                            V_Core Range 2: <= 26Mhz HCLK     */

    FLASH_LATENCY_4_WAIT_STATES = 0b100, /**< flash latency 4WS [5 CPU Cylce]: 
                                            V_Core Range 1: <= 80MHz HCLK, 
                                            V_Core Range 2: <= 26Mhz HCLK     */
} flash_latency_value_t;


/******************* Values for functions *******************/

//ToggleDataCache
#define TOGGLE_DATA_CACHE_REGISTER_ADDR &(FLASH->ACR)
#define TOGGLE_DATA_CACHE_VALUE_LENGTH 1
#define TOGGLE_DATA_CACHE_REGISTER_OFFSET 10
#define TOGGLE_DATA_CACHE_VALUE_ON 1
#define TOGGLE_DATA_CACHE_VALUE_OFF 0

//ToggleInstructionCache
#define TOGGLE_INSTRUCTION_CACHE_REGISTER_ADDR &(FLASH->ACR)
#define TOGGLE_INSTRUCTION_CACHE_VALUE_LENGTH 1
#define TOGGLE_INSTRUCTION_CACHE_REGISTER_OFFSET 9
#define TOGGLE_INSTRUCTION_CACHE_VALUE_ON 1
#define TOGGLE_INSTRUCTION_CACHE_VALUE_OFF 0

//TogglePrefetchBuffer
#define TOGGLE_PREFETCH_BUFFER_REGISTER_ADDR &(FLASH->ACR)
#define TOGGLE_PREFETCH_BUFFER_VALUE_LENGTH 1
#define TOGGLE_PREFETCH_BUFFER_REGISTER_OFFSET 8
#define TOGGLE_PREFETCH_BUFFER_VALUE_ON 1
#define TOGGLE_PREFETCH_BUFFER_VALUE_OFF 0

//SetFlashLLatency
#define SET_FLASH_LATENCY_REGISTER_ADDR &(FLASH->ACR)
#define SET_FLASH_LATENCY_VALUE_LENGTH 3
#define SET_FLASH_LATENCY_REGISTER_OFFSET 0

#endif /* STM32L96ZG_FLASH_H */

/* END OF LINE */
