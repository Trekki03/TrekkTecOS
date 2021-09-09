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

#define GPIOA (gpio_struct_t*) 0x48000000 ///< GPIOA base address struct 
#define GPIOB (gpio_struct_t*) 0x48000400 ///< GPIOB base address struct
#define GPIOC (gpio_struct_t*) 0x48000800 ///< GPIOC base address struct
#define GPIOD (gpio_struct_t*) 0x48000C00 ///< GPIOD base address struct
#define GPIOE (gpio_struct_t*) 0x48001000 ///< GPIOE base address struct
#define GPIOF (gpio_struct_t*) 0x48001400 ///< GPIOG base address struct
#define GPIOG (gpio_struct_t*) 0x48001800 ///< GPIOG base address struct
#define GPIOH (gpio_struct_t*) 0x48001C00 ///< GPIOH base address struct
#define GPIOI (gpio_struct_t*) 0x48002000 ///< GPIOI base address struct
/**
 * @brief GPIO Pin Typedef
 */
typedef struct
{
    gpio_struct_t* port;                ///< Port (GPIOA, GPIOB...)
    uint32_t pinNumber;                 ///< Pin  (1, 2, 3, ...)

} gpio_pin_struct_t;

//Definiton of all GPIO Pins
#define GPIOA_0  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 0}
#define GPIOA_1  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 1}
#define GPIOA_2  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 2}
#define GPIOA_3  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 3}
#define GPIOA_4  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 4}
#define GPIOA_5  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 5}
#define GPIOA_6  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 6}
#define GPIOA_7  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 7}
#define GPIOA_8  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 8}
#define GPIOA_9  &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 9}
#define GPIOA_10 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 10}
#define GPIOA_11 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 11}
#define GPIOA_12 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 12}
#define GPIOA_13 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 13}
#define GPIOA_14 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 14}
#define GPIOA_15 &(gpio_pin_struct_t) {.port = GPIOA, .pinNumber = 15}
#define GPIOB_0  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 0}
#define GPIOB_1  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 1}
#define GPIOB_2  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 2}
#define GPIOB_3  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 3}
#define GPIOB_4  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 4}
#define GPIOB_5  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 5}
#define GPIOB_6  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 6}
#define GPIOB_7  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 7}
#define GPIOB_8  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 8}
#define GPIOB_9  &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 9}
#define GPIOB_10 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 10}
#define GPIOB_11 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 11}
#define GPIOB_12 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 12}
#define GPIOB_13 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 13}
#define GPIOB_14 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 14}
#define GPIOB_15 &(gpio_pin_struct_t) {.port = GPIOB, .pinNumber = 15}
#define GPIOC_0  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 0}
#define GPIOC_1  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 1}
#define GPIOC_2  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 2}
#define GPIOC_3  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 3}
#define GPIOC_4  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 4}
#define GPIOC_5  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 5}
#define GPIOC_6  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 6}
#define GPIOC_7  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 7}
#define GPIOC_8  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 8}
#define GPIOC_9  &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 9}
#define GPIOC_10 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 10}
#define GPIOC_11 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 11}
#define GPIOC_12 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 12}
#define GPIOC_13 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 13}
#define GPIOC_14 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 14}
#define GPIOC_15 &(gpio_pin_struct_t) {.port = GPIOC, .pinNumber = 15}
#define GPIOD_0  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 0}
#define GPIOD_1  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 1}
#define GPIOD_2  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 2}
#define GPIOD_3  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 3}
#define GPIOD_4  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 4}
#define GPIOD_5  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 5}
#define GPIOD_6  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 6}
#define GPIOD_7  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 7}
#define GPIOD_8  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 8}
#define GPIOD_9  &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 9}
#define GPIOD_10 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 10}
#define GPIOD_11 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 11}
#define GPIOD_12 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 12}
#define GPIOD_13 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 13}
#define GPIOD_14 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 14}
#define GPIOD_15 &(gpio_pin_struct_t) {.port = GPIOD, .pinNumber = 15}
#define GPIOE_0  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 0}
#define GPIOE_1  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 1}
#define GPIOE_2  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 2}
#define GPIOE_3  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 3}
#define GPIOE_4  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 4}
#define GPIOE_5  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 5}
#define GPIOE_6  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 6}
#define GPIOE_7  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 7}
#define GPIOE_8  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 8}
#define GPIOE_9  &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 9}
#define GPIOE_10 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 10}
#define GPIOE_11 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 11}
#define GPIOE_12 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 12}
#define GPIOE_13 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 13}
#define GPIOE_14 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 14}
#define GPIOE_15 &(gpio_pin_struct_t) {.port = GPIOE, .pinNumber = 15}
#define GPIOF_0  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 0}
#define GPIOF_1  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 1}
#define GPIOF_2  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 2}
#define GPIOF_3  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 3}
#define GPIOF_4  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 4}
#define GPIOF_5  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 5}
#define GPIOF_6  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 6}
#define GPIOF_7  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 7}
#define GPIOF_8  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 8}
#define GPIOF_9  &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 9}
#define GPIOF_10 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 10}
#define GPIOF_11 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 11}
#define GPIOF_12 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 12}
#define GPIOF_13 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 13}
#define GPIOF_14 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 14}
#define GPIOF_15 &(gpio_pin_struct_t) {.port = GPIOF, .pinNumber = 15}
#define GPIOG_0  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 0}
#define GPIOG_1  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 1}
#define GPIOG_2  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 2}
#define GPIOG_3  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 3}
#define GPIOG_4  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 4}
#define GPIOG_5  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 5}
#define GPIOG_6  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 6}
#define GPIOG_7  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 7}
#define GPIOG_8  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 8}
#define GPIOG_9  &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 9}
#define GPIOG_10 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 10}
#define GPIOG_11 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 11}
#define GPIOG_12 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 12}
#define GPIOG_13 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 13}
#define GPIOG_14 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 14}
#define GPIOG_15 &(gpio_pin_struct_t) {.port = GPIOG, .pinNumber = 15}
#define GPIOH_0  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 0}
#define GPIOH_1  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 1}
#define GPIOH_2  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 2}
#define GPIOH_3  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 3}
#define GPIOH_4  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 4}
#define GPIOH_5  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 5}
#define GPIOH_6  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 6}
#define GPIOH_7  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 7}
#define GPIOH_8  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 8}
#define GPIOH_9  &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 9}
#define GPIOH_10 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 10}
#define GPIOH_11 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 11}
#define GPIOH_12 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 12}
#define GPIOH_13 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 13}
#define GPIOH_14 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 14}
#define GPIOH_15 &(gpio_pin_struct_t) {.port = GPIOH, .pinNumber = 15}
#define GPIOI_0  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 0}
#define GPIOI_1  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 1}
#define GPIOI_2  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 2}
#define GPIOI_3  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 3}
#define GPIOI_4  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 4}
#define GPIOI_5  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 5}
#define GPIOI_6  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 6}
#define GPIOI_7  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 7}
#define GPIOI_8  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 8}
#define GPIOI_9  &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 9}
#define GPIOI_10 &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 10}
#define GPIOI_11 &(gpio_pin_struct_t) {.port = GPIOI, .pinNumber = 11}


