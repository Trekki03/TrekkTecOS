#ifndef STM32L452RE_H
#define STM32L452RE_H

#include "stdint.h"

// RCC Type Defs

typedef enum
{
    SYSCLOCK_MSI_SOURCE     = 0,
    SYSCLOCK_HSI16_SOURCE   = 1,
    SYSCLOCK_HSE_SOURCE     = 2,
    SYSCLOCK_PLL_SOURCE     = 3
} system_clock_source_t;

typedef enum
{
    AHB_NOT_DIVIDED     = 0b0000,
    AHB_DIVIDED_BY_2    = 0b1000,
    AHB_DIVIDED_BY_4    = 0b1001,
    AHB_DIVIDED_BY_8    = 0b1010,
    AHB_DIVIDED_BY_16   = 0b1011,
    AHB_DIVIDED_BY_64   = 0b1100,
    AHB_DIVIDED_BY_128  = 0b1101,
    AHB_DIVIDED_BY_256  = 0b1110,
    AHB_DIVIDED_BY_512  = 0b1111
} ahb_prescaler_values_t;

typedef enum
{
    APB1_NOT_DIVIDED    = 0b000,
    APB1_DIVIDED_BY_2   = 0b100,
    APB1_DIVIDED_BY_4   = 0b101,   
    APB1_DIVIDED_BY_8   = 0b110,
    APB1_DIVIDED_BY_16  = 0b111
} apb1_prescaler_value_t;

typedef enum
{
    APB2_NOT_DIVIDED    = 0b000,
    APB2_DIVIDED_BY_2   = 0b100,
    APB2_DIVIDED_BY_4   = 0b101,   
    APB2_DIVIDED_BY_8   = 0b110,
    APB2_DIVIDED_BY_16  = 0b111
} apb2_prescaler_value_t;

typedef enum
{
    PLL_SOURCE_NO_SOURCE    = 0b00,
    PLL_SOURCE_MSI          = 0b01,
    PLL_SOURCE_HSI16        = 0b10,
    PLL_SOURCE_HSE          = 0b11
} pll_source_t;

typedef enum 
{
    PLLM_DIVIDER_NO_DIVIDER = 0b000,
    PLLM_DIVIDER_2          = 0b001,
    PLLM_DIVIDER_3          = 0b010,
    PLLM_DIVIDER_4          = 0b011,
    PLLM_DIVIDER_5          = 0b100,
    PLLM_DIVIDER_6          = 0b101,
    PLLM_DIVIDER_7          = 0b110,
    PLLM_DIVIDER_8          = 0b111
} pllm_divider_value_t;

