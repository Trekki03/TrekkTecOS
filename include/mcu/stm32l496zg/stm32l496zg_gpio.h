/**
 * @file stm32l496zg_gpio.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief Contains all stm32l496zg specific gpio values/registers etc.
 * @version 0.1
 * @date 2021-08-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef STM32L496ZG_GPIO_H
#define STM32L496ZG_GPIO_H

#include "stdint.h"

/*********************************************************************
 * 
 * GPIO REGISTER
 * 
 ********************************************************************/

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

extern gpio_struct_t*       const GPIOA;            ///< GPIOA base address struct 
extern gpio_struct_t*       const GPIOB;            ///< GPIOB base address struct
extern gpio_struct_t*       const GPIOC;            ///< GPIOC base address struct
extern gpio_struct_t*       const GPIOD;            ///< GPIOD base address struct
extern gpio_struct_t*       const GPIOE;            ///< GPIOE base address struct
extern gpio_struct_t*       const GPIOH;            ///< GPIOH base address struct


/*********************************************************************
 * 
 * TypeDefs
 * 
 ********************************************************************/

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


/*********************************************************************
 * 
 * Values for functions
 * 
 ********************************************************************/

#define SET_PIN_MODE_REGISTER_ADDR &(port->MODER)  
#define SET_PIN_SPEED_REGISTER_ADDR &(port->OSPEEDR)
#define SET_PULLUP_PULLDOWN_REGISTER_ADDR &(port->PUPDR)
#define TOGGLE_PIN_OUTPUT_REGISTER_ADDR &(port->ODR)


#endif /* STM32L496ZG_GPIO_H */
