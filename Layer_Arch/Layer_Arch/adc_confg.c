/*
 * adc_confg.c
 *
 * Created: 4/18/2020 7:42:59 AM
 *  Author: Ahmed
 */ 
#include "adc.h"
void int_adc(){
	CLEAR_BIT(DDRA,adc);
	ADMUX|=(1<<REFS1)|(1<<REFS0);
	ADCSRA|=(1<<ADEN)|(1<<ADATE)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
}
