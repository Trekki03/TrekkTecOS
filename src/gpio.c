#include "gpio.h"
#include "register.h"

void Gpio_SetPinMode (gpio_pin_struct_t* const pin, gpio_pin_mode_t mode)
{
    Register_WriteIntoRegister (
        SET_PIN_MODE_REGISTER_ADDR, mode, 2uL, pin->pinNumber*2uL
    );
}

void Gpio_SetPinSpeed(gpio_pin_struct_t* const pin, gpio_pin_speed_t speed)
{
    Register_WriteIntoRegister (
        SET_PIN_SPEED_REGISTER_ADDR, speed, 2uL, pin->pinNumber*2uL
    );
}

void Gpio_SetPullUpPullDown 
    (gpio_pin_struct_t* const pin, gpio_pullup_pulldown_t pullUpPullDown)
{
    Register_WriteIntoRegister (
        SET_PULLUP_PULLDOWN_REGISTER_ADDR, pullUpPullDown, 
        2uL, pin->pinNumber*2uL
    );
}

void Gpio_TogglePinOutput (gpio_pin_struct_t* const pin, bool b_onOff)
{
    Register_WriteIntoRegister (
        TOGGLE_PIN_OUTPUT_REGISTER_ADDR, b_onOff, 1uL, pin->pinNumber
    );
}

bool Gpio_ReadPinInput(gpio_pin_struct_t* const pin)
{
    return (0 != Register_ReadRegister (
                    READ_PIN_INPUT_REGISTER_ADDR, 1uL, pin->pinNumber) 
                );
}

void Gpio_SetAlternateFunction(gpio_pin_struct_t* pin, gpio_pin_alternate_function_t alternateFunction)
{
    //AFRH for pins 8 to 15 and AFRL for pins 0 to 7
    volatile uint32_t* AfRegister = pin->pinNumber > 7 ? &(pin->port->AFRH) : &(pin->port->AFRL); 

    //if in AFRH Register, pin 8 is pin 0 and so on
    uint32_t pinNumberInRegister = pin->pinNumber > 7 ? pin->pinNumber - 8 : pin->pinNumber;
    uint32_t offset = GPIO_SET_ALTERNATE_FUNCTION_INITIAL_OFFSET + (pinNumberInRegister * GPIO_SET_ALTERNATE_FUNCTION_VALUE_LENGTH);

    Register_WriteIntoRegister(AfRegister, alternateFunction, GPIO_SET_ALTERNATE_FUNCTION_VALUE_LENGTH, offset);
}
