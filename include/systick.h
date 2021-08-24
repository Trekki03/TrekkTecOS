#ifndef SYSTICK_H
#define SYSTICK_H

#include <stdint.h>

extern volatile uint32_t micro_ticks;
extern volatile uint32_t milli_ticks;

/**
 * @brief Delay Function
 * 
 * Functions, doing nothing, that takes \p delayInMs time to execute. 
 * 
 * @param delayInMs Time in milliseconds of the delay
 */
void Delay(uint32_t delayInMs);

/**
 * @brief Delay Function
 * 
 * Functions, doing nothing, that takes \p delayinUs time to execute. 
 * 
 * @param delayinUs Time in microseconds of the delay
 */
void MicroDelay(uint32_t delayinUs);

#endif /* SYSTICK_H */
