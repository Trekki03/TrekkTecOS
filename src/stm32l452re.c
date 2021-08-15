#include "stm32l452re.h"

// Register Struct Adresses
rcc_struct_t*        const RCC      = (rcc_struct_t*        const)  0x40021000;
gpio_struct_t*       const GPIOA    = (gpio_struct_t*       const)  0x48000000;
gpio_struct_t*       const GPIOB    = (gpio_struct_t*       const)  0x48000400;
gpio_struct_t*       const GPIOC    = (gpio_struct_t*       const)  0x48000800;
gpio_struct_t*       const GPIOD    = (gpio_struct_t*       const)  0x48000C00;
gpio_struct_t*       const GPIOE    = (gpio_struct_t*       const)  0x48001000;
gpio_struct_t*       const GPIOH    = (gpio_struct_t*       const)  0x48001C00;
pwr_struct_t*        const PWR      = (pwr_struct_t*        const)  0x40007000;
flash_struct_t*      const FLASH    = (flash_struct_t*      const)  0x40022000;
systick_struct_t*    const STK      = (systick_struct_t*    const)  0xE000E010;