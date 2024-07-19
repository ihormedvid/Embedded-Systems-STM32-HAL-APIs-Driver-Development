#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx_hal.h"
#include "adc.h"
#include "uart.h"
#include "tim.h"





int main() {

	HAL_Init();
	tim_timebase_init();
	uart_init();


	while (1) {

	}
}


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {

	// Do something
	printf("A second just elapsed ! \n\r");
}

void SysTick_Handler(void) {
	HAL_IncTick();
}





