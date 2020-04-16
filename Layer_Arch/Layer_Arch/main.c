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
int main(void)
{
    int_lcd();
    while (1) 
    {
		string_lcd("hola");
		comand_lcd(dio_channel_B3,dio_channel_B1,0xc0);
		string_lcd("ahmed");
    }
}

