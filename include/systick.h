#ifndef SYSTICK_H
#define SYSTICK_H

#include <stdint.h>

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

/**
 * @brief Get the Micro Ticks 
 * 
 * @return uint32_t micro ticks
 */
uint32_t getMicroTicks(void);

/**
 * @brief Get the Milli Ticks
 * 
 * @return uint32_t milli ticks
 */
uint32_t getMilliTicks(void);

#endif /* SYSTICK_H */

/* END OF FILE */
