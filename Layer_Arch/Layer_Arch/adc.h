/*
 * adc.h
 *
 * Created: 4/18/2020 7:42:14 AM
 *  Author: Ahmed
 */ 


#ifndef ADC_H_
#define ADC_H_
#define adc	1
#include <avr\io.h>
#include "bit_math.h"
#include <util/delay.h>
void int_adc();
int adc_read(unsigned char channel);





#endif /* ADC_H_ */