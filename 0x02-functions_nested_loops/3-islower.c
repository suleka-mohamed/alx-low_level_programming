#include "main.h"
/**
 *_islower - checks for lowercase characters
 *
 *@c: character to be checked
 *
 *Return: zero
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return(1);
	
	}
	return(0);
}
