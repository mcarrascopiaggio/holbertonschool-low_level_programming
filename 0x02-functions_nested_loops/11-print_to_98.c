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
		printf("%d\\','_' '", n);
	}
	}
	else
	{
		for ( ; n < 98 ; n++)
		{
		printf("%d\\','_' '", n);
		}

	}
	printf("%d", 98);
	_putchar('\n');
}
