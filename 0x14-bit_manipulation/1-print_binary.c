#include "main.h"

/**
 *print_binary - fuction that print the binary
 *@n: int number.
 *Return: binary
 */

void print_binary(unsigned long int n)
{
int i = 0, j = 0, result = 0;

for (j = 31; j >= 0; j--)
{
	result = n >> j;
	if (result & 1)
		break;
}
if (n == 0)
{
	putchar ('0');
}
for (i = j; i >= 0; i--)
{
	result = n >> i;
	if ((result & 1) != 0)
		_putchar ('1');
	else
		_putchar ('0');
}
}
