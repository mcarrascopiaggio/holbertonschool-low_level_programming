#include "main.h"

/**
 *print_diagonal-  prints a diagonal
 *@n: number of lines
 *Return: always 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
	for (i = 1 ; i <= n ; i++)
		{
		for (j = 2 ; j <= i ; j++)
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
