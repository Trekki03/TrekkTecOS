#include "register.h"

void WriteIntoRegister( volatile uint32_t* const registerAddr, uint32_t value, uint32_t size, uint32_t offset)
{
    uint32_t clearValue = 0;
    for(int i = 0; i < size; i++)
    {
        clearValue = ((clearValue << 1) | 0b1);
    }
    *registerAddr &= ~(clearValue << offset);
    *registerAddr |= (value << offset);
}

uint32_t ReadRegister( volatile uint32_t* const registerAddr, uint32_t size, uint32_t offset)
{
    uint32_t value = *registerAddr, clearValue = 0;
    for (uint32_t i = 0; i < size; i++)
    {
        clearValue = (clearValue << 1) | 0b1;
    }
    return (value & (clearValue << offset)) >> offset;
}