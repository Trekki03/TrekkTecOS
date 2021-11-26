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

#define RCC ((rcc_struct_t*) 0x40021000) ///< RCC base address struct  


/******************* Typedefs *******************/

typedef enum
{
    SYSCLOCK_MSI_SOURCE     = 0uL,      ///< MSI as sysclock source
    SYSCLOCK_HSI16_SOURCE   = 1uL,      ///< 16MHz HSI as sysclock source
    SYSCLOCK_HSE_SOURCE     = 2uL,      ///< HSE as sysclock source
    SYSCLOCK_PLL_SOURCE     = 3uL       ///< main PLL as sysclock source

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
    PLLN_DIVIDER_8   = 8uL,             ///< main PLL PLLN dividition value 8
    PLLN_DIVIDER_9   = 9uL,             ///< main PLL PLLN dividition value 9
    PLLN_DIVIDER_10  = 10uL,            ///< main PLL PLLN dividition value 10
    PLLN_DIVIDER_11  = 11uL,            ///< main PLL PLLN dividition value 11
    PLLN_DIVIDER_12  = 12uL,            ///< main PLL PLLN dividition value 12
    PLLN_DIVIDER_13  = 13uL,            ///< main PLL PLLN dividition value 13
    PLLN_DIVIDER_14  = 14uL,            ///< main PLL PLLN dividition value 14
    PLLN_DIVIDER_15  = 15uL,            ///< main PLL PLLN dividition value 15
    PLLN_DIVIDER_16  = 16uL,            ///< main PLL PLLN dividition value 16
    PLLN_DIVIDER_17  = 17uL,            ///< main PLL PLLN dividition value 17
    PLLN_DIVIDER_18  = 18uL,            ///< main PLL PLLN dividition value 18
    PLLN_DIVIDER_19  = 19uL,            ///< main PLL PLLN dividition value 19
    PLLN_DIVIDER_20  = 20uL,            ///< main PLL PLLN dividition value 20
    PLLN_DIVIDER_21  = 21uL,            ///< main PLL PLLN dividition value 21
    PLLN_DIVIDER_22  = 22uL,            ///< main PLL PLLN dividition value 22
    PLLN_DIVIDER_23  = 23uL,            ///< main PLL PLLN dividition value 23
    PLLN_DIVIDER_24  = 24uL,            ///< main PLL PLLN dividition value 24
    PLLN_DIVIDER_25  = 25uL,            ///< main PLL PLLN dividition value 25
    PLLN_DIVIDER_26  = 26uL,            ///< main PLL PLLN dividition value 26
    PLLN_DIVIDER_27  = 27uL,            ///< main PLL PLLN dividition value 27
    PLLN_DIVIDER_28  = 28uL,            ///< main PLL PLLN dividition value 28
    PLLN_DIVIDER_29  = 29uL,            ///< main PLL PLLN dividition value 29
    PLLN_DIVIDER_30  = 30uL,            ///< main PLL PLLN dividition value 30
    PLLN_DIVIDER_31  = 31uL,            ///< main PLL PLLN dividition value 31
    PLLN_DIVIDER_32  = 32uL,            ///< main PLL PLLN dividition value 32
    PLLN_DIVIDER_33  = 33uL,            ///< main PLL PLLN dividition value 33
    PLLN_DIVIDER_34  = 34uL,            ///< main PLL PLLN dividition value 34
    PLLN_DIVIDER_35  = 35uL,            ///< main PLL PLLN dividition value 35
    PLLN_DIVIDER_36  = 36uL,            ///< main PLL PLLN dividition value 36
    PLLN_DIVIDER_37  = 37uL,            ///< main PLL PLLN dividition value 37
    PLLN_DIVIDER_38  = 38uL,            ///< main PLL PLLN dividition value 38
    PLLN_DIVIDER_39  = 39uL,            ///< main PLL PLLN dividition value 39
    PLLN_DIVIDER_40  = 40uL,            ///< main PLL PLLN dividition value 40
    PLLN_DIVIDER_41  = 41uL,            ///< main PLL PLLN dividition value 41
    PLLN_DIVIDER_42  = 42uL,            ///< main PLL PLLN dividition value 42
    PLLN_DIVIDER_43  = 43uL,            ///< main PLL PLLN dividition value 43
    PLLN_DIVIDER_44  = 44uL,            ///< main PLL PLLN dividition value 44
    PLLN_DIVIDER_45  = 45uL,            ///< main PLL PLLN dividition value 45
    PLLN_DIVIDER_46  = 46uL,            ///< main PLL PLLN dividition value 46
    PLLN_DIVIDER_47  = 47uL,            ///< main PLL PLLN dividition value 47
    PLLN_DIVIDER_48  = 48uL,            ///< main PLL PLLN dividition value 48
    PLLN_DIVIDER_49  = 49uL,            ///< main PLL PLLN dividition value 49
    PLLN_DIVIDER_50  = 50uL,            ///< main PLL PLLN dividition value 50
    PLLN_DIVIDER_51  = 51uL,            ///< main PLL PLLN dividition value 51
    PLLN_DIVIDER_52  = 52uL,            ///< main PLL PLLN dividition value 52
    PLLN_DIVIDER_53  = 53uL,            ///< main PLL PLLN dividition value 53
    PLLN_DIVIDER_54  = 54uL,            ///< main PLL PLLN dividition value 54
    PLLN_DIVIDER_55  = 55uL,            ///< main PLL PLLN dividition value 55
    PLLN_DIVIDER_56  = 56uL,            ///< main PLL PLLN dividition value 56
    PLLN_DIVIDER_57  = 57uL,            ///< main PLL PLLN dividition value 57
    PLLN_DIVIDER_58  = 58uL,            ///< main PLL PLLN dividition value 58
    PLLN_DIVIDER_59  = 59uL,            ///< main PLL PLLN dividition value 59
    PLLN_DIVIDER_60  = 60uL,            ///< main PLL PLLN dividition value 60
    PLLN_DIVIDER_61  = 61uL,            ///< main PLL PLLN dividition value 61
    PLLN_DIVIDER_62  = 62uL,            ///< main PLL PLLN dividition value 62
    PLLN_DIVIDER_63  = 63uL,            ///< main PLL PLLN dividition value 63
    PLLN_DIVIDER_64  = 64uL,            ///< main PLL PLLN dividition value 64
    PLLN_DIVIDER_65  = 65uL,            ///< main PLL PLLN dividition value 65
    PLLN_DIVIDER_66  = 66uL,            ///< main PLL PLLN dividition value 66
    PLLN_DIVIDER_67  = 67uL,            ///< main PLL PLLN dividition value 67
    PLLN_DIVIDER_68  = 86uL,            ///< main PLL PLLN dividition value 68
    PLLN_DIVIDER_69  = 69uL,            ///< main PLL PLLN dividition value 69
    PLLN_DIVIDER_70  = 70uL,            ///< main PLL PLLN dividition value 70
    PLLN_DIVIDER_71  = 71uL,            ///< main PLL PLLN dividition value 71
    PLLN_DIVIDER_72  = 72uL,            ///< main PLL PLLN dividition value 72
    PLLN_DIVIDER_73  = 73uL,            ///< main PLL PLLN dividition value 73
    PLLN_DIVIDER_74  = 74uL,            ///< main PLL PLLN dividition value 74
    PLLN_DIVIDER_75  = 75uL,            ///< main PLL PLLN dividition value 75
    PLLN_DIVIDER_76  = 76uL,            ///< main PLL PLLN dividition value 76
    PLLN_DIVIDER_77  = 77uL,            ///< main PLL PLLN dividition value 77
    PLLN_DIVIDER_78  = 78uL,            ///< main PLL PLLN dividition value 78
    PLLN_DIVIDER_79  = 79uL,            ///< main PLL PLLN dividition value 79
    PLLN_DIVIDER_80  = 80uL,            ///< main PLL PLLN dividition value 80
    PLLN_DIVIDER_81  = 81uL,            ///< main PLL PLLN dividition value 81
    PLLN_DIVIDER_82  = 82uL,            ///< main PLL PLLN dividition value 82
    PLLN_DIVIDER_83  = 83uL,            ///< main PLL PLLN dividition value 83
    PLLN_DIVIDER_84  = 84uL,            ///< main PLL PLLN dividition value 84
    PLLN_DIVIDER_85  = 85uL,            ///< main PLL PLLN dividition value 85
    PLLN_DIVIDER_86  = 86uL             ///< main PLL PLLN dividition value 86

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
    GPIO_A_ENABLE_PORT = 0uL,           ///< GPIO Enable Selection: Port A
    GPIO_B_ENABLE_PORT = 1uL,           ///< GPIO Enable Selection: Port B
    GPIO_C_ENABLE_PORT = 2uL,           ///< GPIO Enable Selection: Port C
    GPIO_D_ENABLE_PORT = 3uL,           ///< GPIO Enable Selection: Port D
    GPIO_E_ENABLE_PORT = 4uL,           ///< GPIO Enable Selection: Port E
    GPIO_F_ENABLE_PORT = 5uL,           ///< GPIO Enable Selection: Port F
    GPIO_G_ENABLE_PORT = 6uL,           ///< GPIO Enable Selection: Port G
    GPIO_H_ENABLE_PORT = 7uL,           ///< GPIO Enable Selection: Port H
    GPIO_I_ENABLE_PORT = 8uL            ///< GPIO Enable Selection: Port I
		
} gpio_enable_port_t;

