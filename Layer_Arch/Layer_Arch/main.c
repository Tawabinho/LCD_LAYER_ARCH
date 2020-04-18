/*
 * Layer_Arch.c
 *
 * Created: 4/15/2020 4:10:03 PM
 * Author : Ahmed
 */ 
#define F_CPU 1600000
#include "dio.h"
#include "lcd.h"
#include "std_types.h"
#include "util\delay.h"
#include <stdio.h>
#include <string.h>
#include "adc.h"
int main(void)
{
    int_lcd();
	int_adc();
    while (1) 
    {
		unsigned int value = adc_read(1);
		char buffer[10]="";
		sprintf(buffer,"%d",value);
		comand_lcd(dio_channel_B3,dio_channel_B1,0x80);
		string_lcd("the pot =");
		comand_lcd(dio_channel_B3,dio_channel_B1,0xC0);
		string_lcd(buffer);
    }
}

