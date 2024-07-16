#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx_hal.h"
#include "adc.h"
#include "uart.h"

extern ADC_HandleTypeDef hadc1;
uint32_t sensor_value;


int main(void)
{
	HAL_Init();
	uart_init();
	adc_pa1_single_conversion_init();


    /* Loop forever */
	for(;;)
	{
		//1. Start ADC
		HAL_ADC_Start(&hadc1);

		//2. Poll for conversion
		 HAL_ADC_PollForConversion(&hadc1,1);

		//3. Get conversion
		sensor_value =  pa1_adc_read();

	    printf("The sensor value : %d   \n\r",(int)sensor_value);
	}
}


void  SysTick_Handler(void)
{
	HAL_IncTick();
}
