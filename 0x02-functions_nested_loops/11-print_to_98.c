#include <stdio.h>
#include "main.h"


/**
 *print_to_98 - writes the character c to stdout
 *@n: number where start the function
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for ( ; n > 98 ; n--)
	{
		printf("%d", n);
		_putchar(',');
	}
	}
	else
	{
		for ( ; n < 98 ; n++)
		{
		printf("%d", n);
		_putchar(',');
		}

	}
	printf(98);
	_putchar('\n');
}
