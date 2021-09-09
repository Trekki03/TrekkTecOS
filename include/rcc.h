/**
 * @file rcc.h
 * 
 * @brief This file contains the functions concerning the rcc registers
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef RCC_H
#define RCC_H

// MCU specific includes
#ifdef STM32L496ZG
#   include "mcu/stm32l496zg.h"
#endif

#include "bool.h"

/**
 * @brief selects, which source should be used for the SysClock
 * 
 * @param source 
 */
void Rcc_SetSystemClockSource (system_clock_source_t source);

/**
 * @brief enables or disables the MSI (Multispeed Interneal Oscilator)
 * 
 * @param onOff on or off
 */
void Rcc_ToggleMSI (bool onOff);

/**
 * @brief enables or disables the HSI16 (16MHz Internal Oscilator)
 * 
 * @param onOff on or off
 */
void Rcc_ToggleHSI16 (bool onOff);

/**
 * @brief enables or disables the HSE (External Oscilator)
 * 
 * @param onOff on or off
 */
void Rcc_ToggleHSE (bool onOff);

/**
 * @brief enables or disables the HSE Bypass (On if HSE is a clock source, Off if HSE is a oscillator)
 * 
 * @param onOff 
 */
void Rcc_ToggleHSEByPass (bool onOff);

/**
 * @brief sets the value of the AHB Prescaler
 * 
 * @param dividionFactor dividion factor value
 */
void Rcc_SetAHBPrescaler (ahb_prescaler_values_t dividionFactor);

/**
 * @brief sets the value of the APB1 Prescaler
 * 
 * @param dividionFactor dividion factor value
 */
void Rcc_SetAPB1Prescaler (apb1_prescaler_value_t dividionFactor);

/**
 * @brief sets the value of the APB2 Prescaler
 * 
 * @param dividionFactor dividion factor value
 */
void Rcc_SetAPB2Prescaler (apb2_prescaler_value_t dividionFactor);

/**
 * @brief enables or disables the main pll
 * 
 * @param onOff pll on or off
 */
void Rcc_TogglePLL (bool onOff);

/**
 * @brief enables or disables the main pll output
 * 
 * @param onOff pll output on or off
 */
void Rcc_TogglePLLOutput (bool onOff);

/**
 * @brief Sets the main pll source
 * 
 * @param source which main pll input
 */
void Rcc_SetPLLSource (pll_source_t source);

/**
 * @brief sets the value of the pllm divider
 * 
 * @param value dividion factor value
 */
void Rcc_SetPLLM (pllm_divider_value_t value);

/**
 * @brief sets the value of the plln multiplier
 * 
 * @param value multiplier factor value
 */
void Rcc_SetPLLN (plln_multiplier_value_t value);

/**
 * @brief sets the value of the pllr divider
 * 
 * @param value dividion factor value
 */
void Rcc_SetPLLR (pllr_divider_value_t value);

/**
 * @brief enables or disables the power interface clock
 * 
 * @param onOff power interface on or off
 */
void Rcc_TogglePowerInterfaceClock (bool b_onOff);

/**
 * @brief enables or disables the gpio interface clock
 * 
 * @param port which gpio interface should be toggled
 * @param onOff gpio interface on or off
 */
void Rcc_ToggleGpioClock (gpio_enable_port_t port, bool b_onOff);

#endif /* RCC_H */

/* END OF FILE */
