#include "rcc.h"
#include "register.h"

void SetSystemClockSource(system_clock_source_t source)
{
    WriteIntoRegister(&(RCC->CFGR), source, 2, 0);
    while( !(RCC->CFGR & (source)) );
}

void ToggleMSI(bool onOff)
{
    WriteIntoRegister(&(RCC->CR), onOff, 1, 0);
    while( !(RCC->CR & (onOff << 1)) ); 
}

void ToggleHSI(bool onOff)
{
    WriteIntoRegister(&(RCC->CR), onOff, 1, 8);
    while( !(RCC->CR & (onOff << 10)) ); 
}

void ToggleHSE(bool onOff)
{
    WriteIntoRegister(&(RCC->CR), onOff, 1, 16);
    while( !(RCC->CR & (onOff << 17)) ); 
}

void TogglePLL(bool onOff)
{
    WriteIntoRegister(&(RCC->CR), onOff, 1, 24);
    while( !(RCC->CR & (onOff << 25)) ); 
}

void SetAHBPrescaler(ahb_prescaler_values_t dividionFactor)
{
    WriteIntoRegister(&(RCC->CFGR), dividionFactor, 4, 4);
}

void SetAPB1Prescaler(apb1_prescaler_value_t dividionFactor)
{
    WriteIntoRegister(&(RCC->CFGR), dividionFactor, 3, 8);
}

void SetAPB2Prescaler(apb2_prescaler_value_t dividionFactor)
{
    WriteIntoRegister(&(RCC->CFGR), dividionFactor, 3, 11);
}

void TogglePLLOutput(bool onOff)
{
    WriteIntoRegister(&(RCC->PLLCFGR), onOff, 1, 24);
}

void SetPLLSource(pll_source_t source)
{
    WriteIntoRegister(&(RCC->PLLCFGR), source, 2, 0);
}

void SetPLLM(pllm_divider_value_t value)
{
    WriteIntoRegister(&(RCC->PLLCFGR), value, 3, 4);
}

void SetPLLN(plln_divider_value_t value)
{
    WriteIntoRegister(&(RCC->PLLCFGR), value, 7, 8);
}

void SetPLLR(pllr_divider_value_t value)
{
    WriteIntoRegister(&(RCC->PLLCFGR), value, 2, 25);
}

void TogglePowerInterfaceClock(bool onOff)
{
    WriteIntoRegister(&(RCC->APB1ENR1), onOff, 1, 28);
}
