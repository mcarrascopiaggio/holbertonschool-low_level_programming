#include "main.h"

/**
*puts_half - print reverse
*@str: parametrer one
*Return: Always 0.
*/


void puts_half(char *str)
{

int i;
int l;
int j;

l = 0;

for (i = 0; str[i] != 0 ; i++)
	{
	l = l + 1;
	}
for (j = (l / 2) ; str[j] != 0 ; j++)
	{
	_putchar(str[j]);
	}
	_putchar(10);
}
