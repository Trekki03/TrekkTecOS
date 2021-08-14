/**
 * @file trekktecos.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief Contains all the includes of the TrekkTecOS Framework
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef TREKKTECOS_H
#define TREKKTECOS_H

#include "flash.h"
#include "gpio.h"
#include "power.h"
#include "rcc.h"
#include "bool.h"
#include "register.h"

//TODO Put Systick (with Handler) in own File/Header
extern volatile uint32_t micro_ticks;
extern volatile uint32_t milli_ticks;

#endif /* TREKKTECOS_H */
