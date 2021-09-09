#include "trekktecos.h"

void setup()
{
    SetPinMode(GPIOA_8, GPIO_OUTPUT_MODE);
}

void loop()
{
    static bool lastState = off;
    static uint32_t lastTime = 0;

    if((getMilliTicks() - lastTime) >= 5)
    {
        if(lastState == off)
        {
            TogglePinOutput(GPIOA_8, on);
            lastState = on;
        }
        else
        {
            TogglePinOutput(GPIOA_8, off);
            lastState = off;
        }
        lastTime = getMilliTicks();
    }

}