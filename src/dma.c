#include "dma.h"
#include "register.h"
#include "rcc.h"
#include "bool.h"

//Helper Functions
uint32_t* Local_GetCcrRegister(uint32_t dmaNumber, uint32_t dmaChannelNumber)
{
    return dma_ccr_channels[dmaChannelNumber-1][dmaNumber-1];
}

uint32_t* Local_GetCparRegister(uint32_t dmaNumber, uint32_t dmaChannelNumber)
{
    return dma_cpar_channels[dmaChannelNumber-1][dmaNumber-1];
}

uint32_t* Local_GetCmarRegister(uint32_t dmaNumber, uint32_t dmaChannelNumber)
{
    return dma_cmar_channels[dmaChannelNumber-1][dmaNumber-1];
}

//Functions
void Dma_ToggleTransferCompleteInterrupt(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool onOff)
{

    uint32_t* registerAddr = Local_GetCcrRegister(dmaNumber, dmaChannelNumber);
    uint32_t value = onOff ? TOGGLE_TRANSFER_COMPLETE_INTERRUPT_VALUE_ON : TOGGLE_TRANSFER_COMPLETE_INTERRUPT_VALUE_OFF;

    Register_WriteIntoRegister
    (
        registerAddr, value, TOGGLE_TRANSFER_COMPLETE_INTERRUPT_VALUE_LENGTH,
        TOGGLE_TRANSFER_COMPLETE_INTERRUPT_OFFSET
    );

}

void Dma_SetTransferDirection(uint32_t dmaNumber, uint32_t dmaChannelNumber, dma_transfer_direction_t direction)
{
    uint32_t* registerAddr = Local_GetCcrRegister(dmaNumber, dmaChannelNumber);

    Register_WriteIntoRegister
    (
        registerAddr, direction,
        SET_TRANSFER_DIRECTION_VALUE_LENGTH, SET_TRANSFER_DIRECTION_OFFSET
    );
}

void Dma_ToggleCircularMode(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool onOff)
{
    uint32_t* registerAddr = Local_GetCcrRegister(dmaNumber, dmaChannelNumber);
    uint32_t value = onOff ? TOGGLE_CIRCULAR_MODE_VALUE_ON : TOGGLE_CIRCULAR_MODE_VALUE_OFF;
    Register_WriteIntoRegister
    (
        registerAddr, value,
        TOGGLE_CIRCULAR_MODE_VALUE_LENGTH, TOGGLE_CIRCULAR_MODE_OFFSET
    );

}

void Dma_TogglePeripheralIncrement(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool onOff)
{
    uint32_t* registerAddr = Local_GetCcrRegister(dmaNumber, dmaChannelNumber);
    uint32_t value = onOff ? TOGGLE_PERIPHERAL_INCREMENT_VALUE_ON : TOGGLE_PERIPHERAL_INCREMENT_VALUE_OFF;
    Register_WriteIntoRegister
            (
                    registerAddr, value,
                    TOGGLE_PERIPHERAL_INCREMENT_VALUE_LENGTH, TOGGLE_PERIPHERAL_INCREMENT_OFFSET
            );
}

void Dma_ToggleMemoryIncrement(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool onOff)
{
    uint32_t* registerAddr = Local_GetCcrRegister(dmaNumber, dmaChannelNumber);
    uint32_t value = onOff ? TOGGLE_MEMORY_INCREMENT_VALUE_ON : TOGGLE_MEMORY_INCREMENT_VALUE_OFF;
    Register_WriteIntoRegister
            (
                    registerAddr, value,
                    TOGGLE_MEMORY_INCREMENT_VALUE_LENGTH, TOGGLE_MEMORY_INCREMENT_OFFSET
            );
}

void Dma_SetPeripheralSize(uint32_t dmaNumber, uint32_t dmaChannelNumber, peripheral_size_t dataSize)
{
    uint32_t* registerAddr = Local_GetCcrRegister(dmaNumber, dmaChannelNumber);
    Register_WriteIntoRegister(registerAddr, dataSize, SET_PERIPHERAL_SIZE_VALUE_LENGTH, SET_PERIPHERAL_SIZE_OFFSET);
}

void Dma_SetChannelPriority(uint32_t dmaNumber, uint32_t dmaChannelNumber, channel_priority_t priority)
{
    uint32_t* registerAddr = Local_GetCcrRegister(dmaNumber, dmaChannelNumber);
    Register_WriteIntoRegister(registerAddr, priority, SET_CHANNEL_PRIORITY_VALUE_LENGTH, SET_CHANNEL_PRIORITY_OFFSET);
}

