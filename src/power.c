#include "power.h"
#include "register.h"

void SetVoltageRegulatorScale(volate_regulator_scale_t scale)
{
    WriteIntoRegister(SET_VOLTAGE_REGULATOR_SCALE_REGISTER_ADDR, scale, SET_VOLTAGE_REGULATOR_SCALE_VALUE_LENGTH, SET_VOLTAGE_REGULATOR_SCALE_REGISTER_OFFSET);
}