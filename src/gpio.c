#include "gpio.h"
#include "register.h"

void SetPinMode(gpio_pin_struct_t* const pin, gpio_pin_mode_t mode)
{
    WriteIntoRegister(SET_PIN_MODE_REGISTER_ADDR, mode, 2, pin->pinNumber*2);
}

void SetPinSpeed(gpio_pin_struct_t* const pin, gpio_pin_speed_t speed)
{
    WriteIntoRegister(SET_PIN_SPEED_REGISTER_ADDR, speed, 2, pin->pinNumber*2);
}

void SetPullUpPullDown(gpio_pin_struct_t* const pin, gpio_pullup_pulldown_t pullUpPullDown)
{
    WriteIntoRegister(SET_PULLUP_PULLDOWN_REGISTER_ADDR, pullUpPullDown, 2, pin->pinNumber*2);
}

void TogglePinOutput(gpio_pin_struct_t* const pin, bool onOff)
{
    WriteIntoRegister(TOGGLE_PIN_OUTPUT_REGISTER_ADDR, onOff, 1, pin->pinNumber);
}

bool ReadPinInput(gpio_pin_struct_t* const pin)
{
    return (bool)ReadRegister(READ_PIN_INPUT_REGISTER_ADDR, 1, pin->pinNumber);
}