/**
 * @file power.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief This file contains the functions concerning the power registers
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef POWER_H
#define POWER_H

//Includes
#ifdef STM32L452RE
    #include "stm32l452re.h"
#endif

/**
 * @brief Sets the Voltage Regulator Scale
 * 
 * @param scale scale which should be set
 */
void SetVoltageRegulatorScale(volate_regulator_scale_t scale);

#endif /* POWER_H */