typedef enum
{
    DMA_1_ENABLE_BIT = 0,               ///< AHB1ENR DMA 1 enable bit
    DMA_2_ENABLE_BIT = 1                ///< AHB1ENR DMA 2 enable bit
} dma_clock_enable_bit_t;

typedef struct
{
    uint32_t* toggleRegister;           //register location of toggle bit
    uint32_t  toggleBitNumber;          //position of toggle bit in register
} usart_clock_toggle_register_bit;



/******************* Extern Varaibles ***********************/

extern uint32_t uartToggleMap[5][2];

/******************* Values for functions *******************/

//Set System Clock Source
#define SET_SYSTEM_CLOCK_SOURCE_REGISTER_ADDR &(RCC->CFGR)
#define SET_SYSTEM_CLOCK_SOURCE_VALUE_LENGTH 2uL
#define SET_SYSTEM_CLOCK_SOURCE_REGISTER_OFFSET 0uL
#define SET_SYSTEM_CLOCK_SOURCE_STATUS_REGISTER RCC->CFGR
#define SET_SYSTEM_CLOCK_SOURCE_STATUS_REGISTER_OFFSET 0uL

//Toggle MSI
#define TOGGLE_MSI_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_MSI_VALUE_ON 1uL
#define TOGGLE_MSI_VALUE_OFF 0uL
#define TOGGLE_MSI_VALUE_LENGTH 1uL
#define TOGGLE_MSI_REGISTER_OFFSET 0uL
#define TOGGLE_MSI_STATUS_REGISTER RCC->CR
#define TOGGLE_MSI_STATUS_REGISTER_OFFSET 1uL

