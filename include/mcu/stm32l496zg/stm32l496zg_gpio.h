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
extern gpio_struct_t*	    const GPIOG;	    ///< GPIOG base address struct
/**
 * @brief GPIO Pin Typedef
 * 
 */
typedef struct
{
    gpio_struct_t* port;
    uint32_t pinNumber;
} gpio_pin_struct_t;

#define GPIOA_0  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 0}
#define GPIOA_1  &(gpio_pin_struct_t) {GPIOA, 1}
#define GPIOA_2  &(gpio_pin_struct_t) {GPIOA, 2}
#define GPIOA_3  &(gpio_pin_struct_t) {GPIOA, 3}
#define GPIOA_4  &(gpio_pin_struct_t) {GPIOA, 4}
#define GPIOA_5  &(gpio_pin_struct_t) {GPIOA, 5}
#define GPIOA_6  &(gpio_pin_struct_t) {GPIOA, 6}
#define GPIOA_7  &(gpio_pin_struct_t) {GPIOA, 7}
#define GPIOA_8  &(gpio_pin_struct_t) {GPIOA, 8}
#define GPIOA_9  &(gpio_pin_struct_t) {GPIOA, 9}
#define GPIOA_10 &(gpio_pin_struct_t) {GPIOA, 10}
#define GPIOA_11 &(gpio_pin_struct_t) {GPIOA, 11}
#define GPIOA_12 &(gpio_pin_struct_t) {GPIOA, 12}
#define GPIOA_13 &(gpio_pin_struct_t) {GPIOA, 13}
#define GPIOA_14 &(gpio_pin_struct_t) {GPIOA, 14}
#define GPIOA_15 &(gpio_pin_struct_t) {GPIOA, 15}
#define GPIOB_0  &(gpio_pin_struct_t) {GPIOB, 0}
#define GPIOB_1  &(gpio_pin_struct_t) {GPIOB, 1}
#define GPIOB_2  &(gpio_pin_struct_t) {GPIOB, 2}
#define GPIOB_3  &(gpio_pin_struct_t) {GPIOB, 3}
#define GPIOB_4  &(gpio_pin_struct_t) {GPIOB, 4}
#define GPIOB_5  &(gpio_pin_struct_t) {GPIOB, 5}
#define GPIOB_6  &(gpio_pin_struct_t) {GPIOB, 6}
#define GPIOB_7  &(gpio_pin_struct_t) {GPIOB, 7}
#define GPIOB_8  &(gpio_pin_struct_t) {GPIOB, 8}
#define GPIOB_9  &(gpio_pin_struct_t) {GPIOB, 9}
#define GPIOB_10 &(gpio_pin_struct_t) {GPIOB, 10}
#define GPIOB_11 &(gpio_pin_struct_t) {GPIOB, 11}
#define GPIOB_12 &(gpio_pin_struct_t) {GPIOB, 12}
#define GPIOB_13 &(gpio_pin_struct_t) {GPIOB, 13}
#define GPIOB_14 &(gpio_pin_struct_t) {GPIOB, 14}
#define GPIOB_15 &(gpio_pin_struct_t) {GPIOB, 15}
#define GPIOC_0  &(gpio_pin_struct_t) {GPIOC, 0}
#define GPIOC_1  &(gpio_pin_struct_t) {GPIOC, 1}
#define GPIOC_2  &(gpio_pin_struct_t) {GPIOC, 2}
#define GPIOC_3  &(gpio_pin_struct_t) {GPIOC, 3}
#define GPIOC_4  &(gpio_pin_struct_t) {GPIOC, 4}
#define GPIOC_5  &(gpio_pin_struct_t) {GPIOC, 5}
#define GPIOC_6  &(gpio_pin_struct_t) {GPIOC, 6}
#define GPIOC_7  &(gpio_pin_struct_t) {GPIOC, 7}
#define GPIOC_8  &(gpio_pin_struct_t) {GPIOC, 8}
#define GPIOC_9  &(gpio_pin_struct_t) {GPIOC, 9}
#define GPIOC_10 &(gpio_pin_struct_t) {GPIOC, 10}
#define GPIOC_11 &(gpio_pin_struct_t) {GPIOC, 11}
#define GPIOC_12 &(gpio_pin_struct_t) {GPIOC, 12}
#define GPIOC_13 &(gpio_pin_struct_t) {GPIOC, 13}
#define GPIOC_14 &(gpio_pin_struct_t) {GPIOC, 14}
#define GPIOC_15 &(gpio_pin_struct_t) {GPIOC, 15}
#define GPIOD_0  &(gpio_pin_struct_t) {GPIOD, 0}
#define GPIOD_1  &(gpio_pin_struct_t) {GPIOD, 1}
#define GPIOD_2  &(gpio_pin_struct_t) {GPIOD, 2}
#define GPIOD_3  &(gpio_pin_struct_t) {GPIOD, 3}
#define GPIOD_4  &(gpio_pin_struct_t) {GPIOD, 4}
#define GPIOD_5  &(gpio_pin_struct_t) {GPIOD, 5}
#define GPIOD_6  &(gpio_pin_struct_t) {GPIOD, 6}
#define GPIOD_7  &(gpio_pin_struct_t) {GPIOD, 7}
#define GPIOD_8  &(gpio_pin_struct_t) {GPIOD, 8}
#define GPIOD_9  &(gpio_pin_struct_t) {GPIOD, 9}
#define GPIOD_10 &(gpio_pin_struct_t) {GPIOD, 10}
#define GPIOD_11 &(gpio_pin_struct_t) {GPIOD, 11}
#define GPIOD_12 &(gpio_pin_struct_t) {GPIOD, 12}
#define GPIOD_13 &(gpio_pin_struct_t) {GPIOD, 13}
#define GPIOD_14 &(gpio_pin_struct_t) {GPIOD, 14}
#define GPIOD_15 &(gpio_pin_struct_t) {GPIOD, 15}
#define GPIOE_0  &(gpio_pin_struct_t) {GPIOE, 0}
#define GPIOE_1  &(gpio_pin_struct_t) {GPIOE, 1}
#define GPIOE_2  &(gpio_pin_struct_t) {GPIOE, 2}
#define GPIOE_3  &(gpio_pin_struct_t) {GPIOE, 3}
#define GPIOE_4  &(gpio_pin_struct_t) {GPIOE, 4}
#define GPIOE_5  &(gpio_pin_struct_t) {GPIOE, 5}
#define GPIOE_6  &(gpio_pin_struct_t) {GPIOE, 6}
#define GPIOE_7  &(gpio_pin_struct_t) {GPIOE, 7}
#define GPIOE_8  &(gpio_pin_struct_t) {GPIOE, 8}
#define GPIOE_9  &(gpio_pin_struct_t) {GPIOE, 9}
#define GPIOE_10 &(gpio_pin_struct_t) {GPIOE, 10}
#define GPIOE_11 &(gpio_pin_struct_t) {GPIOE, 11}
#define GPIOE_12 &(gpio_pin_struct_t) {GPIOE, 12}
#define GPIOE_13 &(gpio_pin_struct_t) {GPIOE, 13}
#define GPIOE_14 &(gpio_pin_struct_t) {GPIOE, 14}
#define GPIOE_15 &(gpio_pin_struct_t) {GPIOE, 15}
#define GPIOF_0  &(gpio_pin_struct_t) {GPIOF, 0}
#define GPIOF_1  &(gpio_pin_struct_t) {GPIOF, 1}
#define GPIOF_2  &(gpio_pin_struct_t) {GPIOF, 2}
#define GPIOF_3  &(gpio_pin_struct_t) {GPIOF, 3}
#define GPIOF_4  &(gpio_pin_struct_t) {GPIOF, 4}
#define GPIOF_5  &(gpio_pin_struct_t) {GPIOF, 5}
#define GPIOF_6  &(gpio_pin_struct_t) {GPIOF, 6}
#define GPIOF_7  &(gpio_pin_struct_t) {GPIOF, 7}
#define GPIOF_8  &(gpio_pin_struct_t) {GPIOF, 8}
#define GPIOF_9  &(gpio_pin_struct_t) {GPIOF, 9}
#define GPIOF_10 &(gpio_pin_struct_t) {GPIOF, 10}
#define GPIOF_11 &(gpio_pin_struct_t) {GPIOF, 11}
#define GPIOF_12 &(gpio_pin_struct_t) {GPIOF, 12}
#define GPIOF_13 &(gpio_pin_struct_t) {GPIOF, 13}
#define GPIOF_14 &(gpio_pin_struct_t) {GPIOF, 14}
#define GPIOF_15 &(gpio_pin_struct_t) {GPIOF, 15}
#define GPIOG_0  &(gpio_pin_struct_t) {GPIOG, 0}
#define GPIOG_1  &(gpio_pin_struct_t) {GPIOG, 1}
#define GPIOG_2  &(gpio_pin_struct_t) {GPIOG, 2}
#define GPIOG_3  &(gpio_pin_struct_t) {GPIOG, 3}
#define GPIOG_4  &(gpio_pin_struct_t) {GPIOG, 4}
#define GPIOG_5  &(gpio_pin_struct_t) {GPIOG, 5}
#define GPIOG_6  &(gpio_pin_struct_t) {GPIOG, 6}
#define GPIOG_7  &(gpio_pin_struct_t) {GPIOG, 7}
#define GPIOG_8  &(gpio_pin_struct_t) {GPIOG, 8}
#define GPIOG_9  &(gpio_pin_struct_t) {GPIOG, 9}
#define GPIOG_10 &(gpio_pin_struct_t) {GPIOG, 10}
#define GPIOG_11 &(gpio_pin_struct_t) {GPIOG, 11}
#define GPIOG_12 &(gpio_pin_struct_t) {GPIOG, 12}
#define GPIOG_13 &(gpio_pin_struct_t) {GPIOG, 13}
#define GPIOG_14 &(gpio_pin_struct_t) {GPIOG, 14}
#define GPIOG_15 &(gpio_pin_struct_t) {GPIOG, 15}
#define GPIOH_0  &(gpio_pin_struct_t) {GPIOH, 0}
#define GPIOH_1  &(gpio_pin_struct_t) {GPIOH, 1}
#define GPIOH_2  &(gpio_pin_struct_t) {GPIOH, 2}
#define GPIOH_3  &(gpio_pin_struct_t) {GPIOH, 3}
#define GPIOH_4  &(gpio_pin_struct_t) {GPIOH, 4}
#define GPIOH_5  &(gpio_pin_struct_t) {GPIOH, 5}
#define GPIOH_6  &(gpio_pin_struct_t) {GPIOH, 6}
#define GPIOH_7  &(gpio_pin_struct_t) {GPIOH, 7}
#define GPIOH_8  &(gpio_pin_struct_t) {GPIOH, 8}
#define GPIOH_9  &(gpio_pin_struct_t) {GPIOH, 9}
#define GPIOH_10 &(gpio_pin_struct_t) {GPIOH, 10}
#define GPIOH_11 &(gpio_pin_struct_t) {GPIOH, 11}
#define GPIOH_12 &(gpio_pin_struct_t) {GPIOH, 12}
#define GPIOH_13 &(gpio_pin_struct_t) {GPIOH, 13}
#define GPIOH_14 &(gpio_pin_struct_t) {GPIOH, 14}
#define GPIOH_15 &(gpio_pin_struct_t) {GPIOH, 15}
#define GPIOI_0  &(gpio_pin_struct_t) {GPIOI, 0}
#define GPIOI_1  &(gpio_pin_struct_t) {GPIOI, 1}
#define GPIOI_2  &(gpio_pin_struct_t) {GPIOI, 2}
#define GPIOI_3  &(gpio_pin_struct_t) {GPIOI, 3}
#define GPIOI_4  &(gpio_pin_struct_t) {GPIOI, 4}
#define GPIOI_5  &(gpio_pin_struct_t) {GPIOI, 5}
#define GPIOI_6  &(gpio_pin_struct_t) {GPIOI, 6}
#define GPIOI_7  &(gpio_pin_struct_t) {GPIOI, 7}
#define GPIOI_8  &(gpio_pin_struct_t) {GPIOI, 8}
#define GPIOI_9  &(gpio_pin_struct_t) {GPIOI, 9}
#define GPIOI_10 &(gpio_pin_struct_t) {GPIOI, 10}
#define GPIOI_11 &(gpio_pin_struct_t) {GPIOI, 11}


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

#define SET_PIN_MODE_REGISTER_ADDR &(pin->port->MODER)  
#define SET_PIN_SPEED_REGISTER_ADDR &(pin->port->OSPEEDR)
#define SET_PULLUP_PULLDOWN_REGISTER_ADDR &(pin->port->PUPDR)
#define TOGGLE_PIN_OUTPUT_REGISTER_ADDR &(pin->port->ODR)
#define READ_PIN_INPUT_REGISTER_ADDR &(pin->port->IDR)

#endif /* STM32L496ZG_GPIO_H */
