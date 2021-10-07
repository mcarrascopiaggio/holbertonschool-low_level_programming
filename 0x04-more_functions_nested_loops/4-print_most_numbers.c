#include "main.h"

/**
 *print_most_numbers-  prints number 0 to 9 but not print 2 and 4
 *Return: always 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9' ; n++)
	{
		if (n == '2' || n == '4')
			{
			continue;
			}
		_putchar(n);
	}
		_putchar('\n');
}
