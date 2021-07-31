#include "nucleduino.h"
#include "register.h"
void setup(void);
void loop(void);

void InitalSetup()
{
    ToggleHSE(true);
    TogglePowerInterfaceClock(true);
    SetVoltageRegulatorScale(VOLTAGE_SCALE_2);
    ToggleDataCache(true);
    ToggleInstructionCache(true);
    TogglePrefetchBuffer(true);
    SetFlashLatency(FLASH_LATENCY_4_WAIT_STATES);
    SetAHBPrescaler(AHB_NOT_DIVIDED);
    SetAPB1Prescaler(APB1_NOT_DIVIDED);
    SetAPB2Prescaler(APB2_NOT_DIVIDED);
    SetPLLSource(PLL_SOURCE_HSE);
    SetPLLM(PLLM_DIVIDER_NO_DIVIDER);
    SetPLLN(PLLN_DIVIDER_20);
    SetPLLR(PLLR_DIVIDER_2);
    TogglePLLOutput(true);
    TogglePLL(true);
    SetSystemClockSource(SYSCLOCK_PLL_SOURCE);

    //Enable GPIO-A:
    WriteIntoRegister(&(RCC->AHB2ENR), 0b1, 1, 0);

    //Set GPIO-A 8 to AF:
    WriteIntoRegister(&(GPIOA->MODER), 0b10, 2, 16);

    //Set GPIO-A 8 to Hight Speed:
    WriteIntoRegister(&(GPIOA->OSPEEDR), 0b11, 2, 16);

    //Set MCO Divider to 1:
    WriteIntoRegister(&(RCC->CFGR), 0b000, 3, 18);

    //Enable MCO Sysclock outpt:
    WriteIntoRegister(&(RCC->CFGR), 0b0001, 4, 24);

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