#include "rcc.h"
#include "register.h"

//TODO Use Read Register in while loops

void Rcc_SetSystemClockSource (system_clock_source_t source)
{
    Register_WriteIntoRegister (
        SET_SYSTEM_CLOCK_SOURCE_REGISTER_ADDR, source, 
        SET_SYSTEM_CLOCK_SOURCE_VALUE_LENGTH, 
        SET_SYSTEM_CLOCK_SOURCE_REGISTER_OFFSET
    );
    while ( 
        !(SET_SYSTEM_CLOCK_SOURCE_STATUS_REGISTER & 
        (source << SET_SYSTEM_CLOCK_SOURCE_STATUS_REGISTER_OFFSET)) 
    ) 
    {
        //Empty
    }
}

void Rcc_ToggleMSI (bool b_onOff)
{
    uint32_t value = b_onOff ? 
        TOGGLE_MSI_VALUE_ON : TOGGLE_MSI_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_MSI_REGISTER_ADDR, value, TOGGLE_MSI_VALUE_LENGTH, 
        TOGGLE_MSI_REGISTER_OFFSET
    );
    while ( 
        !(TOGGLE_MSI_STATUS_REGISTER & 
        (value << TOGGLE_MSI_STATUS_REGISTER_OFFSET)) 
    )
    {
        //Empty
    } 
}

void Rcc_ToggleHSI16 (bool b_onOff)
{
    uint32_t value = b_onOff ? 
        TOGGLE_HSI_VALUE_ON : TOGGLE_HSI_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_HSI_REGISTER_ADDR, value, TOGGLE_HSI_VALUE_LENGTH, 
        TOGGLE_HSI_REGISTER_OFFSET
    );
    while ( 
        !(TOGGLE_HSI_STATUS_REGISTER & 
        (value << TOGGLE_HSI_STATUS_REGISTER_OFFSET)) 
    )
    {
        //Empty
    }
}

void Rcc_ToggleHSE (bool b_onOff)
{
    uint32_t value = b_onOff ? TOGGLE_HSE_VALUE_ON : TOGGLE_HSE_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_HSE_REGISTER_ADDR, value, TOGGLE_HSE_VALUE_LENGTH, 
        TOGGLE_HSE_REGISTER_OFFSET
    );
    while ( 
        !(TOGGLE_HSE_STATUS_REGISTER & 
        (value << TOGGLE_HSE_STATUS_REGISTER_OFFSET)) 
    ) 
    {
        //Empty
    }
}

void Rcc_ToggleHSEByPass (bool b_onOff)
{
    uint32_t value = b_onOff ? 
        TOGGLE_HSE_BYPASS_VALUE_ON : TOGGLE_HSE_BYPASS_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_HSE_BYPASS_REGISTER_ADDR, value, 
        TOGGLE_HSE_BYPASS_VALUE_LENGTH, TOGGLE_HSE_BYPASS_REGISTER_OFFSET
    );
    
}

void Rcc_TogglePLL (bool b_onOff)
{
    uint32_t value = b_onOff ? TOGGLE_PLL_VALUE_ON : TOGGLE_PLL_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_PLL_REGISTER_ADDR, value, TOGGLE_PLL_VALUE_LENGTH, 
        TOGGLE_PLL_REGISTER_OFFSET
    );
    while ( 
        !(TOGGLE_PLL_STATUS_REGISTER & 
        (value << TOGGLE_PLL_STATUS_REGISTER_OFFSET)) 
    )
    {
        //Empty
    } 
}

void Rcc_SetAHBPrescaler (ahb_prescaler_values_t dividionFactor)
{
    Register_WriteIntoRegister (
        SET_AHB_PRESCALER_REGISTER_ADDR, dividionFactor, 
        SET_AHB_PRESCALER_VALUE_LENGTH, SET_AHB_PRESCALER_REGISTER_OFFSET
    );
}

void Rcc_SetAPB1Prescaler (apb1_prescaler_value_t dividionFactor)
{
    Register_WriteIntoRegister (
        SET_APB1_PRESCALER_REGISTER_ADDR, dividionFactor, 
        SET_APB1_PRESCALER_VALUE_LENGTH, SET_APB1_PRESCALER_REGISTER_OFFSET
    );
}

void Rcc_SetAPB2Prescaler(apb2_prescaler_value_t dividionFactor)
{
    Register_WriteIntoRegister (
        SET_APB2_PRESCALER_REGISTER_ADDR, dividionFactor, 
        SET_APB2_PRESCALER_VALUE_LENGTH, SET_APB2_PRESCALER_REGISTER_OFFSET
    );
}

void Rcc_TogglePLLOutput (bool b_onOff)
{
    uint32_t value = b_onOff ? 
        TOGGLE_PLL_OUTPUT_VALUE_ON : TOGGLE_PLL_OUTPUT_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_PLL_OUTPUT_REGISTER_ADDR, value, TOGGLE_PLL_OUTPUT_VALUE_LENGTH,
        TOGGLE_PLL_OUTPUT_REGISTER_OFFSET
    );
}

void Rcc_SetPLLSource (pll_source_t source)
{
    Register_WriteIntoRegister (
        SET_PLL_SOURCE_REGISTER_ADDR, source, 
        SET_PLL_SOURCE_VALUE_LENGTH, SET_PLL_SOURCE_REGISTER_OFFSET
    );
}

void Rcc_SetPLLM (pllm_divider_value_t value)
{
    Register_WriteIntoRegister (
        SET_PLLM_REGISTER_ADDR, value, 
        SET_PLLM_VALUE_LENGTH, SET_PLLM_REGISTER_OFFSET
    );
}

void Rcc_SetPLLN (plln_multiplier_value_t value)
{
    Register_WriteIntoRegister (
        SET_PLLN_REGISTER_ADDR, value, 
        SET_PLLN_VALUE_LENGTH, SET_PLLN_REGISTER_OFFSET
    );
}

void Rcc_SetPLLR (pllr_divider_value_t value)
{
    Register_WriteIntoRegister (
        SET_PLLR_REGISTER_ADDR, value, SET_PLLR_VALUE_LENGTH,
        SET_PLLR_REGISTER_OFFSET
    );
}

void Rcc_TogglePowerInterfaceClock (bool b_onOff)
{
    uint32_t value = b_onOff ? TOGGLE_POWER_INTERFACE_CLOCK_VALUE_ON : 
        TOGGLE_POWER_INTERFACE_CLOCK_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_POWER_INTERFACE_CLOCK_REGISTER_ADDR, value, 
        TOGGLE_POWER_INTERFACE_CLOCK_VALUE_LENGTH, 
        TOGGLE_POWER_INTERFACE_CLOCK_REGISTER_OFFSET
    );
}

void Rcc_ToggleGpioClock(gpio_enable_port_t port, bool b_onOff)
{
    uint32_t value = b_onOff ? 
        TOGGLE_GPIO_CLOCK_VALUE_ON : TOGGLE_GPIO_CLOCK_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_GPIO_CLOCK_REGISTER_ADDR, value, 
        TOGGLE_GPIO_CLOCK_VALUE_LENGTH, port
    );
}