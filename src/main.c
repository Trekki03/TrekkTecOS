#include "trekktecos.h"
#include "register.h"
void setup(void);
void loop(void);

volatile uint32_t milli_ticks;
volatile uint32_t micro_ticks;
void InitalSetup()
{
    milli_ticks = 0;
    micro_ticks = 0;
    ToggleHSE(on);
    TogglePowerInterfaceClock(on);
    SetVoltageRegulatorScale(VOLTAGE_SCALE_2);
    ToggleDataCache(on);
    ToggleInstructionCache(on);
    TogglePrefetchBuffer(on);
    SetFlashLatency(FLASH_LATENCY_4_WAIT_STATES);
    SetAHBPrescaler(AHB_NOT_DIVIDED);
    SetAPB1Prescaler(APB1_NOT_DIVIDED);
    SetAPB2Prescaler(APB2_NOT_DIVIDED);
    SetPLLSource(PLL_SOURCE_HSE);
    SetPLLM(PLLM_DIVIDER_NO_DIVIDER);
    SetPLLN(PLLN_DIVIDER_20);
    SetPLLR(PLLR_DIVIDER_2);
    TogglePLLOutput(on);
    TogglePLL(on);
    SetSystemClockSource(SYSCLOCK_PLL_SOURCE);
    ToggleGpioClock(GPIO_A_ENABLE_PORT, on);
    ToggleGpioClock(GPIO_B_ENABLE_PORT, on);
    ToggleGpioClock(GPIO_C_ENABLE_PORT, on);
    ToggleGpioClock(GPIO_D_ENABLE_PORT, on);
    ToggleGpioClock(GPIO_E_ENABLE_PORT, on);
    ToggleGpioClock(GPIO_H_ENABLE_PORT, on);



    WriteIntoRegister(&(GPIOA->MODER), 0b10, 2, 16);
    SetPinMode(GPIOA, 8, GPIO_ALTERNATE_FUNCTION_MODE);
    SetPinSpeed(GPIOA, 8, GPIO_VERY_HIGH_SPEED);



    //Set MCO Divider to 1:
    WriteIntoRegister(&(RCC->CFGR), 0b000, 3, 18);
    //Enable MCO Sysclock outpt:
    WriteIntoRegister(&(RCC->CFGR), 0b0001, 4, 24);


    WriteIntoRegister(&(STK->CTRL), 0b1, 1, 0);
    WriteIntoRegister(&(STK->CTRL), 0b1, 1, 1);
    WriteIntoRegister(&(STK->CTRL), 0b1, 1, 2);
    WriteIntoRegister(&(STK->LOAD), 319, 24, 0);
    WriteIntoRegister(&(STK->VAL), 0b0, 32, 0);
}


void SysTick_Handler(void)
{
    micro_ticks += 4;
    if( (micro_ticks % 1000) == 0)
    {
        milli_ticks++;
    }
}


int main(void)
{
    InitalSetup();
    setup();

    while (1)
    {

        loop();
    }
    return 0;
}
