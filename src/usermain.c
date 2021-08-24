#include "trekktecos.h"

void setup()
{
    //Onboard LEDS
    SetPinMode(GPIOC, 7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOC, 7, GPIO_VERY_HIGH_SPEED);
    SetPinMode(GPIOB, 7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB, 7, GPIO_VERY_HIGH_SPEED);
    SetPinMode(GPIOB, 14, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB, 14, GPIO_VERY_HIGH_SPEED);

    SetPinMode(GPIOC, 13, GPIO_INPUT_MODE);
    SetPullUpPullDown(GPIOC, 13, PULLDOWN);
    SetPinSpeed(GPIOC, 13, GPIO_LOW_SPEED);
}


void loop()
{
    //Test for Nucleo144-L496ZG
    if(ReadPinInput(GPIOC, 13))
    {
        TogglePinOutput(GPIOC, 7, on);
        TogglePinOutput(GPIOB, 7, on);
        TogglePinOutput(GPIOB, 14, on);
    }
    else
    {
        TogglePinOutput(GPIOC, 7, off);
        TogglePinOutput(GPIOB, 7, off);
        TogglePinOutput(GPIOB, 14, off);
    }

}