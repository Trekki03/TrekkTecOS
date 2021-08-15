#include "gpio.h"
#include "register.h"

void SetPinMode(const gpio_struct_t* port, uint8_t pin, gpio_pin_mode_t mode)
{
    WriteIntoRegister(&(port->MODER), mode, 2, pin*2);
}

void SetPinSpeed(const gpio_struct_t* port, uint8_t pin, gpio_pin_speed_t speed)
{
    WriteIntoRegister(&(port->OSPEEDR), speed, 2, pin*2);
}

void SetPullUpPullDown(const gpio_struct_t* port, uint8_t pin, gpio_pullup_pulldown_t pullUpPullDown)
{
    WriteIntoRegister(&(port->PUPDR), pullUpPullDown, 2, pin*2);
}

void TogglePin(const gpio_struct_t* port, uint8_t pin, bool onOff)
{
    WriteIntoRegister(&(port->ODR), onOff, 1, pin);
}