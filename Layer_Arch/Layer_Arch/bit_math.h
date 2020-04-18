/*
 * bit_math.h
 *
 * Created: 4/15/2020 4:26:45 PM
 *  Author: Ahmed
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#define SET_BIT(var,bit)	var|=(1<<bit)
#define CLEAR_BIT(var,bit)	var&=~(1<<bit)
#define GET_BIT(var,bit)	((var>>bit)&1)
#define TOGGLE_BIT(var,bit)	var^=(1<<bit)
#endif /* BIT_MATH_H_ */