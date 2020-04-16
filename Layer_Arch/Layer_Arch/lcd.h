/*
 * lcd.h
 *
 * Created: 4/16/2020 1:32:32 AM
 *  Author: Ahmed
 */ 


#ifndef LCD_H_
#define LCD_H_
#include "std_types.h"
#include "dio_types.h"
void int_lcd(void);
void comand_lcd(dio_channelType en,dio_channelType rs,uint_8 cmd);
void write_lcd(dio_channelType en,dio_channelType rs,uint_8 data);
void string_lcd(char *str);
#endif /* LCD_H_ */