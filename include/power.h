/**
 * @file power.h
 * 
 * @brief This file contains the functions concerning the power registers
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef POWER_H
#define POWER_H

// MCU specific includes
#ifdef STM32L496ZG
#   include "mcu/stm32l496zg.h"
#endif

/**
 * @brief Sets the Voltage Regulator Scale
 * 
 * @param scale scale which should be set
 */
void Power_SetVoltageRegulatorScale (volate_regulator_scale_t scale);

#endif /* POWER_H */

/* END OF FILE */
