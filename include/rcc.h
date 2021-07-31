#ifndef RCC_H
#define RCC_H

#include "bool.h"

#ifdef STM32L452RE
    #include "stm32l452re.h"
#endif

void SetSystemClockSource(system_clock_source_t source);
void ToggleMSI(bool onOff);
void ToggleHSI16(bool onOff);
void ToggleHSE(bool onOff);
void TogglePLL(bool onOff);
void SetAHBPrescaler(ahb_prescaler_values_t dividionFactor);
void SetAPB1Prescaler(apb1_prescaler_value_t dividionFactor);
void SetAPB2Prescaler(apb2_prescaler_value_t dividionFactor);

void TogglePLLOutput(bool onOff);
void SetPLLSource(pll_source_t source);
void SetPLLM(pllm_divider_value_t value);
void SetPLLN(plln_divider_value_t value);
void SetPLLR(pllr_divider_value_t value);

void TogglePowerInterfaceClock(bool onOff);
#endif /* RCC_H */
