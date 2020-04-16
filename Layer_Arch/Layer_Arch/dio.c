/*
 * dio.c
 *
 * Created: 4/15/2020 5:58:55 PM
 *  Author: Ahmed
 */ 
#include "dio.h"
#include "bit_math.h"
void write(dio_channelType channel,STD_levelTypes level){
	dio_channelType pin_channel=channel%8;
	dio_portType port_channel=channel/8;
	if (level==STD_high)
	{
		switch(port_channel)
		{
			case dio_PORTA:
				SET_BIT(PORTA_REG,pin_channel);
				break;
			case dio_PORTB:
				SET_BIT(PORTB_REG,pin_channel);
				break;
			case dio_PORTC:
				SET_BIT(PORTC_REG,pin_channel);
				break;
			case dio_PORTD:
				SET_BIT(PORTD_REG,pin_channel);
				break;
		}
	} 
	else
	{
		switch(port_channel){
			case dio_PORTA:
			CLEAR_BIT(PORTA_REG,pin_channel);
			break;
			case dio_PORTB:
			CLEAR_BIT(PORTB_REG,pin_channel);
			break;
			case dio_PORTC:
			CLEAR_BIT(PORTC_REG,pin_channel);
			break;
			case dio_PORTD:
			CLEAR_BIT(PORTD_REG,pin_channel);
			break;
		}
	}	
}
void read(dio_channelType channel,uint_8*data){
	dio_channelType pin_channel=channel%8;
	dio_portType port_channel=channel/8;
	switch(port_channel){
		case dio_PORTA:
			*data=GET_BIT(PINA_REG,pin_channel);
			break;
		case dio_PORTB:
			*data=GET_BIT(PINB_REG,pin_channel);
			break;
		case dio_PORTC:
			*data=GET_BIT(PINC_REG,pin_channel);
			break;
		case dio_PORTD:
			*data=GET_BIT(PIND_REG,pin_channel);
			break;
	}
	
}