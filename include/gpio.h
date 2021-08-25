/**
 * @file gpio.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief This file contains the functions concerning the gpio registers
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef GPIO_H
#define GPIO_H

// Includes
#ifdef STM32L452RE
#include "mcu/stm32l452re.h"
#endif
#ifdef STM32L496ZG
#include "mcu/stm32l496zg.h"
#endif

#include <stdint.h>
#include "bool.h"

/**
 * @brief sets the mode of an selectet GPIO pin
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin  selects the pin of which the mode should be changed
 * @param mode selects the mode in which the pin should be set
 */
void SetPinMode(gpio_pin_struct_t* const pin, gpio_pin_mode_t mode);

/**
 * @brief sets the speed of an selectet GPIO pin
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin  selects the pin of which the speed should be changed
 * @param speed selects the speed in which the pin should be set
 */
void SetPinSpeed(gpio_pin_struct_t* const pin, gpio_pin_speed_t speed);

/**
 * @brief sets if the selectet (input) GPIO pin should be PullUp, PullDown or not pulled
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin  selects the pin of which the PullUpPullDown should be changed
 * @param pullUpPullDown selects the mode in which the pin should be set
 */
void SetPullUpPullDown(gpio_pin_struct_t* const pin, gpio_pullup_pulldown_t pullUpPullDown);

/**
 * @brief activates or deactivates the output of the selected pin
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin  selects the pin of which the Output should be changed
 * @param onOff selects if the output should be on or off
 */
void TogglePinOutput(gpio_pin_struct_t* const pin, bool onOff);

/**
 * @brief Reades the input data register of a specific pin
 * 
 * @param port the pin port (for example GPIOA or GPIOB)
 * @param pin selects the pin which should be read
 * @return true pin is high (pull down) or low (pull high)
 * @return false pin is low (pull down) or high (pull high)
 */
bool ReadPinInput(gpio_pin_struct_t* const pin);




#endif /* GPIO_H */
