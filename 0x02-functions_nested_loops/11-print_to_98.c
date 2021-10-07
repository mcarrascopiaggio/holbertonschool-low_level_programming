#include <stdio>
#include "main.h"


/**
 *print_to_98 - writes the character c to stdout
 *@n: number where start the function
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n ; n >= 98 ; n--)
	{
		printf("%d", n);
		if (n == 98)
			{
			continue;
			}
		_putchar(',');
	}
	}
	else
	{
		for (n ; n <= 98 ; n++)
		{
		printf("%d", n);
		if (n == 98)
		{
		continue;
		}
		_putchar(',');
		}

	}
	_putchar('\n');
}
