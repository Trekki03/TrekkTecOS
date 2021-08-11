#include <stdint.h>

#define SRAM_START 0x20000000U
#define SRAM_SIZE  (160 * 1024)
#define SRAM_END (SRAM_START + SRAM_SIZE)

void Reset_Handler(void);
void NMI_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void HardFault_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void MemManage_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void BusFault_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void UsageFault_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void SVCall_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void Debug_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void PendSV_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void SysTick_Handler(void) __attribute ((weak, alias ("Common_Handler")));



void WWDG_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void PVD_PVM_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void RTC_TAMP_STAMP_CSS_LSE_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void RTC_WKUP_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void FLASH_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void RCC_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void ETXI0_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void ETXI1_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void ETXI2_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void ETXI3_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void ETXI4_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void DMA1_CH1_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void DMA1_CH2_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void DMA1_CH3_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void DMA1_CH4_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void DMA1_CH5_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void DMA1_CH6_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void DMA1_CH7_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void ADC1_2_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void CAN1_TX_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void CAN1_RX0_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void CAN1_RX1_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void CAN1_SCE_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void EXTI9_5_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void TIM1_BRK_TIM15_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void TIM1_UP_TIM16_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void TIM1_TRG_COM_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void TIM1_CC_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void TIM2_Handler(void) __attribute ((weak, alias ("Common_Handler")));
void TIM3_Handler(void) __attribute ((weak, alias ("Common_Handler")));


uint32_t isr_vectors[] __attribute__ ((section (".isr_vectors"))) =
{
	SRAM_END,
	// "system interrupts"
	(uint32_t)&Reset_Handler,
	(uint32_t)&NMI_Handler,
	(uint32_t)&HardFault_Handler,
	(uint32_t)&MemManage_Handler,
	(uint32_t)&BusFault_Handler,
	(uint32_t)&UsageFault_Handler,
	0,
	(uint32_t)&SVCall_Handler,
	(uint32_t)&Debug_Handler,
	0,
	(uint32_t)&PendSV_Handler,
	(uint32_t)&SysTick_Handler,
	// "normal interrupts"
	(uint32_t)&WWDG_Handler,
	(uint32_t)&PVD_PVM_Handler,
	(uint32_t)&RTC_TAMP_STAMP_CSS_LSE_Handler,
	(uint32_t)&RTC_WKUP_Handler,
	(uint32_t)&FLASH_Handler,
	(uint32_t)&RCC_Handler,
	(uint32_t)&EXTI0_Handler,
	(uint32_t)&EXTI1_Handler,
	(uint32_t)&EXTI2_Handler,
	(uint32_t)&EXTI3_Handler,
	(uint32_t)&EXTI4_Handler,
	(uint32_t)&DMA1_CH1_Handler,
	(uint32_t)&DMA1_CH2_Handler,
	(uint32_t)&DMA1_CH3_Handler,
	(uint32_t)&DMA1_CH4_Handler,
	(uint32_t)&DMA1_CH5_Handler,
	(uint32_t)&DMA1_CH6_Handler,
	(uint32_t)&DMA1_CH7_Handler,
	(uint32_t)&ADC1_2_Handler,
	(uint32_t)&CAN1_TX_Handler,
	(uint32_t)&CAN1_RX0_Handler,
	(uint32_t)&CAN1_RX1_Handler,
	(uint32_t)&CAN1_SCE_Handler,
	(uint32_t)&EXTI9_5_Handler,
	(uint32_t)&TIM1_BRK_TIM15_Handler,
	(uint32_t)&TIM1_UP_TIM16_Handler,
	(uint32_t)&TIM1_TRG_COM_Handler,
	(uint32_t)&TIM1_CC_Handler,
	(uint32_t)&TIM2_Handler,
	(uint32_t)&TIM3_Handler,
	0,
};

void Common_Handler(void)
{

}


void Reset_Handler(void)
{

	main();
}