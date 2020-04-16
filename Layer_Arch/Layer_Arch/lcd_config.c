/*
 * lcd_config.c
 *
 * Created: 4/16/2020 2:02:01 AM
 *  Author: Ahmed
 */ 
#define F_CPU 16000000
#include "bit_math.h"
#include "dio_hw.h"
#include "dio_types.h"
#include "dio_config.h"
#include "lcd.h"
#include "util\delay.h"
#include "dio.h"
void int_lcd(){
	int_();
	write(dio_channel_B2,STD_low);
	_delay_ms(20);		
    comand_lcd(dio_channel_B3,dio_channel_B1,0x33);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x32);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x28);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x0c);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x06);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x01);
	}