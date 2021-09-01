#include "mcu/stm32l496zg.h"

// Register Struct Adresses
rcc_struct_t*        const RCC      = (rcc_struct_t*        const)  0x40021000;

gpio_struct_t*       const GPIOA    = (gpio_struct_t*       const)  0x48000000;
gpio_struct_t*       const GPIOB    = (gpio_struct_t*       const)  0x48000400;
gpio_struct_t*       const GPIOC    = (gpio_struct_t*       const)  0x48000800;
gpio_struct_t*       const GPIOD    = (gpio_struct_t*       const)  0x48000C00;
gpio_struct_t*       const GPIOE    = (gpio_struct_t*       const)  0x48001000;
gpio_struct_t*       const GPIOF    = (gpio_struct_t*       const)  0x48001400;
gpio_struct_t*       const GPIOG    = (gpio_struct_t*       const)  0x48001800;
gpio_struct_t*       const GPIOH    = (gpio_struct_t*       const)  0x48001C00;
gpio_struct_t*       const GPIOI    = (gpio_struct_t*       const)  0x48002000;

pwr_struct_t*        const PWR      = (pwr_struct_t*        const)  0x40007000;
flash_struct_t*      const FLASH    = (flash_struct_t*      const)  0x40022000;
systick_struct_t*    const STK      = (systick_struct_t*    const)  0xE000E010;

usart_struct_t*      const USART1   = (usart_struct_t*      const)  0x40013800;
usart_struct_t*      const USART2   = (usart_struct_t*      const)  0x40004400;
usart_struct_t*      const USART3   = (usart_struct_t*      const)  0x40004800;

dma_struct_t* 		 const DMA1 	= (dma_struct_t* 		const)  0x40020000;
dma_struct_t* 		 const DMA2 	= (dma_struct_t* 		const)  0x40020400;
//GPIO Pins
