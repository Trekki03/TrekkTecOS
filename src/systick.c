#include <systick.h>
volatile uint32_t milli_ticks = 0;
volatile uint32_t micro_ticks = 0;

void SysTick_Handler(void)
{
    micro_ticks += 4;
    if( (micro_ticks % 1000) == 0)
    {
        milli_ticks++;
    }
}

void Delay(uint32_t delayInMs)
{
    uint32_t timeAtStart = milli_ticks;
    while ((milli_ticks - timeAtStart) < delayInMs);
}

void MicroDelay(uint32_t delayinUs)
{
    uint32_t timeAtStart = micro_ticks;
    while ((micro_ticks - timeAtStart) < delayinUs);
}