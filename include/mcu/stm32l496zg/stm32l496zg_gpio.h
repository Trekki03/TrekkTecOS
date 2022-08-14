/**
 * @file stm32l496zg_gpio.h
 * 
 * @brief Contains all stm32l496zg specific gpio values/registers etc.
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef STM32L496ZG_GPIO_H
#define STM32L496ZG_GPIO_H

#include "stdint.h"

/******************* GPIO Register *******************/

typedef struct
{
    volatile uint32_t MODER;            ///< GPIO port mode register
    volatile uint32_t OTYPER;           ///< GPIO port output type register
    volatile uint32_t OSPEEDR;          ///< GPIO port output speed register
    volatile uint32_t PUPDR;            /**< GPIO port pull-up/pull-down 
                                            register                      */

    volatile uint32_t IDR;              ///< GPIO port input data register
    volatile uint32_t ODR;              ///< GPIO port output data register
    volatile uint32_t BSRR;             /**< GPIO port bit set/reset 
                                            register                      */
    volatile uint32_t LCKR;             /**< GPIO port configuration lock 
                                            register                      */

    volatile uint32_t AFRL;             /**< GPIO port alternate function 
                                            low register                  */

    volatile uint32_t AFRH;             /**< GPIO port alternate function 
                                            high register                 */

    volatile uint32_t BRR;              ///< GPIO port bit reset register

} gpio_struct_t;

#define GPIOA ((gpio_struct_t*) 0x48000000) ///< GPIOA base address struct 
#define GPIOB ((gpio_struct_t*) 0x48000400) ///< GPIOB base address struct
#define GPIOC ((gpio_struct_t*) 0x48000800) ///< GPIOC base address struct
#define GPIOD ((gpio_struct_t*) 0x48000C00) ///< GPIOD base address struct
#define GPIOE ((gpio_struct_t*) 0x48001000) ///< GPIOE base address struct
#define GPIOF ((gpio_struct_t*) 0x48001400) ///< GPIOG base address struct
#define GPIOG ((gpio_struct_t*) 0x48001800) ///< GPIOG base address struct
#define GPIOH ((gpio_struct_t*) 0x48001C00) ///< GPIOH base address struct
#define GPIOI ((gpio_struct_t*) 0x48002000) ///< GPIOI base address struct
/**
 * @brief GPIO Pin Typedef
 */
typedef struct
{
    gpio_struct_t* port;                ///< Port (GPIOA, GPIOB...)
    uint32_t pinNumber;                 ///< Pin  (1, 2, 3, ...)

} gpio_pin_struct_t;

