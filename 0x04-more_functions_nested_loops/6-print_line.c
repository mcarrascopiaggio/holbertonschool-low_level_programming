#include "main.h"

/**
 *print_line-  prints n
 *@n: number of lines
 *Return: always 0
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
		{
			for (j = 1 ; j <= n ; j++)
				{
				_putchar('_');
				}
		}
	_putchar('\n');
}