//Toggle HSI
#define TOGGLE_HSI_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_HSI_VALUE_ON 1uL
#define TOGGLE_HSI_VALUE_OFF 0uL
#define TOGGLE_HSI_VALUE_LENGTH 1uL
#define TOGGLE_HSI_REGISTER_OFFSET 8uL
#define TOGGLE_HSI_STATUS_REGISTER RCC->CR
#define TOGGLE_HSI_STATUS_REGISTER_OFFSET 10uL

//Toggle HSE
#define TOGGLE_HSE_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_HSE_VALUE_ON 1uL
#define TOGGLE_HSE_VALUE_OFF 0uL
#define TOGGLE_HSE_VALUE_LENGTH 1uL
#define TOGGLE_HSE_REGISTER_OFFSET 16uL
#define TOGGLE_HSE_STATUS_REGISTER RCC->CR
#define TOGGLE_HSE_STATUS_REGISTER_OFFSET 17uL

//Toggle HSE Bypass
#define TOGGLE_HSE_BYPASS_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_HSE_BYPASS_VALUE_ON 1uL
#define TOGGLE_HSE_BYPASS_VALUE_OFF 0uL
#define TOGGLE_HSE_BYPASS_VALUE_LENGTH 1uL
#define TOGGLE_HSE_BYPASS_REGISTER_OFFSET 18uL

//Toggle PLL
#define TOGGLE_PLL_REGISTER_ADDR &(RCC->CR)
#define TOGGLE_PLL_VALUE_ON 1uL
#define TOGGLE_PLL_VALUE_OFF 0uL
#define TOGGLE_PLL_VALUE_LENGTH 1uL
#define TOGGLE_PLL_REGISTER_OFFSET 24uL
#define TOGGLE_PLL_STATUS_REGISTER RCC->CR
#define TOGGLE_PLL_STATUS_REGISTER_OFFSET 25uL

