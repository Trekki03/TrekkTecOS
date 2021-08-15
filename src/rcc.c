#include "rcc.h"
#include "register.h"

void SetSystemClockSource(system_clock_source_t source)
{
    WriteIntoRegister(SET_SYSTEM_CLOCK_SOURCE_REGISTER_ADDR, source, SET_SYSTEM_CLOCK_SOURCE_VALUE_LENGTH, SET_SYSTEM_CLOCK_SOURCE_REGISTER_OFFSET);
    while( !(SET_SYSTEM_CLOCK_SOURCE_STATUS_REGISTER & (source << SET_SYSTEM_CLOCK_SOURCE_STATUS_REGISTER_OFFSET)) );
}

void ToggleMSI(bool onOff)
{
    uint32_t value = onOff ? TOGGLE_MSI_VALUE_ON : TOGGLE_MSI_VALUE_OFF;
    WriteIntoRegister(TOGGLE_MSI_REGISTER_ADDR, value, TOGGLE_MSI_VALUE_LENGTH, TOGGLE_MSI_REGISTER_OFFSET);
    while( !(TOGGLE_MSI_STATUS_REGISTER & (value << TOGGLE_MSI_STATUS_REGISTER_OFFSET)) ); 
}

void ToggleHSI(bool onOff)
{
    uint32_t value = onOff ? TOGGLE_HSI_VALUE_ON : TOGGLE_HSI_VALUE_OFF;
    WriteIntoRegister(TOGGLE_HSI_REGISTER_ADDR, value, TOGGLE_HSI_VALUE_LENGTH, TOGGLE_HSI_REGISTER_OFFSET);
    while( !(TOGGLE_HSI_STATUS_REGISTER & (value << TOGGLE_HSI_STATUS_REGISTER_OFFSET)) );  
}

void ToggleHSE(bool onOff)
{
    uint32_t value = onOff ? TOGGLE_HSE_VALUE_ON : TOGGLE_HSE_VALUE_OFF;
    WriteIntoRegister(TOGGLE_HSE_REGISTER_ADDR, value, TOGGLE_HSE_VALUE_LENGTH, TOGGLE_HSE_REGISTER_OFFSET);
    while( !(TOGGLE_HSE_STATUS_REGISTER & (value << TOGGLE_HSE_STATUS_REGISTER_OFFSET)) ); 
}

void TogglePLL(bool onOff)
{
    uint32_t value = onOff ? TOGGLE_PLL_VALUE_ON : TOGGLE_PLL_VALUE_OFF;
    WriteIntoRegister(TOGGLE_PLL_REGISTER_ADDR, value, TOGGLE_PLL_VALUE_LENGTH, TOGGLE_PLL_REGISTER_OFFSET);
    while( !(TOGGLE_PLL_STATUS_REGISTER & (value << TOGGLE_PLL_STATUS_REGISTER_OFFSET)) ); 
}

void SetAHBPrescaler(ahb_prescaler_values_t dividionFactor)
{
    WriteIntoRegister(SET_AHB_PRESCALER_REGISTER_ADDR, dividionFactor, SET_AHB_PRESCALER_VALUE_LENGTH, SET_AHB_PRESCALER_REGISTER_OFFSET);
}

void SetAPB1Prescaler(apb1_prescaler_value_t dividionFactor)
{
    WriteIntoRegister(SET_APB1_PRESCALER_REGISTER_ADDR, dividionFactor, SET_APB1_PRESCALER_VALUE_LENGTH, SET_APB1_PRESCALER_REGISTER_OFFSET);
}

void SetAPB2Prescaler(apb2_prescaler_value_t dividionFactor)
{
    WriteIntoRegister(SET_APB2_PRESCALER_REGISTER_ADDR, dividionFactor, SET_APB2_PRESCALER_VALUE_LENGTH, SET_APB2_PRESCALER_REGISTER_OFFSET);
}

void TogglePLLOutput(bool onOff)
{
    uint32_t value = onOff ? TOGGLE_PLL_OUTPUT_VALUE_ON : TOGGLE_PLL_OUTPUT_VALUE_OFF;
    WriteIntoRegister(TOGGLE_PLL_OUTPUT_REGISTER_ADDR, value, TOGGLE_PLL_OUTPUT_VALUE_LENGTH, TOGGLE_PLL_OUTPUT_REGISTER_OFFSET);
}

void SetPLLSource(pll_source_t source)
{
    WriteIntoRegister(SET_PLL_SOURCE_REGISTER_ADDR, source, SET_PLL_SOURCE_VALUE_LENGTH, SET_PLL_SOURCE_REGISTER_OFFSET);
}

void SetPLLM(pllm_divider_value_t value)
{
    WriteIntoRegister(SET_PLLM_REGISTER_ADDR, value, SET_PLLM_VALUE_LENGTH, SET_PLLM_REGISTER_OFFSET);
}

void SetPLLN(plln_multiplier_value_t value)
{
    WriteIntoRegister(SET_PLLN_REGISTER_ADDR, value, SET_PLLN_VALUE_LENGTH, SET_PLLN_REGISTER_OFFSET);
}

void SetPLLR(pllr_divider_value_t value)
{
    WriteIntoRegister(SET_PLLR_REGISTER_ADDR, value, SET_PLLR_VALUE_LENGTH, SET_PLLR_REGISTER_OFFSET);
}

void TogglePowerInterfaceClock(bool onOff)
{
    uint32_t value = onOff ? TOGGLE_POWER_INTERFACE_CLOCK_VALUE_ON : TOGGLE_POWER_INTERFACE_CLOCK_VALUE_OFF;
    WriteIntoRegister(TOGGLE_POWER_INTERFACE_CLOCK_REGISTER_ADDR, value, TOGGLE_POWER_INTERFACE_CLOCK_VALUE_LENGTH, TOGGLE_POWER_INTERFACE_CLOCK_REGISTER_OFFSET);
}

void ToggleGpioClock(gpio_enable_port_t port, bool onOff)
{
    uint32_t value = onOff ? TOGGLE_GPIO_CLOCK_VALUE_ON : TOGGLE_GPIO_CLOCK_VALUE_OFF;
    WriteIntoRegister(TOGGLE_GPIO_CLOCK_REGISTER_ADDR, value, TOGGLE_GPIO_CLOCK_VALUE_LENGTH, port);
}