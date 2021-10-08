#include "main.h"

/**
 *print_square-  prints a square
 *@n: number of lines
 *Return: always 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (n > 0)
	{
	for (i = 1 ; i <= n ; i++)
		{
		for (j = 1 ; j <= i ; j++)
		{
			_putchar(' ');
		}
		_putchar('\x5c');
		_putchar('\n');
		}
	}
	else
		{
		_putchar('\n');
}
}
