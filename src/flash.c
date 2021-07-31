#include "flash.h"
#include "register.h"

void ToggleDataCache(bool onOff)
{
    WriteIntoRegister(&(FLASH->ACR), onOff, 1, 10);
}

void ToggleInstructionCache(bool onOff)
{
    WriteIntoRegister(&(FLASH->ACR), onOff, 1, 9);
}

void TogglePrefetchBuffer(bool onOff)
{
    WriteIntoRegister(&(FLASH->ACR), onOff, 1, 8);
}

void SetFlashLatency(flash_latency_value_t latency)
{
    WriteIntoRegister(&(FLASH->ACR), latency, 3, 0);
}