void Dma_ToggleMemToMemMode(uint32_t dmaNumber, uint32_t dmaChannelNumber, bool memoryToMemoryMode)
{
    uint32_t* registerAddr = Local_GetCcrRegister(dmaNumber, dmaChannelNumber);
    uint32_t value = memoryToMemoryMode ?
        TOGGLE_MEM_TO_MEM_MODE_VALUE_ON : TOGGLE_MEM_TO_MEM_MODE_VALUE_OFF;
    Register_WriteIntoRegister(registerAddr, value, TOGGLE_MEM_TO_MEM_MODE_VALUE_LENGTH, TOGGLE_MEM_TO_MEM_MODE_OFFSET);
}

void Dma_SetDmaChannelRequest(dma_struct_t* dma, uint32_t dmaChannelNumber, uint32_t dmaRequestCode)
{
    uint32_t offset = (dmaChannelNumber-1) * SET_DMA_CHANNEL_REQUEST_VALUE_LENGTH;
    Register_WriteIntoRegister(&(dma->CSELR), dmaRequestCode, SET_DMA_CHANNEL_REQUEST_VALUE_LENGTH, offset);
}

void Dma_SetPeripheralAddress(uint32_t dmaNumber, uint32_t dmaChannelNumber, volatile uint32_t *peripheralAddress)
{
    uint32_t* registerAddr = Local_GetCparRegister(dmaNumber, dmaChannelNumber);
    Register_WriteIntoRegister(registerAddr, (uint32_t) peripheralAddress, 32, 0);
}

void Dma_SetMemoryAddress(uint32_t dmaNumber, uint32_t dmaChannelNumber, volatile uint32_t * memoryAddress)
{
    uint32_t* registerAddr = Local_GetCmarRegister(dmaNumber, dmaChannelNumber);
    Register_WriteIntoRegister(registerAddr, (uint32_t) memoryAddress, 32, 0);
}

void Dma_SetupDMAForU_s_art(uint32_t usartNumber)
{
    //Sending
    uint32_t dmaNumber = uart_send_dma_channel_requestcode_map[usartNumber-1][0];
    uint32_t dmaChannelNumber = uart_send_dma_channel_requestcode_map[usartNumber-1][1];
    uint32_t dmaRequestCode = uart_send_dma_channel_requestcode_map[usartNumber-1][2];

    //Enable DMA Clock
    uint32_t dmaClockBit = dmaNumber == 1 ? DMA_1_ENABLE_BIT : DMA_2_ENABLE_BIT;
    Rcc_ToggleDmaClock(dmaClockBit, on);

    Dma_ToggleTransferCompleteInterrupt(dmaNumber, dmaChannelNumber, on); //Enable Transfer Complete Interrupt
    Dma_SetTransferDirection(dmaNumber, dmaChannelNumber, DIRECTION_READ_FROM_MEMORY);   //Direction Memory to Data
    Dma_ToggleCircularMode(dmaNumber, dmaChannelNumber, off); // No circular Mode
    Dma_TogglePeripheralIncrement(dmaNumber, dmaChannelNumber, off);   //No peripheral increment
    Dma_ToggleMemoryIncrement(dmaNumber, dmaChannelNumber, on); //Memory increment
    Dma_SetPeripheralSize(dmaNumber, dmaChannelNumber, PERIPHERAL_SIZE_8_BIT); //peripheral size 8bit
    Dma_SetChannelPriority(dmaNumber, dmaChannelNumber,CHANNEL_PRIORITY_MEDIUM); //medium priority
    Dma_ToggleMemToMemMode(dmaNumber, dmaChannelNumber,false); // No MemToMem

    // Set Dma request code
    dma_struct_t* dmaBaseRegister = dmaNumber == 1 ? DMA1 : DMA2;
    Dma_SetDmaChannelRequest(dmaBaseRegister,dmaChannelNumber,dmaRequestCode);

    Dma_SetPeripheralAddress(dmaNumber, dmaChannelNumber, uart_send_data_register_addr_map[usartNumber-1]);
    Dma_SetMemoryAddress(dmaNumber, dmaChannelNumber, uart_send_buffer_addr_map[usartNumber-1]);
}