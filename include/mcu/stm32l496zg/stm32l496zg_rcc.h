/**
 * @file stm32l496zg_rcc.h
 * 
 * @brief Contains all stm32l496zg specific rcc values/registers etc.
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef STM32L496ZG_RCC_H
#define STM32L496ZG_RCC_H

#include "stdint.h"

/******************* RCC Register *******************/

typedef struct
{
    volatile uint32_t CR;               ///< clock control register
    volatile uint32_t ICSCR;            /**< internal clock source calibration 
                                            register                          */
    volatile uint32_t CFGR;             ///< clock configuration register   
    volatile uint32_t PLLCFGR;          ///< pll configuration register
    volatile uint32_t PLLSAI1CFGR;      ///< pllsai1 configuration register
             uint32_t RCC_OFFSET_DONT_USE_0; 
    volatile uint32_t CIER;             ///< clock interrupt enable register       
    volatile uint32_t CIFR;             ///< clock interrupt flag register
    volatile uint32_t CICR;             ///< clock interrupt clear register
             uint32_t RCC_OFFSET_DONT_USE_1;  
    volatile uint32_t AHB1RSTR;         ///< ahb1 peripheral reset register
    volatile uint32_t AHB2RSTR;         ///< ahb2 peripheral reset register
    volatile uint32_t AHB3RSTR;         ///< ahb3 peripheral reset register   
             uint32_t RCC_OFFSET_DONT_USE_2;  
    volatile uint32_t APB1RSTR1;        ///< apb1 peripheral reset register 1 
    volatile uint32_t APB1RSTR2;        ///< apb1 peripheral reset register 2 
    volatile uint32_t APB2RSTR;         ///< apb2 peripheral reset register   
             uint32_t RCC_OFFSET_DONT_USE_3;  
    volatile uint32_t AHB1ENR;          /**< ahb1 peripheral clock enable 
                                            register                          */
    volatile uint32_t AHB2ENR;          /**< ahb2 peripheral clock enable 
                                            register                          */
    volatile uint32_t AHB3ENR;          /**< ahb3 peripheral clock enable 
                                            register                          */
             uint32_t RCC_OFFSET_DONT_USE_4;  
    volatile uint32_t APB1ENR1;         /**< apb1 peripheral clock enable 
                                            register 1                        */
    volatile uint32_t APB1ENR2;         /**< apb1 peripheral clock enable 
                                            register 2                        */
    volatile uint32_t APB2ENR;          /**< apb2 peripheral clock enable 
                                            register                          */
             uint32_t RCC_OFSET_DONT_USE_5;     
    volatile uint32_t AHB1SMENR;        /**< ahb1 peripheral clocks enable in 
                                            sleep and stop modes register     */
    volatile uint32_t AHB2SMENR;        /**< ahb2 peripheral clocks enable in 
                                            sleep and stop modes register     */
    volatile uint32_t AHB3SMENR;        /**< ahb3 peripheral clocks enable in 
                                            sleep and stop modes register     */
             uint32_t RCC_OFFSET_DONT_USE_6;
    volatile uint32_t APB1SMENR1;       /**< apb1 peripheral clocks enable in 
                                            sleep and stop modes register 1   */
    volatile uint32_t APB1SMENR2;       /**< apb1 peripheral clocks enable in 
                                            sleep and stop modes register 2   */
    volatile uint32_t APB2SMENR;        /**< apb2 peripheral clocks enable in 
                                            sleep and stop modes register     */
             uint32_t RCC_OFFSET_DONT_USE_7;  
    volatile uint32_t CCIPR;            /**< peripherals independent clock 
                                            configure register                */
             uint32_t RCC_OFFSET_DONT_USE_8;  
    volatile uint32_t BDCR;             ///< backup domain control register      
    volatile uint32_t CSR;              ///< control/status register        
    volatile uint32_t CRRCR;            ///< clock revovery rc register
    volatile uint32_t CCIPR2;           /**< peripherals idenpentdent clock 
                                            configure register                */
} rcc_struct_t;

#define RCC (rcc_struct_t*)  0x40021000 ///< RCC base address struct  


/******************* Typedefs *******************/

typedef enum
{
    SYSCLOCK_MSI_SOURCE     = 0,        ///< MSI as sysclock source
    SYSCLOCK_HSI16_SOURCE   = 1,        ///< 16MHz HSI as sysclock source
    SYSCLOCK_HSE_SOURCE     = 2,        ///< HSE as sysclock source
    SYSCLOCK_PLL_SOURCE     = 3         ///< main PLL as sysclock source

} system_clock_source_t;

