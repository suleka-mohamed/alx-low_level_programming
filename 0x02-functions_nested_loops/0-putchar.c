#include <stdio.h>			
/**
 *-putchar -writes  the character c to stdout
 *@c: the character to print		
 *
 * Return: zero
**/							int main(void)
{	
	char *_putchar = "_putchar";											while (*_putchar)
	{
		_putchar(*_putchar);
		_putchar++;	
	}
	_putchar('\n');
	return(0);
}
