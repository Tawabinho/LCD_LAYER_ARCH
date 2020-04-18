/*
 * adc.c
 *
 * Created: 4/18/2020 7:42:24 AM
 *  Author: Ahmed
 */ 
#include "adc.h"
int adc_read(unsigned char channel){
	ADMUX=(0xc0 | (channel & 0x07));
	SET_BIT(ADCSRA,ADSC);
	while((GET_BIT(ADCSRA,ADIF)));
	SET_BIT(ADCSRA,ADIF);
	_delay_ms(1);
	int data=ADCL;
	data=(ADCH<<8);
	return data;
}