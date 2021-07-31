#ifndef FLASH_H
#define FLASH_H

#ifdef STM32L452RE
    #include "stm32l452re.h"
#endif

#include "bool.h"

void ToggleDataCache(bool onOff);
void ToggleInstructionCache(bool onOff);
void TogglePrefetchBuffer(bool onOff);
void SetFlashLatency(flash_latency_value_t latency);

#endif /* FLASH_H */