typedef enum
{
    AHB_NOT_DIVIDED     = 0b0000,       /**< AHB dividition value 1 
                                            (no dividiton)                    */
    AHB_DIVIDED_BY_2    = 0b1000,       ///< AHB dividition value 2
    AHB_DIVIDED_BY_4    = 0b1001,       ///< AHB dividition value 4
    AHB_DIVIDED_BY_8    = 0b1010,       ///< AHB dividition value 8
    AHB_DIVIDED_BY_16   = 0b1011,       ///< AHB dividition value 16
    AHB_DIVIDED_BY_64   = 0b1100,       ///< AHB dividition value 64
    AHB_DIVIDED_BY_128  = 0b1101,       ///< AHB dividition value 128
    AHB_DIVIDED_BY_256  = 0b1110,       ///< AHB dividition value 256
    AHB_DIVIDED_BY_512  = 0b1111        ///< AHB dividition value 512

} ahb_prescaler_values_t;

typedef enum
{
    APB1_NOT_DIVIDED    = 0b000,        /**< APB1 dividition value 1 
                                            (no dividiton)                    */
    APB1_DIVIDED_BY_2   = 0b100,        ///< APB1 dividition value 2
    APB1_DIVIDED_BY_4   = 0b101,        ///< APB1 dividition value 4
    APB1_DIVIDED_BY_8   = 0b110,        ///< APB1 dividition value 8
    APB1_DIVIDED_BY_16  = 0b111         ///< APB1 dividition value 16

} apb1_prescaler_value_t;

typedef enum
{
    APB2_NOT_DIVIDED    = 0b000,        /**< APB2 dividition value 1 
                                            (no dividiton)                    */
    APB2_DIVIDED_BY_2   = 0b100,        ///< APB2 dividition value 2
    APB2_DIVIDED_BY_4   = 0b101,        ///< APB2 dividition value 4 
    APB2_DIVIDED_BY_8   = 0b110,        ///< APB2 dividition value 8
    APB2_DIVIDED_BY_16  = 0b111         ///< APB2 dividition value 16

} apb2_prescaler_value_t;

typedef enum
{
    PLL_SOURCE_NO_SOURCE    = 0b00,     ///< no source for main PLL
    PLL_SOURCE_MSI          = 0b01,     ///< MSI as source for main PLL
    PLL_SOURCE_HSI16        = 0b10,     ///< 16MHz HSI as source for main PLL
    PLL_SOURCE_HSE          = 0b11      ///< HSE as source for main PLL

} pll_source_t;

typedef enum 
{
    PLLM_DIVIDER_NO_DIVIDER = 0b000,    /**< main PLL PLLM dividition value 1   
                                            (no dividition)                   */
    PLLM_DIVIDER_2          = 0b001,    ///< main PLL PLLM dividition value 2 
    PLLM_DIVIDER_3          = 0b010,    ///< main PLL PLLM dividition value 3
    PLLM_DIVIDER_4          = 0b011,    ///< main PLL PLLM dividition value 4
    PLLM_DIVIDER_5          = 0b100,    ///< main PLL PLLM dividition value 5
    PLLM_DIVIDER_6          = 0b101,    ///< main PLL PLLM dividition value 6
    PLLM_DIVIDER_7          = 0b110,    ///< main PLL PLLM dividition value 7
    PLLM_DIVIDER_8          = 0b111     ///< main PLL PLLM dividition value 8

} pllm_divider_value_t;

