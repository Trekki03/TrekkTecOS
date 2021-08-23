/**
 * @file rcc.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief This file contains the functions concerning the rcc registers
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef RCC_H
#define RCC_H

//Includes
#include "bool.h"
#ifdef STM32L452RE
    #include "mcu/stm32l452re.h"
#endif
#ifdef STM32L496ZG
#include "mcu/stm32l496zg.h"
#endif

/**
 * @brief selects, which source should be used for the SysClock
 * 
 * @param source 
 */
void SetSystemClockSource(system_clock_source_t source);





/**
 * @brief enables or disables the MSI (Multispeed Interneal Oscilator)
 * 
 * @param onOff on or off
 */
void ToggleMSI(bool onOff);

/**
 * @brief enables or disables the HSI16 (16MHz Internal Oscilator)
 * 
 * @param onOff on or off
 */
void ToggleHSI16(bool onOff);

/**
 * @brief enables or disables the HSE (External Oscilator)
 * 
 * @param onOff on or off
 */
void ToggleHSE(bool onOff);

/**
 * @brief enables or disables the HSE Bypass (On if HSE is a clock source, Off if HSE is a oscillator)
 * 
 * @param onOff 
 */
void ToggleHSEByPass(bool onOff);


/**
 * @brief sets the value of the AHB Prescaler
 * 
 * @param dividionFactor dividion factor value
 */
void SetAHBPrescaler(ahb_prescaler_values_t dividionFactor);

/**
 * @brief sets the value of the APB1 Prescaler
 * 
 * @param dividionFactor dividion factor value
 */
void SetAPB1Prescaler(apb1_prescaler_value_t dividionFactor);

/**
 * @brief sets the value of the APB2 Prescaler
 * 
 * @param dividionFactor dividion factor value
 */
void SetAPB2Prescaler(apb2_prescaler_value_t dividionFactor);





/**
 * @brief enables or disables the main pll
 * 
 * @param onOff pll on or off
 */
void TogglePLL(bool onOff);

/**
 * @brief enables or disables the main pll output
 * 
 * @param onOff pll output on or off
 */
void TogglePLLOutput(bool onOff);

/**
 * @brief Sets the main pll source
 * 
 * @param source which main pll input
 */
void SetPLLSource(pll_source_t source);

/**
 * @brief sets the value of the pllm divider
 * 
 * @param value dividion factor value
 */
void SetPLLM(pllm_divider_value_t value);

/**
 * @brief sets the value of the plln multiplier
 * 
 * @param value multiplier factor value
 */
void SetPLLN(plln_multiplier_value_t value);

/**
 * @brief sets the value of the pllr divider
 * 
 * @param value dividion factor value
 */
void SetPLLR(pllr_divider_value_t value);





/**
 * @brief enables or disables the power interface clock
 * 
 * @param onOff power interface on or off
 */
void TogglePowerInterfaceClock(bool onOff);

/**
 * @brief enables or disables the gpio interface clock
 * 
 * @param port which gpio interface should be toggled
 * @param onOff gpio interface on or off
 */
void ToggleGpioClock(gpio_enable_port_t port, bool onOff);

#endif /* RCC_H */
