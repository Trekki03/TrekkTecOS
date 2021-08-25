#include "trekktecos.h"

void setup()
{
    //Onboard LEDS
    SetPinMode(GPIOC_7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOC_7, GPIO_VERY_HIGH_SPEED);
    SetPinMode(GPIOB_7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB_7, GPIO_VERY_HIGH_SPEED);
    SetPinMode(GPIOB_14, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB_14, GPIO_VERY_HIGH_SPEED);

    SetPinMode(GPIOC_13, GPIO_INPUT_MODE);
    SetPullUpPullDown(GPIOC_13, PULLDOWN);
    SetPinSpeed(GPIOC_13, GPIO_LOW_SPEED);


    //MCO
    //WriteIntoRegister(&(GPIOA->MODER), 0b10, 2, 16);
    SetPinMode(GPIOA_8, GPIO_ALTERNATE_FUNCTION_MODE);
    SetPinSpeed(GPIOA_8, GPIO_VERY_HIGH_SPEED);
    //Set MCO Divider to 1:
    WriteIntoRegister(&(RCC->CFGR), 0b000, 3, 18);
    //Enable MCO Sysclock outpt:
    WriteIntoRegister(&(RCC->CFGR), 0b0001, 4, 24);
}


void loop()
{
    //Test for Nucleo144-L496ZG
    if(ReadPinInput(GPIOC_13))
    {
        TogglePinOutput(GPIOC_7, on);
        TogglePinOutput(GPIOB_7, on);
        TogglePinOutput(GPIOB_14, on);
    }
    else
    {
        TogglePinOutput(GPIOC_7, off);
        TogglePinOutput(GPIOB_7, off);
        TogglePinOutput(GPIOB_14, off);
    }

}