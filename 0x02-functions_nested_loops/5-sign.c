#include "main.h"
/*
 *print_sign - checks sign of a number
 *
 *@n -  the number to be checked
 *
 *Return: zero
 *
 */
int print_sign(int n)
{
	if(n>0)
	{
		return(1);
		_putchar('+');	
	}else if(n==0)
	{
		return(0);
		_putchar('0');	
	}else if(n<0){
		return(-1);
		_putchar('-');
	}
	return(0);
}
