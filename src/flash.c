#include "flash.h"
#include "register.h"

void Flash_ToggleDataCache (bool b_onOff)
{
    uint32_t value = b_onOff ?
        TOGGLE_DATA_CACHE_VALUE_ON : TOGGLE_DATA_CACHE_VALUE_OFF;
    Register_WriteIntoRegister (
            TOGGLE_DATA_CACHE_REGISTER_ADDR, value, 
            TOGGLE_DATA_CACHE_VALUE_LENGTH, TOGGLE_DATA_CACHE_REGISTER_OFFSET
        );
}

void Flash_ToggleInstructionCache (bool b_onOff)
{
    uint32_t value = b_onOff ? 
        TOGGLE_INSTRUCTION_CACHE_VALUE_ON : TOGGLE_INSTRUCTION_CACHE_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_INSTRUCTION_CACHE_REGISTER_ADDR, value,
        TOGGLE_INSTRUCTION_CACHE_VALUE_LENGTH,
        TOGGLE_INSTRUCTION_CACHE_REGISTER_OFFSET
    );
}

void Flash_TogglePrefetchBuffer (bool b_onOff)
{
    uint32_t value = b_onOff ? 
        TOGGLE_PREFETCH_BUFFER_VALUE_ON : TOGGLE_PREFETCH_BUFFER_VALUE_OFF;
    Register_WriteIntoRegister (
        TOGGLE_PREFETCH_BUFFER_REGISTER_ADDR, value,
        TOGGLE_PREFETCH_BUFFER_VALUE_LENGTH, 
        TOGGLE_PREFETCH_BUFFER_REGISTER_OFFSET
    );
}

void Flash_SetFlashLatency (flash_latency_value_t latency)
{
    Register_WriteIntoRegister (
        SET_FLASH_LATENCY_REGISTER_ADDR, latency, 
        SET_FLASH_LATENCY_VALUE_LENGTH, SET_FLASH_LATENCY_REGISTER_OFFSET
    );
}