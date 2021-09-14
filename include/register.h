/**
 * @file register.h
 * 
 * @brief contains functions for manipulating registers
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef REGISTER_H
#define REGISTER_H

//Includes
#include "stdint.h"

/**
 * @brief Write a value with offset from the beginning into a register
 * 
 * @param registerAddr Address of the register. Must be a register address e.g &(RCC->CR)
 * @param value value which should be written into the register
 * @param bitSize bit length of the value e.g. if the value is 5 (0b101), the length is 3
 * @param offset offset from the beginning of the register
 */
void Register_WriteIntoRegister (volatile uint32_t* registerAddr, uint32_t value, uint32_t bitSize, uint32_t offset);

/**
 * @brief Read a value of an register
 * 
 * @param registerAddr Address of the register. Must be a register address e.g &(RCC->CR)
 * @param size bit length of the value e.g. if the value is 5 (0b101), the length is 3
 * @param offset offset from the beginning of the register where the value is located
 */
uint32_t Register_ReadRegister (const volatile uint32_t* registerAddr, uint32_t size, uint32_t offset);

#endif /* REGISTER_H */

/* END OF FILE */