//Definiton of all GPIO Pins
#define GPIOA_0  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 0uL}
#define GPIOA_1  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 1uL}
#define GPIOA_2  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 2uL}
#define GPIOA_3  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 3uL}
#define GPIOA_4  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 4uL}
#define GPIOA_5  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 5uL}
#define GPIOA_6  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 6uL}
#define GPIOA_7  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 7uL}
#define GPIOA_8  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 8uL}
#define GPIOA_9  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 9uL}
#define GPIOA_10 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 10uL}
#define GPIOA_11 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 11uL}
#define GPIOA_12 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 12uL}
#define GPIOA_13 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 13uL}
#define GPIOA_14 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 14uL}
#define GPIOA_15 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 15uL}
#define GPIOB_0  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 0uL}
#define GPIOB_1  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 1uL}
#define GPIOB_2  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 2uL}
#define GPIOB_3  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 3uL}
#define GPIOB_4  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 4uL}
#define GPIOB_5  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 5uL}
#define GPIOB_6  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 6uL}
#define GPIOB_7  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 7uL}
#define GPIOB_8  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 8uL}
#define GPIOB_9  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 9uL}
#define GPIOB_10 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 10uL}
#define GPIOB_11 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 11uL}
#define GPIOB_12 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 12uL}
#define GPIOB_13 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 13uL}
#define GPIOB_14 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 14uL}
#define GPIOB_15 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 15uL}
#define GPIOC_0  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 0uL}
#define GPIOC_1  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 1uL}
#define GPIOC_2  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 2uL}
#define GPIOC_3  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 3uL}
#define GPIOC_4  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 4uL}
#define GPIOC_5  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 5uL}
#define GPIOC_6  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 6uL}
#define GPIOC_7  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 7uL}
#define GPIOC_8  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 8uL}
#define GPIOC_9  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 9uL}
#define GPIOC_10 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 10uL}
#define GPIOC_11 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 11uL}
#define GPIOC_12 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 12uL}
#define GPIOC_13 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 13uL}
#define GPIOC_14 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 14uL}
#define GPIOC_15 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 15uL}
#define GPIOD_0  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 0uL}
#define GPIOD_1  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 1uL}
#define GPIOD_2  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 2uL}
#define GPIOD_3  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 3uL}
#define GPIOD_4  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 4uL}
#define GPIOD_5  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 5uL}
#define GPIOD_6  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 6uL}
#define GPIOD_7  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 7uL}
#define GPIOD_8  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 8uL}
#define GPIOD_9  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 9uL}
#define GPIOD_10 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 10uL}
#define GPIOD_11 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 11uL}
#define GPIOD_12 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 12uL}
#define GPIOD_13 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 13uL}
#define GPIOD_14 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 14uL}
#define GPIOD_15 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 15uL}
#define GPIOE_0  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 0uL}
#define GPIOE_1  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 1uL}
#define GPIOE_2  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 2uL}
#define GPIOE_3  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 3uL}
#define GPIOE_4  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 4uL}
#define GPIOE_5  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 5uL}
#define GPIOE_6  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 6uL}
#define GPIOE_7  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 7uL}
#define GPIOE_8  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 8uL}
#define GPIOE_9  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 9uL}
#define GPIOE_10 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 10uL}
#define GPIOE_11 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 11uL}
#define GPIOE_12 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 12uL}
#define GPIOE_13 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 13uL}
#define GPIOE_14 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 14uL}
#define GPIOE_15 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 15uL}
#define GPIOF_0  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 0uL}
#define GPIOF_1  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 1uL}
#define GPIOF_2  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 2uL}
#define GPIOF_3  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 3uL}
#define GPIOF_4  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 4uL}
#define GPIOF_5  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 5uL}
#define GPIOF_6  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 6uL}
#define GPIOF_7  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 7uL}
#define GPIOF_8  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 8uL}
#define GPIOF_9  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 9uL}
#define GPIOF_10 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 10uL}
#define GPIOF_11 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 11uL}
#define GPIOF_12 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 12uL}
#define GPIOF_13 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 13uL}
#define GPIOF_14 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 14uL}
#define GPIOF_15 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 15uL}
#define GPIOG_0  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 0uL}
#define GPIOG_1  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 1uL}
#define GPIOG_2  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 2uL}
#define GPIOG_3  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 3uL}
#define GPIOG_4  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 4uL}
#define GPIOG_5  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 5uL}
#define GPIOG_6  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 6uL}
#define GPIOG_7  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 7uL}
#define GPIOG_8  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 8uL}
#define GPIOG_9  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 9uL}
#define GPIOG_10 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 10uL}
#define GPIOG_11 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 11uL}
#define GPIOG_12 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 12uL}
#define GPIOG_13 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 13uL}
#define GPIOG_14 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 14uL}
#define GPIOG_15 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 15uL}
#define GPIOH_0  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 0uL}
#define GPIOH_1  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 1uL}
#define GPIOH_2  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 2uL}
#define GPIOH_3  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 3uL}
#define GPIOH_4  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 4uL}
#define GPIOH_5  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 5uL}
#define GPIOH_6  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 6uL}
#define GPIOH_7  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 7uL}
#define GPIOH_8  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 8uL}
#define GPIOH_9  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 9uL}
#define GPIOH_10 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 10uL}
#define GPIOH_11 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 11uL}
#define GPIOH_12 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 12uL}
#define GPIOH_13 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 13uL}
#define GPIOH_14 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 14uL}
#define GPIOH_15 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 15uL}
#define GPIOI_0  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 0uL}
#define GPIOI_1  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 1uL}
#define GPIOI_2  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 2uL}
#define GPIOI_3  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 3uL}
#define GPIOI_4  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 4uL}
#define GPIOI_5  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 5uL}
#define GPIOI_6  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 6uL}
#define GPIOI_7  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 7uL}
#define GPIOI_8  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 8uL}
#define GPIOI_9  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 9uL}
#define GPIOI_10 &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 10uL}
#define GPIOI_11 &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 11uL}


