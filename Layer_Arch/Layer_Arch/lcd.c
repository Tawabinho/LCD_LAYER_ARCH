/*
 * lcd.c
 *
 * Created: 4/16/2020 1:32:52 AM
 *  Author: Ahmed
 */ 
#define F_CPU 16000000
#include "util\delay.h"
#include "lcd.h"
#include "bit_math.h"
#include "dio_hw.h"
#include "std_types.h"
#include "dio_types.h"
void comand_lcd(dio_channelType en,dio_channelType rs,uint_8 cmd){
	dio_channelType RS=rs%8;
	dio_channelType EN=en%8;
	PORTA_REG=(PORTA_REG & 0x0F)|(cmd & 0xF0);
	CLEAR_BIT(PORTB_REG,RS);
	SET_BIT(PORTB_REG,EN);
	_delay_ms(5);
	CLEAR_BIT(PORTB_REG,EN);
	_delay_ms(2);
	PORTA_REG=(PORTA_REG & 0x0F)|(cmd << 4);
	CLEAR_BIT(PORTB_REG,RS);
	SET_BIT(PORTB_REG,EN);
	_delay_ms(5);
	CLEAR_BIT(PORTB_REG,EN);
	_delay_ms(2);
	}
void write_lcd(dio_channelType en,dio_channelType rs,uint_8 data){
	dio_channelType RS=rs%8;
	dio_channelType EN=en%8;
	PORTA_REG=(PORTA_REG & 0x0F)|(data & 0xF0);
	SET_BIT(PORTB_REG,RS);
	SET_BIT(PORTB_REG,EN);
	_delay_ms(5);
	CLEAR_BIT(PORTB_REG,EN);
	_delay_ms(2);
	PORTA_REG=(PORTA_REG & 0x0F)|(data << 4);
	SET_BIT(PORTB_REG,RS);
	SET_BIT(PORTB_REG,EN);
	_delay_ms(5);
	CLEAR_BIT(PORTB_REG,EN);
	_delay_ms(2);
	}
void string_lcd(char *str){
	
	while(*str!='\0')
	{
		write_lcd(dio_channel_B3,dio_channel_B1,*str);
		str++;
	}	
}
void LCD_Clear()
{
	comand_lcd (dio_channel_B3,dio_channel_B1,0x01);		/* Clear display */
	_delay_ms(2);
	comand_lcd (dio_channel_B3,dio_channel_B1,0x80);		/* Cursor at home position */
}
