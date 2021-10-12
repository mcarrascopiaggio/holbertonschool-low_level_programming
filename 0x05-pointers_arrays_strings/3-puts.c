#include "main.h"

/**
*_puts - lenghth of a string
*@str: parametrer one
*Return: Always 0.
*/


void _puts(char *str)
{

int i;

for (i = 0; str[i] != 0 ; i++)
	{
	_putchar(str[i]);
	}
_putchar(10);
}
