/**
 * @file register.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief contains functions for manipulating registers
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef REGISTER_H
#define REGISTER_H

//Includes
#include "stdint.h"

/**
 * @brief Write a value with of offset from the beginning into a register
 * 
 * @param registerAddr Address of the register. Must be a register address e.g &(RCC->CR)
 * @param value value which should be written into the register
 * @param bitSize bit length of the value e.g. if the value is 5 (0b101), the length is 3
 * @param offset offset from the beginning of the register
 */
void WriteIntoRegister( volatile uint32_t* registerAddr, uint32_t value, uint32_t bitSize, uint32_t offset);

#endif /* REGISTER_H */
