#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx_hal.h"
#include "uart.h"


void uart_init(void);

char message[20] = "Hello from STM32\r\n";




int main() {

	HAL_Init();
	uart_init();


	while(1) {

		printf("Printf is being used ! \n\r");
		HAL_Delay(10);
	}
}



void SysTick_Handler(void){

	HAL_IncTick();
}



