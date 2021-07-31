#ifndef POWER_H
#define POWER_H

#ifdef STM32L452RE
    #include "stm32l452re.h"
#endif

void SetVoltageRegulatorScale(volate_regulator_scale_t scale);

#endif /* POWER_H */