typedef enum
{
    PLLN_DIVIDER_8   = 8,               ///< main PLL PLLN dividition value 8
    PLLN_DIVIDER_9   = 9,               ///< main PLL PLLN dividition value 9
    PLLN_DIVIDER_10  = 10,              ///< main PLL PLLN dividition value 10
    PLLN_DIVIDER_11  = 11,              ///< main PLL PLLN dividition value 11
    PLLN_DIVIDER_12  = 12,              ///< main PLL PLLN dividition value 12
    PLLN_DIVIDER_13  = 13,              ///< main PLL PLLN dividition value 13
    PLLN_DIVIDER_14  = 14,              ///< main PLL PLLN dividition value 14
    PLLN_DIVIDER_15  = 15,              ///< main PLL PLLN dividition value 15
    PLLN_DIVIDER_16  = 16,              ///< main PLL PLLN dividition value 16
    PLLN_DIVIDER_17  = 17,              ///< main PLL PLLN dividition value 17
    PLLN_DIVIDER_18  = 18,              ///< main PLL PLLN dividition value 18
    PLLN_DIVIDER_19  = 19,              ///< main PLL PLLN dividition value 19
    PLLN_DIVIDER_20  = 20,              ///< main PLL PLLN dividition value 20
    PLLN_DIVIDER_21  = 21,              ///< main PLL PLLN dividition value 21
    PLLN_DIVIDER_22  = 22,              ///< main PLL PLLN dividition value 22
    PLLN_DIVIDER_23  = 23,              ///< main PLL PLLN dividition value 23
    PLLN_DIVIDER_24  = 24,              ///< main PLL PLLN dividition value 24
    PLLN_DIVIDER_25  = 25,              ///< main PLL PLLN dividition value 25
    PLLN_DIVIDER_26  = 26,              ///< main PLL PLLN dividition value 26
    PLLN_DIVIDER_27  = 27,              ///< main PLL PLLN dividition value 27
    PLLN_DIVIDER_28  = 28,              ///< main PLL PLLN dividition value 28
    PLLN_DIVIDER_29  = 29,              ///< main PLL PLLN dividition value 29
    PLLN_DIVIDER_30  = 30,              ///< main PLL PLLN dividition value 30
    PLLN_DIVIDER_31  = 31,              ///< main PLL PLLN dividition value 31
    PLLN_DIVIDER_32  = 32,              ///< main PLL PLLN dividition value 32
    PLLN_DIVIDER_33  = 33,              ///< main PLL PLLN dividition value 33
    PLLN_DIVIDER_34  = 34,              ///< main PLL PLLN dividition value 34
    PLLN_DIVIDER_35  = 35,              ///< main PLL PLLN dividition value 35
    PLLN_DIVIDER_36  = 36,              ///< main PLL PLLN dividition value 36
    PLLN_DIVIDER_37  = 37,              ///< main PLL PLLN dividition value 37
    PLLN_DIVIDER_38  = 38,              ///< main PLL PLLN dividition value 38
    PLLN_DIVIDER_39  = 39,              ///< main PLL PLLN dividition value 39
    PLLN_DIVIDER_40  = 40,              ///< main PLL PLLN dividition value 40
    PLLN_DIVIDER_41  = 41,              ///< main PLL PLLN dividition value 41
    PLLN_DIVIDER_42  = 42,              ///< main PLL PLLN dividition value 42
    PLLN_DIVIDER_43  = 43,              ///< main PLL PLLN dividition value 43
    PLLN_DIVIDER_44  = 44,              ///< main PLL PLLN dividition value 44
    PLLN_DIVIDER_45  = 45,              ///< main PLL PLLN dividition value 45
    PLLN_DIVIDER_46  = 46,              ///< main PLL PLLN dividition value 46
    PLLN_DIVIDER_47  = 47,              ///< main PLL PLLN dividition value 47
    PLLN_DIVIDER_48  = 48,              ///< main PLL PLLN dividition value 48
    PLLN_DIVIDER_49  = 49,              ///< main PLL PLLN dividition value 49
    PLLN_DIVIDER_50  = 50,              ///< main PLL PLLN dividition value 50
    PLLN_DIVIDER_51  = 51,              ///< main PLL PLLN dividition value 51
    PLLN_DIVIDER_52  = 52,              ///< main PLL PLLN dividition value 52
    PLLN_DIVIDER_53  = 53,              ///< main PLL PLLN dividition value 53
    PLLN_DIVIDER_54  = 54,              ///< main PLL PLLN dividition value 54
    PLLN_DIVIDER_55  = 55,              ///< main PLL PLLN dividition value 55
    PLLN_DIVIDER_56  = 56,              ///< main PLL PLLN dividition value 56
    PLLN_DIVIDER_57  = 57,              ///< main PLL PLLN dividition value 57
    PLLN_DIVIDER_58  = 58,              ///< main PLL PLLN dividition value 58
    PLLN_DIVIDER_59  = 59,              ///< main PLL PLLN dividition value 59
    PLLN_DIVIDER_60  = 60,              ///< main PLL PLLN dividition value 60
    PLLN_DIVIDER_61  = 61,              ///< main PLL PLLN dividition value 61
    PLLN_DIVIDER_62  = 62,              ///< main PLL PLLN dividition value 62
    PLLN_DIVIDER_63  = 63,              ///< main PLL PLLN dividition value 63
    PLLN_DIVIDER_64  = 64,              ///< main PLL PLLN dividition value 64
    PLLN_DIVIDER_65  = 65,              ///< main PLL PLLN dividition value 65
    PLLN_DIVIDER_66  = 66,              ///< main PLL PLLN dividition value 66
    PLLN_DIVIDER_67  = 67,              ///< main PLL PLLN dividition value 67
    PLLN_DIVIDER_68  = 86,              ///< main PLL PLLN dividition value 68
    PLLN_DIVIDER_69  = 69,              ///< main PLL PLLN dividition value 69
    PLLN_DIVIDER_70  = 70,              ///< main PLL PLLN dividition value 70
    PLLN_DIVIDER_71  = 71,              ///< main PLL PLLN dividition value 71
    PLLN_DIVIDER_72  = 72,              ///< main PLL PLLN dividition value 72
    PLLN_DIVIDER_73  = 73,              ///< main PLL PLLN dividition value 73
    PLLN_DIVIDER_74  = 74,              ///< main PLL PLLN dividition value 74
    PLLN_DIVIDER_75  = 75,              ///< main PLL PLLN dividition value 75
    PLLN_DIVIDER_76  = 76,              ///< main PLL PLLN dividition value 76
    PLLN_DIVIDER_77  = 77,              ///< main PLL PLLN dividition value 77
    PLLN_DIVIDER_78  = 78,              ///< main PLL PLLN dividition value 78
    PLLN_DIVIDER_79  = 79,              ///< main PLL PLLN dividition value 79
    PLLN_DIVIDER_80  = 80,              ///< main PLL PLLN dividition value 80
    PLLN_DIVIDER_81  = 81,              ///< main PLL PLLN dividition value 81
    PLLN_DIVIDER_82  = 82,              ///< main PLL PLLN dividition value 82
    PLLN_DIVIDER_83  = 83,              ///< main PLL PLLN dividition value 83
    PLLN_DIVIDER_84  = 84,              ///< main PLL PLLN dividition value 84
    PLLN_DIVIDER_85  = 85,              ///< main PLL PLLN dividition value 85
    PLLN_DIVIDER_86  = 86               ///< main PLL PLLN dividition value 86

} plln_multiplier_value_t;

