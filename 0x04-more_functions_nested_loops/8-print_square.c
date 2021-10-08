#include "main.h"

/**
 *print_square-  prints a square
 *@size: number of lines
 *Return: always 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
	for (i = 1 ; i <= size ; i++)
		{
		for (j = 1 ; j <= size ; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
	}
	else
		{
		_putchar('\n');
}
}
