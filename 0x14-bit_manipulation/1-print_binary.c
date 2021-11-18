#include "main.h"

/**
 *print_binary - fuction that print the binary
 *@n: int number.
 *Return: binary
 */

void print_binary(unsigned long int n)
{
int i = 0, result = 0;


for (i = 31; i >= 0; i--)
{
	result = n >> i;
	if ((result & 1) != 0)
		_putchar ('1');
	else
		_putchar ('0');
}
_putchar (10);
}