typedef enum
{
    PLLR_DIVIDER_2  = 0b00,             ///< main PLL PLLR dividition value 2 
    PLLR_DIVIDER_4  = 0b01,             ///< main PLL PLLR dividition value 4
    PLLR_DIVIDER_6  = 0b10,             ///< main PLL PLLR dividition value 6
    PLLR_DIVIDER_8  = 0b11              ///< main PLL PLLR dividition value 8

} pllr_divider_value_t;

typedef enum
{
    GPIO_A_ENABLE_PORT = 0,             ///< GPIO Enable Selection: Port A
    GPIO_B_ENABLE_PORT = 1,             ///< GPIO Enable Selection: Port B
    GPIO_C_ENABLE_PORT = 2,             ///< GPIO Enable Selection: Port C
    GPIO_D_ENABLE_PORT = 3,             ///< GPIO Enable Selection: Port D
    GPIO_E_ENABLE_PORT = 4,             ///< GPIO Enable Selection: Port E
    GPIO_H_ENABLE_PORT = 7              ///< GPIO Enable Selection: Port H

} gpio_enable_port_t;


/******************* Values for functions *******************/

//Set System Clock Source
#define SET_SYSTEM_CLOCK_SOURCE_REGISTER_ADDR &(RCC->CFGR)
#define SET_SYSTEM_CLOCK_SOURCE_VALUE_LENGTH 2
#define SET_SYSTEM_CLOCK_SOURCE_REGISTER_OFFSET 0
#define SET_SYSTEM_CLOCK_SOURCE_STATUS_REGISTER RCC->CFGR
#define SET_SYSTEM_CLOCK_SOURCE_STATUS_REGISTER_OFFSET 0

//Toggle MSI
#define TOGGLE_MSI_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_MSI_VALUE_ON 1
#define TOGGLE_MSI_VALUE_OFF 0
#define TOGGLE_MSI_VALUE_LENGTH 1
#define TOGGLE_MSI_REGISTER_OFFSET 0
#define TOGGLE_MSI_STATUS_REGISTER RCC->CR
#define TOGGLE_MSI_STATUS_REGISTER_OFFSET 1

//Toggle HSI
#define TOGGLE_HSI_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_HSI_VALUE_ON 1
#define TOGGLE_HSI_VALUE_OFF 0
#define TOGGLE_HSI_VALUE_LENGTH 1
#define TOGGLE_HSI_REGISTER_OFFSET 8
#define TOGGLE_HSI_STATUS_REGISTER RCC->CR
#define TOGGLE_HSI_STATUS_REGISTER_OFFSET 10

