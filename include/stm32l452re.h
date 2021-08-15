/**
 * @file stm32l452re.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief File contains all the registers and typedef enums etc. for stm32l452re
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef STM32L452RE_H
#define STM32L452RE_H

#include "stdint.h"

// Flash Registers and Values
// --------------------------

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

// GPIO Registers and Values
// --------------------------

#define SET_PIN_MODE_REGISTER_ADDR &(port->MODER)  
#define SET_PIN_SPEED_REGISTER_ADDR &(port->OSPEEDR)
#define SET_PULLUP_PULLDOWN_REGISTER_ADDR &(port->PUPDR)
#define TOGGLE_PIN_OUTPUT_REGISTER_ADDR &(port->ODR)

// POWER Registers and Values
// --------------------------

//Set Voltage Regulator Scale
#define SET_VOLTAGE_REGULATOR_SCALE_REGISTER_ADDR &(PWR->CR1)
#define SET_VOLTAGE_REGULATOR_SCALE_VALUE_LENGTH 2
#define SET_VOLTAGE_REGULATOR_SCALE_REGISTER_OFFSET 9





// RCC Type Defs

typedef enum
{
    SYSCLOCK_MSI_SOURCE     = 0,                    ///< MSI as sysclock source
    SYSCLOCK_HSI16_SOURCE   = 1,                    ///< 16MHz HSI as sysclock source
    SYSCLOCK_HSE_SOURCE     = 2,                    ///< HSE as sysclock source
    SYSCLOCK_PLL_SOURCE     = 3                     ///< main PLL as sysclock source
} system_clock_source_t;

typedef enum
{
    AHB_NOT_DIVIDED     = 0b0000,                   ///< AHB dividition value 1 (no dividiton)
    AHB_DIVIDED_BY_2    = 0b1000,                   ///< AHB dividition value 2
    AHB_DIVIDED_BY_4    = 0b1001,                   ///< AHB dividition value 4
    AHB_DIVIDED_BY_8    = 0b1010,                   ///< AHB dividition value 8
    AHB_DIVIDED_BY_16   = 0b1011,                   ///< AHB dividition value 16
    AHB_DIVIDED_BY_64   = 0b1100,                   ///< AHB dividition value 64
    AHB_DIVIDED_BY_128  = 0b1101,                   ///< AHB dividition value 128
    AHB_DIVIDED_BY_256  = 0b1110,                   ///< AHB dividition value 256
    AHB_DIVIDED_BY_512  = 0b1111                    ///< AHB dividition value 512
} ahb_prescaler_values_t;

typedef enum
{
    APB1_NOT_DIVIDED    = 0b000,                    ///< APB1 dividition value 1 (no dividiton) 
    APB1_DIVIDED_BY_2   = 0b100,                    ///< APB1 dividition value 2
    APB1_DIVIDED_BY_4   = 0b101,                    ///< APB1 dividition value 4
    APB1_DIVIDED_BY_8   = 0b110,                    ///< APB1 dividition value 8
    APB1_DIVIDED_BY_16  = 0b111                     ///< APB1 dividition value 16
} apb1_prescaler_value_t;

typedef enum
{
    APB2_NOT_DIVIDED    = 0b000,                    ///< APB2 dividition value 1 (no dividiton)
    APB2_DIVIDED_BY_2   = 0b100,                    ///< APB2 dividition value 2
    APB2_DIVIDED_BY_4   = 0b101,                    ///< APB2 dividition value 4 
    APB2_DIVIDED_BY_8   = 0b110,                    ///< APB2 dividition value 8
    APB2_DIVIDED_BY_16  = 0b111                     ///< APB2 dividition value 16
} apb2_prescaler_value_t;

typedef enum
{
    PLL_SOURCE_NO_SOURCE    = 0b00,                 ///< no source for main PLL
    PLL_SOURCE_MSI          = 0b01,                 ///< MSI as source for main PLL
    PLL_SOURCE_HSI16        = 0b10,                 ///< 16MHz HSI as source for main PLL
    PLL_SOURCE_HSE          = 0b11                  ///< HSE as source for main PLL
} pll_source_t;

typedef enum 
{
    PLLM_DIVIDER_NO_DIVIDER = 0b000,                ///< main PLL PLLM dividition value 1 (no dividition)
    PLLM_DIVIDER_2          = 0b001,                ///< main PLL PLLM dividition value 2 
    PLLM_DIVIDER_3          = 0b010,                ///< main PLL PLLM dividition value 3
    PLLM_DIVIDER_4          = 0b011,                ///< main PLL PLLM dividition value 4
    PLLM_DIVIDER_5          = 0b100,                ///< main PLL PLLM dividition value 5
    PLLM_DIVIDER_6          = 0b101,                ///< main PLL PLLM dividition value 6
    PLLM_DIVIDER_7          = 0b110,                ///< main PLL PLLM dividition value 7
    PLLM_DIVIDER_8          = 0b111                 ///< main PLL PLLM dividition value 8
} pllm_divider_value_t;

typedef enum
{
    PLLN_DIVIDER_8   = 8,                           ///< main PLL PLLN dividition value 8
    PLLN_DIVIDER_9   = 9,                           ///< main PLL PLLN dividition value 9
    PLLN_DIVIDER_10  = 10,                          ///< main PLL PLLN dividition value 10
    PLLN_DIVIDER_11  = 11,                          ///< main PLL PLLN dividition value 11
    PLLN_DIVIDER_12  = 12,                          ///< main PLL PLLN dividition value 12
    PLLN_DIVIDER_13  = 13,                          ///< main PLL PLLN dividition value 13
    PLLN_DIVIDER_14  = 14,                          ///< main PLL PLLN dividition value 14
    PLLN_DIVIDER_15  = 15,                          ///< main PLL PLLN dividition value 15
    PLLN_DIVIDER_16  = 16,                          ///< main PLL PLLN dividition value 16
    PLLN_DIVIDER_17  = 17,                          ///< main PLL PLLN dividition value 17
    PLLN_DIVIDER_18  = 18,                          ///< main PLL PLLN dividition value 18
    PLLN_DIVIDER_19  = 19,                          ///< main PLL PLLN dividition value 19
    PLLN_DIVIDER_20  = 20,                          ///< main PLL PLLN dividition value 20
    PLLN_DIVIDER_21  = 21,                          ///< main PLL PLLN dividition value 21
    PLLN_DIVIDER_22  = 22,                          ///< main PLL PLLN dividition value 22
    PLLN_DIVIDER_23  = 23,                          ///< main PLL PLLN dividition value 23
    PLLN_DIVIDER_24  = 24,                          ///< main PLL PLLN dividition value 24
    PLLN_DIVIDER_25  = 25,                          ///< main PLL PLLN dividition value 25
    PLLN_DIVIDER_26  = 26,                          ///< main PLL PLLN dividition value 26
    PLLN_DIVIDER_27  = 27,                          ///< main PLL PLLN dividition value 27
    PLLN_DIVIDER_28  = 28,                          ///< main PLL PLLN dividition value 28
    PLLN_DIVIDER_29  = 29,                          ///< main PLL PLLN dividition value 29
    PLLN_DIVIDER_30  = 30,                          ///< main PLL PLLN dividition value 30
    PLLN_DIVIDER_31  = 31,                          ///< main PLL PLLN dividition value 31
    PLLN_DIVIDER_32  = 32,                          ///< main PLL PLLN dividition value 32
    PLLN_DIVIDER_33  = 33,                          ///< main PLL PLLN dividition value 33
    PLLN_DIVIDER_34  = 34,                          ///< main PLL PLLN dividition value 34
    PLLN_DIVIDER_35  = 35,                          ///< main PLL PLLN dividition value 35
    PLLN_DIVIDER_36  = 36,                          ///< main PLL PLLN dividition value 36
    PLLN_DIVIDER_37  = 37,                          ///< main PLL PLLN dividition value 37
    PLLN_DIVIDER_38  = 38,                          ///< main PLL PLLN dividition value 38
    PLLN_DIVIDER_39  = 39,                          ///< main PLL PLLN dividition value 39
    PLLN_DIVIDER_40  = 40,                          ///< main PLL PLLN dividition value 40
    PLLN_DIVIDER_41  = 41,                          ///< main PLL PLLN dividition value 41
    PLLN_DIVIDER_42  = 42,                          ///< main PLL PLLN dividition value 42
    PLLN_DIVIDER_43  = 43,                          ///< main PLL PLLN dividition value 43
    PLLN_DIVIDER_44  = 44,                          ///< main PLL PLLN dividition value 44
    PLLN_DIVIDER_45  = 45,                          ///< main PLL PLLN dividition value 45
    PLLN_DIVIDER_46  = 46,                          ///< main PLL PLLN dividition value 46
    PLLN_DIVIDER_47  = 47,                          ///< main PLL PLLN dividition value 47
    PLLN_DIVIDER_48  = 48,                          ///< main PLL PLLN dividition value 48
    PLLN_DIVIDER_49  = 49,                          ///< main PLL PLLN dividition value 49
    PLLN_DIVIDER_50  = 50,                          ///< main PLL PLLN dividition value 50
    PLLN_DIVIDER_51  = 51,                          ///< main PLL PLLN dividition value 51
    PLLN_DIVIDER_52  = 52,                          ///< main PLL PLLN dividition value 52
    PLLN_DIVIDER_53  = 53,                          ///< main PLL PLLN dividition value 53
    PLLN_DIVIDER_54  = 54,                          ///< main PLL PLLN dividition value 54
    PLLN_DIVIDER_55  = 55,                          ///< main PLL PLLN dividition value 55
    PLLN_DIVIDER_56  = 56,                          ///< main PLL PLLN dividition value 56
    PLLN_DIVIDER_57  = 57,                          ///< main PLL PLLN dividition value 57
    PLLN_DIVIDER_58  = 58,                          ///< main PLL PLLN dividition value 58
    PLLN_DIVIDER_59  = 59,                          ///< main PLL PLLN dividition value 59
    PLLN_DIVIDER_60  = 60,                          ///< main PLL PLLN dividition value 60
    PLLN_DIVIDER_61  = 61,                          ///< main PLL PLLN dividition value 61
    PLLN_DIVIDER_62  = 62,                          ///< main PLL PLLN dividition value 62
    PLLN_DIVIDER_63  = 63,                          ///< main PLL PLLN dividition value 63
    PLLN_DIVIDER_64  = 64,                          ///< main PLL PLLN dividition value 64
    PLLN_DIVIDER_65  = 65,                          ///< main PLL PLLN dividition value 65
    PLLN_DIVIDER_66  = 66,                          ///< main PLL PLLN dividition value 66
    PLLN_DIVIDER_67  = 67,                          ///< main PLL PLLN dividition value 67
    PLLN_DIVIDER_68  = 86,                          ///< main PLL PLLN dividition value 68
    PLLN_DIVIDER_69  = 69,                          ///< main PLL PLLN dividition value 69
    PLLN_DIVIDER_70  = 70,                          ///< main PLL PLLN dividition value 70
    PLLN_DIVIDER_71  = 71,                          ///< main PLL PLLN dividition value 71
    PLLN_DIVIDER_72  = 72,                          ///< main PLL PLLN dividition value 72
    PLLN_DIVIDER_73  = 73,                          ///< main PLL PLLN dividition value 73
    PLLN_DIVIDER_74  = 74,                          ///< main PLL PLLN dividition value 74
    PLLN_DIVIDER_75  = 75,                          ///< main PLL PLLN dividition value 75
    PLLN_DIVIDER_76  = 76,                          ///< main PLL PLLN dividition value 76
    PLLN_DIVIDER_77  = 77,                          ///< main PLL PLLN dividition value 77
    PLLN_DIVIDER_78  = 78,                          ///< main PLL PLLN dividition value 78
    PLLN_DIVIDER_79  = 79,                          ///< main PLL PLLN dividition value 79
    PLLN_DIVIDER_80  = 80,                          ///< main PLL PLLN dividition value 80
    PLLN_DIVIDER_81  = 81,                          ///< main PLL PLLN dividition value 81
    PLLN_DIVIDER_82  = 82,                          ///< main PLL PLLN dividition value 82
    PLLN_DIVIDER_83  = 83,                          ///< main PLL PLLN dividition value 83
    PLLN_DIVIDER_84  = 84,                          ///< main PLL PLLN dividition value 84
    PLLN_DIVIDER_85  = 85,                          ///< main PLL PLLN dividition value 85
    PLLN_DIVIDER_86  = 86                           ///< main PLL PLLN dividition value 86
} plln_multiplier_value_t;

typedef enum
{
    PLLR_DIVIDER_2  = 0b00,                         ///< main PLL PLLR dividition value 2 
    PLLR_DIVIDER_4  = 0b01,                         ///< main PLL PLLR dividition value 4
    PLLR_DIVIDER_6  = 0b10,                         ///< main PLL PLLR dividition value 6
    PLLR_DIVIDER_8  = 0b11                          ///< main PLL PLLR dividition value 8
} pllr_divider_value_t;

typedef enum
{
    GPIO_A_ENABLE_PORT = 0,                         ///< GPIO Enable Selection: Port A
    GPIO_B_ENABLE_PORT = 1,                         ///< GPIO Enable Selection: Port B
    GPIO_C_ENABLE_PORT = 2,                         ///< GPIO Enable Selection: Port C
    GPIO_D_ENABLE_PORT = 3,                         ///< GPIO Enable Selection: Port D
    GPIO_E_ENABLE_PORT = 4,                         ///< GPIO Enable Selection: Port E
    GPIO_H_ENABLE_PORT = 7                          ///< GPIO Enable Selection: Port H
} gpio_enable_port_t;

// Power Typedefs
typedef enum
{
    VOLTAGE_SCALE_1 = 0b01,                         ///< voltageregulator scale 1
    VOLTAGE_SCALE_2 = 0b10                          ///< voltageregulator scale 2
} volate_regulator_scale_t;

// Flash Typedefs
typedef enum
{
    FLASH_LATENCY_0_WAIT_STATES = 0b000,            ///< flash latency 0WS [1 CPU Cylce]: V_Core Range 1: <= 16MHz HCLK, V_Core Range 2: <= 6Mhz HCLK
    FLASH_LATENCY_1_WAIT_STATES = 0b001,            ///< flash latency 1WS [2 CPU Cylce]: V_Core Range 1: <= 32MHz HCLK, V_Core Range 2: <= 12Mhz HCLK
    FLASH_LATENCY_2_WAIT_STATES = 0b010,            ///< flash latency 2WS [3 CPU Cylce]: V_Core Range 1: <= 48MHz HCLK, V_Core Range 2: <= 18Mhz HCLK
    FLASH_LATENCY_3_WAIT_STATES = 0b011,            ///< flash latency 3WS [4 CPU Cylce]: V_Core Range 1: <= 64MHz HCLK, V_Core Range 2: <= 26Mhz HCLK
    FLASH_LATENCY_4_WAIT_STATES = 0b100,            ///< flash latency 4WS [5 CPU Cylce]: V_Core Range 1: <= 80MHz HCLK, V_Core Range 2: <= 26Mhz HCLK
} flash_latency_value_t;

//GPIO Typedefs
typedef enum
{
    GPIO_INPUT_MODE              = 0,               ///< GPIO to input mode
    GPIO_OUTPUT_MODE             = 1,               ///< GPIO to output mode
    GPIO_ALTERNATE_FUNCTION_MODE = 2,               ///< GPIO to alternate function mode
    GPIO_ANALOG_MODE             = 3                ///< GPIO to analog function mode
} gpio_pin_mode_t;

typedef enum
{
    GPIO_LOW_SPEED       = 0,                       ///< GPIO output to low speed (TODO: add max frequence)
    GPIO_MEDIUM_SPEED    = 1,                       ///< GPIO output to medium speed (TODO: add max frequence)
    GPIO_HIGH_SPEED      = 2,                       ///< GPIO output to high speed (TODO: add max frequence)
    GPIO_VERY_HIGH_SPEED = 3                        ///< GPIO output to very high speed (TODO: add max frequence)
} gpio_pin_speed_t;

typedef enum
{
    NO_PULLUP_NO_PULLDOWN   = 0, 	                ///< GPIO input to no internal pullup and no internal pulldown mode
    PULLUP                  = 1, 	                ///< GPIO input to internal pullup mode
    PULLDOWN                = 2  	                ///< GPIO input to internal pulldown mode
} gpio_pullup_pulldown_t;

// Register Structs
typedef struct
{
    volatile uint32_t CR;                           ///< clock control register
    volatile uint32_t ICSCR;                        ///< internal clock source calibration register
    volatile uint32_t CFGR;                         ///< clock configuration register   
    volatile uint32_t PLLCFGR;                      ///< pll configuration register
    volatile uint32_t PLLSAI1CFGR;                  ///< pllsai1 configuration register
             uint32_t RCC_OFFSET_DONT_USE_0; 
    volatile uint32_t CIER;                         ///< clock interrupt enable register       
    volatile uint32_t CIFR;                         ///< clock interrupt flag register
    volatile uint32_t CICR;                         ///< clock interrupt clear register
             uint32_t RCC_OFFSET_DONT_USE_1;  
    volatile uint32_t AHB1RSTR;                     ///< ahb1 peripheral reset register
    volatile uint32_t AHB2RSTR;                     ///< ahb2 peripheral reset register
    volatile uint32_t AHB3RSTR;                     ///< ahb3 peripheral reset register   
             uint32_t RCC_OFFSET_DONT_USE_2;  
    volatile uint32_t APB1RSTR1;                    ///< apb1 peripheral reset register 1 
    volatile uint32_t APB1RSTR2;                    ///< apb1 peripheral reset register 2 
    volatile uint32_t APB2RSTR;                     ///< apb2 peripheral reset register   
             uint32_t RCC_OFFSET_DONT_USE_3;  
    volatile uint32_t AHB1ENR;                      ///< ahb1 peripheral clock enable register    
    volatile uint32_t AHB2ENR;                      ///< ahb2 peripheral clock enable register   
    volatile uint32_t AHB3ENR;                      ///< ahb3 peripheral clock enable register   
             uint32_t RCC_OFFSET_DONT_USE_4;  
    volatile uint32_t APB1ENR1;                     ///< apb1 peripheral clock enable register 1  
    volatile uint32_t APB1ENR2;                     ///< apb1 peripheral clock enable register 2  
    volatile uint32_t APB2ENR;                      ///< apb2 peripheral clock enable register
             uint32_t RCC_OFSET_DONT_USE_5;  
    volatile uint32_t AHB1SMENR;                    ///< ahb1 peripheral clocks enable in sleep and stop modes register
    volatile uint32_t AHB2SMENR;                    ///< ahb2 peripheral clocks enable in sleep and stop modes register 
    volatile uint32_t AHB3SMENR;                    ///< ahb3 peripheral clocks enable in sleep and stop modes register  
             uint32_t RCC_OFFSET_DONT_USE_6;
    volatile uint32_t APB1SMENR1;                   ///< apb1 peripheral clocks enable in sleep and stop modes register 1
    volatile uint32_t APB1SMENR2;                   ///< apb1 peripheral clocks enable in sleep and stop modes register 2
    volatile uint32_t APB2SMENR;                    ///< apb2 peripheral clocks enable in sleep and stop modes register
             uint32_t RCC_OFFSET_DONT_USE_7;  
    volatile uint32_t CCIPR;                        ///< peripherals independent clock configure register    
             uint32_t RCC_OFFSET_DONT_USE_8;  
    volatile uint32_t BDCR;                         ///< backup domain control register      
    volatile uint32_t CSR;                          ///< control/status register        
    volatile uint32_t CRRCR;                        ///< clock revovery rc register
    volatile uint32_t CCIPR2;                       ///< peripherals idenpentdent clock configure register
} rcc_struct_t;

typedef struct
{
    volatile uint32_t MODER;                        ///< GPIO port mode register
    volatile uint32_t OTYPER;                       ///< GPIO port output type register
    volatile uint32_t OSPEEDR;                      ///< GPIO port output speed register
    volatile uint32_t PUPDR;                        ///< GPIO port pull-up/pull-down register
    volatile uint32_t IDR;                          ///< GPIO port input data register
    volatile uint32_t ODR;                          ///< GPIO port output data register
    volatile uint32_t BSRR;                         ///< GPIO port bit set/reset register
    volatile uint32_t LCKR;                         ///< GPIO port configuration lock register
    volatile uint32_t AFRL;                         ///< GPIO port alternate function low register
    volatile uint32_t AFRH;                         ///< GPIO port alternate function high register
    volatile uint32_t BRR;                          ///< GPIO port bit reset register

} gpio_struct_t;

typedef struct
{
    volatile uint32_t CR1;                          ///< Power control register 1    
    volatile uint32_t CR2;                          ///< Power controk register 2
    volatile uint32_t CR3;                          ///< Power controk register 3   
    volatile uint32_t CR4;                          ///< Power controk register 4   
    volatile uint32_t SR1;                          ///< Power status register 1
    volatile uint32_t SR2;                          ///< Power status register 2   
    volatile uint32_t SCR;                          ///< Power status clear register   
             uint32_t PWR_OFFSET_DONT_USE_0; 
    volatile uint32_t PUCRA;                        ///< Power Port A pull-up control register
    volatile uint32_t PDCRA;                        ///< Power Port A pull-down control register
    volatile uint32_t PUCRB;                        ///< Power Port B pull-up control register
    volatile uint32_t PDCRB;                        ///< Power Port B pull-down control register
    volatile uint32_t PUCRC;                        ///< Power Port C pull-up control register
    volatile uint32_t PDCRC;                        ///< Power Port C pull-down control register
    volatile uint32_t PUCRD;                        ///< Power Port D pull-up control register
    volatile uint32_t PDCRD;                        ///< Power Port D pull-down control register
    volatile uint32_t PUCRE;                        ///< Power Port E pull-up control register
    volatile uint32_t PDCRE;                        ///< Power Port E pull-down control register
             uint32_t PWR_OFFSET_DONT_USE_1;
             uint32_t PWR_OFFSET_DONT_USE_2;
             uint32_t PWR_OFFSET_DONT_USE_3;
             uint32_t PWR_OFFSET_DONT_USE_4;
    volatile uint32_t PUCRH;                        ///< Power Port H pull-up control register
    volatile uint32_t PDCRH;                        ///< Power Port H pull-down control register
} pwr_struct_t;

typedef struct
{
    volatile uint32_t ACR;                          ///< Flash access conrol register      
    volatile uint32_t PDKEYR;                       ///< Flash Power-down key register  
    volatile uint32_t KEYR;                         ///< Flash key register    
    volatile uint32_t OPTKEYR;                      ///< Flash option key register
    volatile uint32_t SR;                           ///< Flash status register
    volatile uint32_t CR;                           ///< Flash control register
    volatile uint32_t ECCR;                         ///< Flash ECC register
    volatile uint32_t FLASH_OFFSET_DONT_USE_1;
    volatile uint32_t OPTR;                         ///< Flash option register
    volatile uint32_t PCROP1SR;                     ///< Flash PCROP Start address register
    volatile uint32_t PCROP1ER;                     ///< Flash PCROÜ End address register
    volatile uint32_t WRP1AR;                       ///< Flash WRP area A address register
    volatile uint32_t WRP1BR;                       ///< Flash WRP area B address register
} flash_struct_t;

typedef struct 
{
    volatile uint32_t CTRL;                         ///< SysTick control and status register
    volatile uint32_t LOAD;                         ///< SysTick reload value register
    volatile uint32_t VAL;                          ///< SysTick current value register
    volatile uint32_t CALIB;                        ///< SysTick calibration value register
} systick_struct_t;


extern rcc_struct_t*        const RCC;              ///< RCC base address struct   
extern gpio_struct_t*       const GPIOA;            ///< GPIOA base address struct 
extern gpio_struct_t*       const GPIOB;            ///< GPIOB base address struct
extern gpio_struct_t*       const GPIOC;            ///< GPIOC base address struct
extern gpio_struct_t*       const GPIOD;            ///< GPIOD base address struct
extern gpio_struct_t*       const GPIOE;            ///< GPIOE base address struct
extern gpio_struct_t*       const GPIOH;            ///< GPIOH base address struct
extern pwr_struct_t*        const PWR;              ///< PWR base address struct
extern flash_struct_t*      const FLASH;            ///< FLASH base address struct
extern systick_struct_t*    const STK;              ///< SysTick base address struct

#endif /* STM32L452RE_H */
