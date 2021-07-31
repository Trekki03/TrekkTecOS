#include "stm32l452re.h"

// Register Struct Adresses
rcc_struct_t*       RCC     = (rcc_struct_t*)       0x40021000;
gpio_struct_t*      GPIOA   = (gpio_struct_t*)      0x48000000;
gpio_struct_t*      GPIOB   = (gpio_struct_t*)      0x48000400;
gpio_struct_t*      GPIOC   = (gpio_struct_t*)      0x48000800;
gpio_struct_t*      GPIOD   = (gpio_struct_t*)      0x48000C00;
gpio_struct_t*      GPIOE   = (gpio_struct_t*)      0x48001000;
gpio_struct_t*      GPIOH   = (gpio_struct_t*)      0x48001C00;
pwr_struct_t*       PWR     = (pwr_struct_t*)       0x40007000;
flash_struct_t*     FLASH   = (flash_struct_t*)     0x40022000;
systick_struct_t*   STK     = (systick_struct_t*)   0xE000E010;