//Toggle HSE
#define TOGGLE_HSE_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_HSE_VALUE_ON 1
#define TOGGLE_HSE_VALUE_OFF 0
#define TOGGLE_HSE_VALUE_LENGTH 1
#define TOGGLE_HSE_REGISTER_OFFSET 16
#define TOGGLE_HSE_STATUS_REGISTER RCC->CR
#define TOGGLE_HSE_STATUS_REGISTER_OFFSET 17

//Toggle HSE Bypass
#define TOGGLE_HSE_BYPASS_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_HSE_BYPASS_VALUE_ON 1
#define TOGGLE_HSE_BYPASS_VALUE_OFF 0
#define TOGGLE_HSE_BYPASS_VALUE_LENGTH 1
#define TOGGLE_HSE_BYPASS_REGISTER_OFFSET 18

//Toggle PLL
#define TOGGLE_PLL_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_PLL_VALUE_ON 1
#define TOGGLE_PLL_VALUE_OFF 0
#define TOGGLE_PLL_VALUE_LENGTH 1
#define TOGGLE_PLL_REGISTER_OFFSET 24
#define TOGGLE_PLL_STATUS_REGISTER RCC->CR
#define TOGGLE_PLL_STATUS_REGISTER_OFFSET 25

//Set AHB Prescaler
#define SET_AHB_PRESCALER_REGISTER_ADDR &(RCC->CFGR)
#define SET_AHB_PRESCALER_VALUE_LENGTH 4
#define SET_AHB_PRESCALER_REGISTER_OFFSET 4

//Set APB1 Prescaler
#define SET_APB1_PRESCALER_REGISTER_ADDR &(RCC->CFGR)
#define SET_APB1_PRESCALER_VALUE_LENGTH 3
#define SET_APB1_PRESCALER_REGISTER_OFFSET 8

//Set APB2 Prescaler
#define SET_APB2_PRESCALER_REGISTER_ADDR &(RCC->CFGR)
#define SET_APB2_PRESCALER_VALUE_LENGTH 3
#define SET_APB2_PRESCALER_REGISTER_OFFSET 11

//Toggle PLL Output
#define TOGGLE_PLL_OUTPUT_REGISTER_ADDR &(RCC->PLLCFGR)
#define TOGGLE_PLL_OUTPUT_VALUE_ON 1
#define TOGGLE_PLL_OUTPUT_VALUE_OFF 0
#define TOGGLE_PLL_OUTPUT_VALUE_LENGTH 1
#define TOGGLE_PLL_OUTPUT_REGISTER_OFFSET 24

//Set PLL Source
#define SET_PLL_SOURCE_REGISTER_ADDR &(RCC->PLLCFGR)
#define SET_PLL_SOURCE_VALUE_LENGTH 2
#define SET_PLL_SOURCE_REGISTER_OFFSET 0

//Set PLLM
#define SET_PLLM_REGISTER_ADDR &(RCC->PLLCFGR)
#define SET_PLLM_VALUE_LENGTH 3
#define SET_PLLM_REGISTER_OFFSET 4

//Set PLLN 
#define SET_PLLN_REGISTER_ADDR &(RCC->PLLCFGR)
#define SET_PLLN_VALUE_LENGTH 7
#define SET_PLLN_REGISTER_OFFSET 8

//Set PLLR 
#define SET_PLLR_REGISTER_ADDR &(RCC->PLLCFGR)
#define SET_PLLR_VALUE_LENGTH 2
#define SET_PLLR_REGISTER_OFFSET 25

//Toggle Power Interface Clock
#define TOGGLE_POWER_INTERFACE_CLOCK_REGISTER_ADDR &(RCC->APB1ENR1)
#define TOGGLE_POWER_INTERFACE_CLOCK_VALUE_ON 1
#define TOGGLE_POWER_INTERFACE_CLOCK_VALUE_OFF 0
#define TOGGLE_POWER_INTERFACE_CLOCK_VALUE_LENGTH 1
#define TOGGLE_POWER_INTERFACE_CLOCK_REGISTER_OFFSET 28

//Toggle GPIO Clock
#define TOGGLE_GPIO_CLOCK_REGISTER_ADDR &(RCC->AHB2ENR)
#define TOGGLE_GPIO_CLOCK_VALUE_ON 1
#define TOGGLE_GPIO_CLOCK_VALUE_OFF 0
#define TOGGLE_GPIO_CLOCK_VALUE_LENGTH 1

#endif /* STM32L496ZG_RCC_H */

/* END OF FILE */
