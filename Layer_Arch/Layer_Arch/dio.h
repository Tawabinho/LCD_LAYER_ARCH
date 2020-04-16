/*
 * dio.h
 *
 * Created: 4/15/2020 5:41:46 PM
 *  Author: Ahmed
 */ 
#ifndef DIO_H_
#define DIO_H_
#include "dio_types.h"
#include "std_types.h"
#include "dio_hw.h"
void write(dio_channelType channel,STD_levelTypes level);
void read(dio_channelType channel,uint_8*data);




#endif /* DIO_H_ */