//Set AHB Prescaler
#define SET_AHB_PRESCALER_REGISTER_ADDR &(RCC->CFGR)
#define SET_AHB_PRESCALER_VALUE_LENGTH 4uL
#define SET_AHB_PRESCALER_REGISTER_OFFSET 4uL

//Set APB1 Prescaler
#define SET_APB1_PRESCALER_REGISTER_ADDR &(RCC->CFGR)
#define SET_APB1_PRESCALER_VALUE_LENGTH 3uL
#define SET_APB1_PRESCALER_REGISTER_OFFSET 8uL

//Set APB2 Prescaler
#define SET_APB2_PRESCALER_REGISTER_ADDR &(RCC->CFGR)
#define SET_APB2_PRESCALER_VALUE_LENGTH 3uL
#define SET_APB2_PRESCALER_REGISTER_OFFSET 11uL

//Toggle PLL Output
#define TOGGLE_PLL_OUTPUT_REGISTER_ADDR &(RCC->PLLCFGR)
#define TOGGLE_PLL_OUTPUT_VALUE_ON 1uL
#define TOGGLE_PLL_OUTPUT_VALUE_OFF 0uL
#define TOGGLE_PLL_OUTPUT_VALUE_LENGTH 1uL
#define TOGGLE_PLL_OUTPUT_REGISTER_OFFSET 24uL

//Set PLL Source
#define SET_PLL_SOURCE_REGISTER_ADDR &(RCC->PLLCFGR)
#define SET_PLL_SOURCE_VALUE_LENGTH 2uL
#define SET_PLL_SOURCE_REGISTER_OFFSET 0uL

//Set PLLM
#define SET_PLLM_REGISTER_ADDR &(RCC->PLLCFGR)
#define SET_PLLM_VALUE_LENGTH 3uL
#define SET_PLLM_REGISTER_OFFSET 4uL

//Set PLLN 
#define SET_PLLN_REGISTER_ADDR &(RCC->PLLCFGR)
#define SET_PLLN_VALUE_LENGTH 7uL
#define SET_PLLN_REGISTER_OFFSET 8uL

//Set PLLR 
#define SET_PLLR_REGISTER_ADDR &(RCC->PLLCFGR)
#define SET_PLLR_VALUE_LENGTH 2uL
#define SET_PLLR_REGISTER_OFFSET 25uL

//Toggle Power Interface Clock
#define TOGGLE_POWER_INTERFACE_CLOCK_REGISTER_ADDR &(RCC->APB1ENR1)
#define TOGGLE_POWER_INTERFACE_CLOCK_VALUE_ON 1uL
#define TOGGLE_POWER_INTERFACE_CLOCK_VALUE_OFF 0uL
#define TOGGLE_POWER_INTERFACE_CLOCK_VALUE_LENGTH 1uL
#define TOGGLE_POWER_INTERFACE_CLOCK_REGISTER_OFFSET 28uL

//Toggle GPIO Clock
#define TOGGLE_GPIO_CLOCK_REGISTER_ADDR &(RCC->AHB2ENR)
#define TOGGLE_GPIO_CLOCK_VALUE_ON 1uL
#define TOGGLE_GPIO_CLOCK_VALUE_OFF 0uL
#define TOGGLE_GPIO_CLOCK_VALUE_LENGTH 1uL

//Toggle DMA Clock
#define TOGGLE_DMA_CLOCK_REGISTER_ADDR &(RCC->AHB1ENR)
#define TOGGLE_DMA_CLOCK_VALUE_ON 1uL
#define TOGGLE_DMA_CLOCK_VALUE_OFF 0uL
#define TOGGLE_DMA_CLOCK_VALUE_LENGTH 1uL

//Toggle UART Clock
#define TOGGLE_UART_CLOCK_VALUE_ON 1uL
#define TOGGLE_UART_CLOCK_VALUE_OFF 0uL
#define TOGGLE_UART_CLOCK_VALUE_LENGTH 1uL

#endif /* STM32L496ZG_RCC_H */

/* END OF FILE */
