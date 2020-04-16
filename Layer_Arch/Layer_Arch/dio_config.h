/*
 * dio_config.h
 *
 * Created: 4/15/2020 5:01:35 PM
 *  Author: Ahmed
 */ 

#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_
#include "dio_types.h"
#include "std_types.h"
#define pincount 32
void int_(void);
typedef struct pin_config{
	dio_dirType pindir;
	STD_levelTypes pinstate;
	}dio_configType;
extern const dio_configType dio_pin_config[];




#endif /* DIO_CONFIG_H_ */