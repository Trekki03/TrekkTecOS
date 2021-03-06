/**
 * @file gpio.h
 * 
 * @brief This file contains the functions concerning the gpio registers
 *
 * @copyright Copyright (c) 2021
 */

#ifndef GPIO_H
#define GPIO_H

// MCU specific includes
#ifdef STM32L496ZG
#   include "mcu/stm32l496zg.h"
#endif

#include <stdint.h>
#include "bool.h"

/**
 * @brief sets the mode of an selected GPIO pin
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin  selects the pin of which the mode should be changed
 * @param mode selects the mode in which the pin should be set
 */
void Gpio_SetPinMode(gpio_pin_struct_t* pin, gpio_pin_mode_t mode);

/**
 * @brief sets the speed of an selected GPIO pin
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin  selects the pin of which the speed should be changed
 * @param speed selects the speed in which the pin should be set
 */
void Gpio_SetPinSpeed(gpio_pin_struct_t* pin, gpio_pin_speed_t speed);

/**
 * @brief sets if the selected (input) GPIO pin should be PullUp, PullDown or not pulled
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin  selects the pin of which the PullUpPullDown should be changed
 * @param pullUpPullDown selects the mode in which the pin should be set
 */
void Gpio_SetPullUpPullDown(gpio_pin_struct_t* pin, gpio_pullup_pulldown_t pullUpPullDown);

/**
 * @brief activates or deactivates the output of the selected pin
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin  selects the pin of which the Output should be changed
 * @param onOff selects if the output should be on or off
 */
void Gpio_TogglePinOutput(gpio_pin_struct_t* pin, bool b_onOff);

/**
 * @brief Reads the input data register of a specific pin
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin selects the pin which should be read
 * @return true pin is high (pull down) or low (pull high)
 * @return false pin is low (pull down) or high (pull high)
 */
bool Gpio_ReadPinInput(gpio_pin_struct_t* pin);

#endif /* GPIO_H */

/* END OF FILE */
