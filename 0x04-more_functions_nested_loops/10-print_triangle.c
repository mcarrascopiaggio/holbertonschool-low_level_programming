#include "main.h"

/**
 *print_triangle-  prints a triangulo
 *@size: number of lines
 *Return: always 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
	for (i = 1 ; i <= size  ; i++)
		{
		for (j = 1 ; j < size ; j++)
		{
			_putchar(32);
		}
		for (j = 1; j - i <= size ; j++)
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