/******************* Typedefs *******************/

typedef enum
{
    GPIO_INPUT_MODE              = 0,   ///< GPIO to input mode
    GPIO_OUTPUT_MODE             = 1,   ///< GPIO to output mode
    GPIO_ALTERNATE_FUNCTION_MODE = 2,   ///< GPIO to alternate function mode
    GPIO_ANALOG_MODE             = 3    ///< GPIO to analog function mode

} gpio_pin_mode_t;

typedef enum
{
    GPIO_LOW_SPEED       = 0,           /**< GPIO output to low speed 
                                            (TODO: add max frequence)         */
    GPIO_MEDIUM_SPEED    = 1,           /**< GPIO output to medium speed 
                                            (TODO: add max frequence)         */
    GPIO_HIGH_SPEED      = 2,           /**< GPIO output to high speed 
                                            (TODO: add max frequence)         */
    GPIO_VERY_HIGH_SPEED = 3            /**< GPIO output to very high speed 
                                            (TODO: add max frequence)         */

} gpio_pin_speed_t;

typedef enum
{
    NO_PULLUP_NO_PULLDOWN   = 0, 	    /**< GPIO input to no internal pullup 
                                            and no internal pulldown mode     */
    PULLUP                  = 1, 	    ///< GPIO input to internal pullup mode
    PULLDOWN                = 2  	    /**< GPIO input to internal pulldown 
                                            mode                              */

} gpio_pullup_pulldown_t;



/******************* Values for functions *******************/

#define SET_PIN_MODE_REGISTER_ADDR &(pin->port->MODER)  
#define SET_PIN_SPEED_REGISTER_ADDR &(pin->port->OSPEEDR)
#define SET_PULLUP_PULLDOWN_REGISTER_ADDR &(pin->port->PUPDR)
#define TOGGLE_PIN_OUTPUT_REGISTER_ADDR &(pin->port->ODR)
#define READ_PIN_INPUT_REGISTER_ADDR &(pin->port->IDR)

#endif /* STM32L496ZG_GPIO_H */

/* END OF FILE */