/******************* Typedefs *******************/

typedef enum
{
    GPIO_INPUT_MODE              = 0uL, ///< GPIO to input mode
    GPIO_OUTPUT_MODE             = 1uL, ///< GPIO to output mode
    GPIO_ALTERNATE_FUNCTION_MODE = 2uL, ///< GPIO to alternate function mode
    GPIO_ANALOG_MODE             = 3uL  ///< GPIO to analog function mode

} gpio_pin_mode_t;

typedef enum
{
    GPIO_LOW_SPEED       = 0uL,         /**< GPIO output to low speed 
                                            (TODO: add max frequence)         */
    GPIO_MEDIUM_SPEED    = 1uL,         /**< GPIO output to medium speed 
                                            (TODO: add max frequence)         */
    GPIO_HIGH_SPEED      = 2uL,         /**< GPIO output to high speed 
                                            (TODO: add max frequence)         */
    GPIO_VERY_HIGH_SPEED = 3uL          /**< GPIO output to very high speed 
                                            (TODO: add max frequence)         */

} gpio_pin_speed_t;

typedef enum
{
    NO_PULLUP_NO_PULLDOWN   = 0uL, 	    /**< GPIO input to no internal pullup 
                                            and no internal pulldown mode     */
    PULLUP                  = 1uL, 	    ///< GPIO input to internal pullup mode
    PULLDOWN                = 2uL  	    /**< GPIO input to internal pulldown 
                                            mode                              */

} gpio_pullup_pulldown_t;

typedef enum
{
    GPIO_ALTERNATE_FUNCTION_0 = 0b0000,     ///< alternate function 0
    GPIO_ALTERNATE_FUNCTION_1 = 0b0001,     ///< alternate function 1
    GPIO_ALTERNATE_FUNCTION_2 = 0b0010,     ///< alternate function 2
    GPIO_ALTERNATE_FUNCTION_3 = 0b0011,     ///< alternate function 3
    GPIO_ALTERNATE_FUNCTION_4 = 0b0100,     ///< alternate function 4
    GPIO_ALTERNATE_FUNCTION_5 = 0b0101,     ///< alternate function 5
    GPIO_ALTERNATE_FUNCTION_6 = 0b0110,     ///< alternate function 6
    GPIO_ALTERNATE_FUNCTION_7 = 0b0111,     ///< alternate function 7
    GPIO_ALTERNATE_FUNCTION_8 = 0b1000,     ///< alternate function 8
    GPIO_ALTERNATE_FUNCTION_9 = 0b1001,     ///< alternate function 9
    GPIO_ALTERNATE_FUNCTION_10 = 0b1010,    ///< alternate function 10
    GPIO_ALTERNATE_FUNCTION_11 = 0b1011,    ///< alternate function 11
    GPIO_ALTERNATE_FUNCTION_12 = 0b1100,    ///< alternate function 12
    GPIO_ALTERNATE_FUNCTION_13 = 0b1101,    ///< alternate function 13
    GPIO_ALTERNATE_FUNCTION_14 = 0b1110,    ///< alternate function 14
    GPIO_ALTERNATE_FUNCTION_15 = 0b1111     ///< alternate function 15
} gpio_pin_alternate_function_t;


/******************* Values for functions *******************/

#define SET_PIN_MODE_REGISTER_ADDR &(pin->port->MODER)  
#define SET_PIN_SPEED_REGISTER_ADDR &(pin->port->OSPEEDR)
#define SET_PULLUP_PULLDOWN_REGISTER_ADDR &(pin->port->PUPDR)
#define TOGGLE_PIN_OUTPUT_REGISTER_ADDR &(pin->port->ODR)
#define READ_PIN_INPUT_REGISTER_ADDR &(pin->port->IDR)

//Set alternate function 
#define GPIO_SET_ALTERNATE_FUNCTION_INITIAL_OFFSET 0
#define GPIO_SET_ALTERNATE_FUNCTION_VALUE_LENGTH 4

#endif /* STM32L496ZG_GPIO_H */

/* END OF FILE */
