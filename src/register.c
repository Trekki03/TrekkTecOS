#include "register.h"

void Register_WriteIntoRegister (
    volatile uint32_t* const registerAddr, uint32_t value, 
    uint32_t size, uint32_t offset
)
{
    uint32_t clearValue = 0uL;

    for(int index = 0uL; index < size; index++)
    {
        clearValue = ((clearValue << 1uL) | 0b1);
    }

    *registerAddr &= ~(clearValue << offset);
    *registerAddr |= (value << offset);
}

uint32_t Register_ReadRegister ( 
    const volatile uint32_t* const registerAddr, uint32_t size, uint32_t offset
)
{
    uint32_t value = *registerAddr; 
    uint32_t clearValue = 0uL;

    for (uint32_t index = 0uL; index < size; index++)
    {
        clearValue = (clearValue << 1) | 0b1uL;
    }
    
    return (value & (clearValue << offset)) >> offset;
}