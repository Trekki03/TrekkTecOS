#ifndef REGISTER_H
#define REGISTER_H

#include "stdint.h"

void WriteIntoRegister( volatile uint32_t* registerAddr, uint32_t value, uint32_t bitSize, uint32_t offset);

#endif /* REGISTER_H */
