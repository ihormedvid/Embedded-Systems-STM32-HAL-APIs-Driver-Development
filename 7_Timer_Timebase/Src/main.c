#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx_hal.h"
#include "adc.h"
#include "uart.h"





int main() {

	HAL_Init();


	while (1) {

	}
}

void SysTick_Handler(void) {
	HAL_IncTick();
}





