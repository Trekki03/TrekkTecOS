#include "trekktecos.h"

bool lastState;
void setup()
{
    lastState = off;
    SetPinMode(GPIOC, 7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOC, 7, GPIO_MEDIUM_SPEED);
    SetPinMode(GPIOB, 7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB, 7, GPIO_MEDIUM_SPEED);
    SetPinMode(GPIOB, 14, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB, 14, GPIO_MEDIUM_SPEED);
}


void loop()
{
    //Blinky Example for Nucleo144-L496ZG
    static uint32_t ulTime = 0;

    if((milli_ticks - ulTime) >= 500)
    {
        ulTime = milli_ticks;
        if(lastState == on)
        {
            TogglePinOutput(GPIOC, 7,  off);
            TogglePinOutput(GPIOB, 7,  on);
            TogglePinOutput(GPIOB, 14, off);
            lastState = off;
        }
        else
        {
            TogglePinOutput(GPIOC, 7,  on);
            TogglePinOutput(GPIOB, 7,  off);
            TogglePinOutput(GPIOB, 14, on);
            lastState = on;
        }
    }
}