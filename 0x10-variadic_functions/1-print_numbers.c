#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers -  prints numbers, followed by a new line.
*@separator: is the string to be printed between numbers
*@n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list par;
unsigned int i = 0;

if (n <= 0)
	printf("\n");
	return;

va_start(par, n);

for (i = 0; i < n; i++)
{
	printf("%d", va_arg(par, unsigned int));
	if (separator == NULL || i == (n - 1))
	{
		continue;
	}
	printf("%s", separator);
}
printf("\n");
va_end(par);
}