typedef enum
{
    PLLN_DIVIDER_8   = 8,
    PLLN_DIVIDER_9   = 9,
    PLLN_DIVIDER_10  = 10,
    PLLN_DIVIDER_11  = 11,
    PLLN_DIVIDER_12  = 12,
    PLLN_DIVIDER_13  = 13,
    PLLN_DIVIDER_14  = 14,
    PLLN_DIVIDER_15  = 15,
    PLLN_DIVIDER_16  = 16,
    PLLN_DIVIDER_17  = 17,
    PLLN_DIVIDER_18  = 18,
    PLLN_DIVIDER_19  = 19,
    PLLN_DIVIDER_20  = 20, 
    PLLN_DIVIDER_21  = 21,
    PLLN_DIVIDER_22  = 22,
    PLLN_DIVIDER_23  = 23,
    PLLN_DIVIDER_24  = 24,
    PLLN_DIVIDER_25  = 25,
    PLLN_DIVIDER_26  = 26,
    PLLN_DIVIDER_27  = 27,
    PLLN_DIVIDER_28  = 28,
    PLLN_DIVIDER_29  = 29,
    PLLN_DIVIDER_30  = 30,
    PLLN_DIVIDER_31  = 31,
    PLLN_DIVIDER_32  = 32,
    PLLN_DIVIDER_33  = 33,
    PLLN_DIVIDER_34  = 34,
    PLLN_DIVIDER_35  = 35,
    PLLN_DIVIDER_36  = 36,
    PLLN_DIVIDER_37  = 37,
    PLLN_DIVIDER_38  = 38,
    PLLN_DIVIDER_39  = 39,
    PLLN_DIVIDER_40  = 40,
    PLLN_DIVIDER_41  = 41,
    PLLN_DIVIDER_42  = 42,
    PLLN_DIVIDER_43  = 43,
    PLLN_DIVIDER_44  = 44,
    PLLN_DIVIDER_45  = 45,
    PLLN_DIVIDER_46  = 46,
    PLLN_DIVIDER_47  = 47,
    PLLN_DIVIDER_48  = 48,
    PLLN_DIVIDER_49  = 49,
    PLLN_DIVIDER_50  = 50,
    PLLN_DIVIDER_51  = 51,
    PLLN_DIVIDER_52  = 52,
    PLLN_DIVIDER_53  = 53,
    PLLN_DIVIDER_54  = 54,
    PLLN_DIVIDER_55  = 55,
    PLLN_DIVIDER_56  = 56,
    PLLN_DIVIDER_57  = 57,
    PLLN_DIVIDER_58  = 58,
    PLLN_DIVIDER_59  = 59,
    PLLN_DIVIDER_60  = 60,
    PLLN_DIVIDER_61  = 61,
    PLLN_DIVIDER_62  = 62,
    PLLN_DIVIDER_63  = 63,
    PLLN_DIVIDER_64  = 64,
    PLLN_DIVIDER_65  = 65,
    PLLN_DIVIDER_66  = 66,
    PLLN_DIVIDER_67  = 67,
    PLLN_DIVIDER_68  = 86,
    PLLN_DIVIDER_69  = 69,
    PLLN_DIVIDER_70  = 70,
    PLLN_DIVIDER_71  = 71,
    PLLN_DIVIDER_72  = 72,
    PLLN_DIVIDER_73  = 73,
    PLLN_DIVIDER_74  = 74,
    PLLN_DIVIDER_75  = 75,
    PLLN_DIVIDER_76  = 76,
    PLLN_DIVIDER_77  = 77,
    PLLN_DIVIDER_78  = 78,
    PLLN_DIVIDER_79  = 79,
    PLLN_DIVIDER_80  = 80,
    PLLN_DIVIDER_81  = 81,
    PLLN_DIVIDER_82  = 82,
    PLLN_DIVIDER_83  = 83,
    PLLN_DIVIDER_84  = 84,
    PLLN_DIVIDER_85  = 85,
    PLLN_DIVIDER_86  = 86
} plln_divider_value_t;

typedef enum
{
    PLLR_DIVIDER_2  = 0b00,
    PLLR_DIVIDER_4  = 0b01,
    PLLR_DIVIDER_6  = 0b10,
    PLLR_DIVIDER_8  = 0b11
} pllr_divider_value_t;

typedef enum
{
    GPIO_A_ENABLE_PORT = 0,
    GPIO_B_ENABLE_PORT = 1,
    GPIO_C_ENABLE_PORT = 2,
    GPIO_D_ENABLE_PORT = 3,
    GPIO_E_ENABLE_PORT = 4,
    GPIO_H_ENABLE_PORT = 7,
} gpio_enable_port_t;

// Power Typedefs
typedef enum
{
    VOLTAGE_SCALE_1 = 0b01,
    VOLTAGE_SCALE_2 = 0b10
} volate_regulator_scale_t;

// Flash Typedefs
typedef enum
{
    FLASH_LATENCY_0_WAIT_STATES = 0b000,
    FLASH_LATENCY_1_WAIT_STATES = 0b001,
    FLASH_LATENCY_2_WAIT_STATES = 0b010,
    FLASH_LATENCY_3_WAIT_STATES = 0b011,
    FLASH_LATENCY_4_WAIT_STATES = 0b100,
} flash_latency_value_t;

//GPIO Typedefs
typedef enum
{
    GPIO_INPUT_MODE              = 0,
    GPIO_OUTPUT_MODE             = 1,
    GPIO_ALTERNATE_FUNCTION_MODE = 2,
    GPIO_ANALOG_MODE             = 3
} gpio_pin_mode_t;

typedef enum
{
    GPIO_LOW_SPEED       = 0,
    GPIO_MEDIUM_SPEED    = 1,
    GPIO_HIGH_SPEED      = 2,
    GPIO_VERY_HIGH_SPEED = 3
} gpio_pin_speed_t;

typedef enum
{
    NO_PULLUP_NO_PULLDOWN   = 0,
    PULLUP                  = 1,
    PULLDOWN                = 2
} gpio_pullup_pulldown_t;

