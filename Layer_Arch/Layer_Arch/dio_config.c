/*
 * dio_config.c
 *
 * Created: 4/15/2020 5:06:57 PM
 *  Author: Ahmed
 */ 
#include "dio_config.h"
#include "dio_hw.h"
#include "bit_math.h"
const dio_configType dio_pin_config[]={
/*A0*/   {input,STD_low},
/*A1*/   {input,STD_low},
/*A2*/	 {input,STD_low},
/*A3*/	 {input,STD_low},
/*A4*/	 {output,STD_low},
/*A5*/	 {output,STD_low},
/*A6*/	 {output,STD_low},
/*A7*/	 {output,STD_low},
/*B0*/	 {input,STD_low},
/*B1*/	 {output,STD_low},
/*B2*/	 {output,STD_low},
/*B3*/	 {output,STD_low},
/*B4*/	 {input,STD_low},
/*B5*/	 {output,STD_low},
/*B6*/	 {output,STD_low},
/*B7*/	 {output,STD_low},
/*C0*/	 {output,STD_low},
/*C1*/	 {output,STD_low},
/*C2*/	 {output,STD_low},
/*C3*/	 {output,STD_low},
/*C4*/	 {output,STD_low},
/*C5*/	 {output,STD_low},
/*C6*/	 {output,STD_low},
/*C7*/	 {output,STD_low},
/*D0*/	 {output,STD_low},
/*D1*/	 {output,STD_low},
/*D2*/	 {output,STD_low},
/*D3*/	 {output,STD_low},
/*D4*/	 {output,STD_low},
/*D5*/	 {output,STD_low},
/*D6*/	 {output,STD_low},
/*D7*/	 {output,STD_low},
	};
	void int_(){
		uint_8 counter,pin_channel,port_channel;
		for (counter=dio_channel_A0;counter<pincount;counter++)
		{
			pin_channel=counter%8;
			port_channel=counter/8;
			if(dio_pin_config[counter].pindir==output)
			{
				switch(port_channel)
				{
					case dio_PORTA:
						SET_BIT(DDRA_REG,pin_channel);
						break;
					case dio_PORTB:
						SET_BIT(DDRB_REG,pin_channel);
						break;
					case dio_PORTC:
						SET_BIT(DDRC_REG,pin_channel);
						break;
					case dio_PORTD:
						SET_BIT(DDRD_REG,pin_channel);
						break;
				}
			}
			else{
				switch(port_channel){
				case dio_PORTA:
					CLEAR_BIT(DDRA_REG,pin_channel);
					break;	
				case dio_PORTB:
					CLEAR_BIT(DDRB_REG,pin_channel);
					break;
				case dio_PORTC:
					CLEAR_BIT(DDRC_REG,pin_channel);
					break;
				case  dio_PORTD:
					CLEAR_BIT(DDRD_REG,pin_channel);
					break;
				}
			}
			}
	}