#include <systick.h>

volatile uint32_t milli_ticks = 0uL;
volatile uint32_t micro_ticks = 0uL;

void __attribute__ ((interrupt)) SysTick_Handler_isr(void)
{
    micro_ticks += 4uL;
    if( (micro_ticks % 1000uL) == 0uL)
    {
        milli_ticks++;
    } 
}

void Systick_Delay(uint32_t delayInMs)
{
    uint32_t timeAtStart = milli_ticks;
    while ((milli_ticks - timeAtStart) < delayInMs)
    {
        //Empty
    }
}

void Systick_MicroDelay(uint32_t delayinUs)
{
    uint32_t timeAtStart = micro_ticks;
    while ((micro_ticks - timeAtStart) < delayinUs)
    {
        //Empty
    }
}

uint32_t Systick_GetMicroTicks(void)
{
    return micro_ticks;
}

uint32_t Systick_GetMilliTicks(void)
{
    return milli_ticks;
}