// Register Structs
typedef struct
{
    volatile uint32_t CR;
    volatile uint32_t ICSCR;      
    volatile uint32_t CFGR;       
    volatile uint32_t PLLCFGR;    
    volatile uint32_t PLLSAI1CFGR;
             uint32_t RCC_OFFSET_DONT_USE_0;   
    volatile uint32_t CIER;       
    volatile uint32_t CIFR;       
    volatile uint32_t CICR;       
             uint32_t RCC_OFFSET_DONT_USE_1;  
    volatile uint32_t AHB1RSTR;   
    volatile uint32_t AHB2RSTR;   
    volatile uint32_t AHB3RSTR;   
             uint32_t RCC_OFFSET_DONT_USE_2;  
    volatile uint32_t APB1RSTR1;  
    volatile uint32_t APB1RSTR2;  
    volatile uint32_t APB2RSTR;   
             uint32_t RCC_OFFSET_DONT_USE_3;  
    volatile uint32_t AHB1ENR;    
    volatile uint32_t AHB2ENR;    
    volatile uint32_t AHB3ENR;    
             uint32_t RCC_OFFSET_DONT_USE_4;  
    volatile uint32_t APB1ENR1;   
    volatile uint32_t APB1ENR2;   
    volatile uint32_t APB2ENR;    
             uint32_t RCC_OFSET_DONT_USE_5;  
    volatile uint32_t AHB1SMENR;  
    volatile uint32_t AHB2SMENR;  
    volatile uint32_t AHB3SMENR;  
             uint32_t RCC_OFFSET_DONT_USE_6;
    volatile uint32_t APB1SMENR1; 
    volatile uint32_t APB1SMENR2; 
    volatile uint32_t APB2SMENR;  
             uint32_t RCC_OFFSET_DONT_USE_7;  
    volatile uint32_t CCIPR;      
             uint32_t RCC_OFFSET_DONT_USE_8;  
    volatile uint32_t BDCR;       
    volatile uint32_t CSR;        
    volatile uint32_t CRRCR;      
    volatile uint32_t CCIPR2;     
} rcc_struct_t;

typedef struct
{
    volatile uint32_t MODER; 
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR; 
    volatile uint32_t IDR;   
    volatile uint32_t ODR;   
    volatile uint32_t BSRR;  
    volatile uint32_t LCKR;  
    volatile uint32_t AFRL;
    volatile uint32_t AFRH;
    volatile uint32_t BRR;   

} gpio_struct_t;

typedef struct
{
    volatile uint32_t CR1;   
    volatile uint32_t CR2;   
    volatile uint32_t CR3;   
    volatile uint32_t CR4;   
    volatile uint32_t SR1;   
    volatile uint32_t SR2;   
    volatile uint32_t SCR;   
             uint32_t PWR_OFFSET_DONT_USE_0; 
    volatile uint32_t PUCRA;
    volatile uint32_t PDCRA;
    volatile uint32_t PUCRB;
    volatile uint32_t PDCRB;
    volatile uint32_t PUCRC;
    volatile uint32_t PDCRC;
    volatile uint32_t PUCRD;
    volatile uint32_t PDCRD;
    volatile uint32_t PUCRE;
    volatile uint32_t PDCRE;
             uint32_t PWR_OFFSET_DONT_USE_1; ;
             uint32_t PWR_OFFSET_DONT_USE_2; ;
             uint32_t PWR_OFFSET_DONT_USE_3; ;
             uint32_t PWR_OFFSET_DONT_USE_4; ;
    volatile uint32_t PUCRH;
    volatile uint32_t PDCRH;
} pwr_struct_t;

typedef struct
{
    volatile uint32_t ACR;      
    volatile uint32_t PDKEYR;   
    volatile uint32_t KEYR;     
    volatile uint32_t OPTKEYR;  
    volatile uint32_t SR;       
    volatile uint32_t CR;       
    volatile uint32_t ECCR;     
    volatile uint32_t RESERVED1;
    volatile uint32_t OPTR;     
    volatile uint32_t PCROP1SR; 
    volatile uint32_t PCROP1ER; 
    volatile uint32_t WRP1AR;   
    volatile uint32_t WRP1BR;   
} flash_struct_t;

typedef struct 
{
    volatile uint32_t CTRL;
    volatile uint32_t LOAD;
    volatile uint32_t VAL;
    volatile uint32_t CALIB;
} systick_struct_t;


extern rcc_struct_t*   RCC;    
extern gpio_struct_t*  GPIOA;  
extern gpio_struct_t*  GPIOB;
extern gpio_struct_t*  GPIOC;  
extern gpio_struct_t*  GPIOD;  
extern gpio_struct_t*  GPIOE;  
extern gpio_struct_t*  GPIOH; 
extern pwr_struct_t*   PWR;    
extern flash_struct_t* FLASH;  
extern systick_struct_t* STK;

#endif /* STM32L452RE_H */
