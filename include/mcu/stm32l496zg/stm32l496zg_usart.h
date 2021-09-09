#ifndef STM32L496ZG_USART_H
#define STM32L496ZG_USART_H

#include "stdint.h"

/*********************************************************************
 * 
 * USART REGISTER
 * 
 ********************************************************************/

typedef struct
{
    volatile uint32_t CR1;                          ///< USART control register 1    
    volatile uint32_t CR2;                          ///< USART control register 2
    volatile uint32_t CR3;                          ///< USART control register 3
    volatile uint32_t BRR;                          ///< USART baude rate register
    volatile uint32_t GTPR;                         ///< USART guard time and prescaler register
    volatile uint32_t RTOR;                         ///< USART reciever timeout register
    volatile uint32_t RQR;                          ///< USART request register
    volatile uint32_t ISR;                          ///< USART interrupt and status register
    volatile uint32_t ICR;                          ///< USART interrupt flag clear register
    volatile uint32_t RDR;                          ///< USART reciever data register
    volatile uint32_t TDR;                          ///< USART tramit data register

} usart_struct_t;

extern usart_struct_t*        const USART1;              ///< USART base address struct
extern usart_struct_t*        const USART2;              ///< USART base address struct
extern usart_struct_t*        const USART3;              ///< USART base address struct

/*********************************************************************
 * 
 * TypeDefs
 * 
 ********************************************************************/


/*********************************************************************
 * 
 * Values for functions
 * 
 ********************************************************************/



#endif /* STM32L496ZG_USART_H */
