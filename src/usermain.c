#include "trekktecos.h"

bool lastState;
void setup()
{
    lastState = off;
    SetPinMode(GPIOC, 7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOC, 7, GPIO_VERY_HIGH_SPEED);
    SetPinMode(GPIOB, 7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB, 7, GPIO_VERY_HIGH_SPEED);
    SetPinMode(GPIOB, 14, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB, 14, GPIO_VERY_HIGH_SPEED);
}


void loop()
{
    //Blinky Example for Nucleo144-L496ZG
    TogglePinOutput(GPIOC, 7,  off);
    TogglePinOutput(GPIOB, 7,  on);
    TogglePinOutput(GPIOB, 14, off);
    lastState = off;
    
    Delay(500);

    TogglePinOutput(GPIOC, 7,  on);
    TogglePinOutput(GPIOB, 7,  off);
    TogglePinOutput(GPIOB, 14, on);
    lastState = on;

    Delay(500);

}