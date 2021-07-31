#include "nucleoduino.h"

bool lastState;
void setup()
{
    lastState = off;
    SetPinMode(GPIOB, 13, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB, 13, GPIO_MEDIUM_SPEED);
    SetPullUpPullDown(GPIOB, 13, NO_PULLUP_NO_PULLDOWN);
}


void loop()
{
    static uint32_t ulTime = 0;

    if((milli_ticks - ulTime) >= 500)
    {
        ulTime = milli_ticks;
        if(lastState == on)
        {
            TogglePin(GPIOB, 13, off);
            lastState = off;
        }
        else
        {
            TogglePin(GPIOB, 13, on);
            lastState = on;
        }
    }
}