/*
 * adc.h
 *
 *  Created on: Jul 16, 2024
 *      Author: Ihor
 */

#ifndef ADC_H_
#define ADC_H_

#include "stm32f4xx_hal.h"
#include <stdint.h>

uint32_t pa0_adc_read(void);
void adc_init_start(void);
void adc_pa0_count_conversion_init(void);
void adc_pa0_single_conversion_init(void);
void adc_pa0_interrupt_init(void);

#endif /* ADC_H_ */
