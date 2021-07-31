#include "power.h"
#include "register.h"

void SetVoltageRegulatorScale(volate_regulator_scale_t scale)
{
    WriteIntoRegister(&(PWR->CR1), scale, 2, 9);
}