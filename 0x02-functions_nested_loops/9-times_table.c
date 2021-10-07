#include "main.h"


/**
 *times_table-  prints times_table
 */

void times_table(void)
{

	int i;
	int j;
	int res;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 1 ; j <= 9 ; j++)
	{
		res = i * j;
		if (res <= 9)
		{
		_putchar(res + '0');
			if (j == 9)
			{
			continue;
			}
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else if (res % 10 >= 1)
		{
		_putchar (res + '0');
			if (j == 9)
			{
			continue;
			}
		_putchar (',');
		_putchar (' ');
		}
		else
			{
			_putchar (res + '0');
				if (j == 9)
				{
				continue;
				}
			_putchar (',');
			_putchar (' ');
			_putchar (' ');
		}
	}
	_putchar('\n');
	}
}
