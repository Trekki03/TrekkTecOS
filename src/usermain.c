#include "trekktecos.h"

void setup()
{
    Gpio_SetPinMode(GPIOA_8, GPIO_OUTPUT_MODE);
}

void loop()
{
    static bool lastState = off;
    static uint32_t lastTime = 0uL;
        
    if((Systick_GetMilliTicks() - lastTime) >= 5uL)
    {
        if(lastState == off)
        {
            Gpio_TogglePinOutput(GPIOA_8, on);
            lastState = on;
        }
        else
        {
            Gpio_TogglePinOutput(GPIOA_8, off);
            lastState = off;
        }
        lastTime = Systick_GetMilliTicks();
    }

}