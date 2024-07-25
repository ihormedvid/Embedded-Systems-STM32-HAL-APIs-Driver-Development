  #include <stdio.h>
#include <stdint.h>
#include "stm32f4xx_hal.h"
#include "adc.h"
#include "uart.h"

ADC_HandleTypeDef hadc1;
uint32_t sensor_value[2];


int main(void)
{
	HAL_Init();
	uart_init();

//	adc_pa0_dma_init();
	adc_pa0pa4_dma_init();


	HAL_ADC_Start_DMA(&hadc1, (uint32_t *)sensor_value, 2);




	while(1){

		printf("Sensor 1 data : %d \n\r", (int)sensor_value[0]);
		printf("Sensor 2 data : %d \n\r", (int)sensor_value[1]);


	}
}




void  SysTick_Handler(void)
{
	HAL_IncTick();
}
