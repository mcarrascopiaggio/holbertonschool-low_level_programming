#include "main.h"

/**
 *print_binary - fuction that print the binary
 *@n: int number.
 *Return: binary
 */

void print_binary(unsigned long int n)
{
int i = 0, j = 0, result = 0;

for (j = 63; j >= 0; j--) /**fin the first 1 left-right*/
{
	result = n >> j;
	if (result & 1)
		break;
}
if (n == 0) /** special case */
{
	putchar ('0');
}
for (i = j; i >= 0; i--) /**start traverse in the first 1 and go back*/
{
	result = n >> i;/** number div 2 i times*/
	if ((result & 1) != 0)/**last digit of result equal 1*/
		_putchar ('1');
	else
		_putchar ('0');
}
}
