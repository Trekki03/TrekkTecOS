#ifndef GPIO_H
#define GPIO_H

#ifdef STM32L452RE
    #include "stm32l452re.h"
#endif

#include <stdint.h>
#include "bool.h"

void SetPinMode(gpio_struct_t* port, uint8_t pin, gpio_pin_mode_t mode);
void SetPinSpeed(gpio_struct_t* port, uint8_t pin, gpio_pin_speed_t speed);
void SetPullUpPullDown(gpio_struct_t* port, uint8_t pin, gpio_pullup_pulldown_t pullUpPullDown);
void TogglePin(gpio_struct_t* port, uint8_t pin, bool onOff);
#endif /* GPIO_H */
