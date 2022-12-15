#include "main.h"
/*
 * _isalpha(int c) - checks for uppercase characters
 *
 *@c - character to be checked
 *Return: zero
 *
 */
int _isalpha(int c)
{	
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return(1);
	
	}
	return(0);
}
