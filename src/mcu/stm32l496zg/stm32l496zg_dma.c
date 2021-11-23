#include "mcu/stm32l496zg/stm32l496zg_dma.h"

 uint32_t* const dma_ccr_channels[7][2] =
{
        { ((uint32_t*) &(DMA1->CCR1)), ((uint32_t*) &(DMA2->CCR1)) },
        { ((uint32_t*) &(DMA1->CCR2)), ((uint32_t*) &(DMA2->CCR2)) },
        { ((uint32_t*) &(DMA1->CCR3)), ((uint32_t*) &(DMA2->CCR3)) },
        { ((uint32_t*) &(DMA1->CCR4)), ((uint32_t*) &(DMA2->CCR4)) },
        { ((uint32_t*) &(DMA1->CCR5)), ((uint32_t*) &(DMA2->CCR5)) },
        { ((uint32_t*) &(DMA1->CCR6)), ((uint32_t*) &(DMA2->CCR6)) },
        { ((uint32_t*) &(DMA1->CCR7)), ((uint32_t*) &(DMA2->CCR7)) }
};

uint32_t* const dma_cpar_channels[7][2] =
{
        { ((uint32_t*) &(DMA1->CPAR1)), ((uint32_t*) &(DMA2->CPAR1)) },
        { ((uint32_t*) &(DMA1->CPAR2)), ((uint32_t*) &(DMA2->CPAR2)) },
        { ((uint32_t*) &(DMA1->CPAR3)), ((uint32_t*) &(DMA2->CPAR3)) },
        { ((uint32_t*) &(DMA1->CPAR4)), ((uint32_t*) &(DMA2->CPAR4)) },
        { ((uint32_t*) &(DMA1->CPAR5)), ((uint32_t*) &(DMA2->CPAR5)) },
        { ((uint32_t*) &(DMA1->CPAR6)), ((uint32_t*) &(DMA2->CPAR6)) },
        { ((uint32_t*) &(DMA1->CPAR7)), ((uint32_t*) &(DMA2->CPAR7)) }
};

uint32_t* const dma_cmar_channels[7][2] =
        {
                { ((uint32_t*) &(DMA1->CMAR1)), ((uint32_t*) &(DMA2->CMAR1)) },
                { ((uint32_t*) &(DMA1->CMAR2)), ((uint32_t*) &(DMA2->CMAR2)) },
                { ((uint32_t*) &(DMA1->CMAR3)), ((uint32_t*) &(DMA2->CMAR3)) },
                { ((uint32_t*) &(DMA1->CMAR4)), ((uint32_t*) &(DMA2->CMAR4)) },
                { ((uint32_t*) &(DMA1->CMAR5)), ((uint32_t*) &(DMA2->CMAR5)) },
                { ((uint32_t*) &(DMA1->CMAR6)), ((uint32_t*) &(DMA2->CMAR6)) },
                { ((uint32_t*) &(DMA1->CMAR7)), ((uint32_t*) &(DMA2->CMAR7)) }
        };

