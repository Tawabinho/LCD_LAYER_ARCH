/*
 * dio_types.h
 *
 * Created: 4/15/2020 4:54:28 PM
 *  Author: Ahmed
 */ 


#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_
typedef enum{
	dio_channel_A0,
	dio_channel_A1,
	dio_channel_A2,
	dio_channel_A3,
	dio_channel_A4,
	dio_channel_A5,
	dio_channel_A6,
	dio_channel_A7,
	
	
	dio_channel_B0,
	dio_channel_B1,
	dio_channel_B2,
	dio_channel_B3,
	dio_channel_B4,
	dio_channel_B5,
	dio_channel_B6,
	dio_channel_B7,
	
	
	dio_channel_C0,
	dio_channel_C1,
	dio_channel_C2,
	dio_channel_C3,
	dio_channel_C4,
	dio_channel_C5,
	dio_channel_C6,
	dio_channel_C7,
	
	dio_channel_D0,
	dio_channel_D1,
	dio_channel_D2,
	dio_channel_D3,
	dio_channel_D4,
	dio_channel_D5,
	dio_channel_D6,
	dio_channel_D7
	}dio_channelType;

typedef enum{
	dio_PORTA,
	dio_PORTB,
	dio_PORTC,
	dio_PORTD
	}dio_portType;

typedef enum{
	input=0,
	output
	}dio_dirType;
	
#endif /* DIO_TYPES_H_ */