#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - print a string
*@separator: string to be printed between the strings
*@n: number of strings passed to the function
*Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list par;
unsigned int i = 0;
char *str;

if (n > 0)
{
	va_start(par, n);

	{
	for (i = 0; i < n ; i++)
	{
		str = va_arg(par, char*);
		if (str == NULL)
		{
		str = "(nil)";
		}
		printf("%s", str);
		if ((separator == NULL) || (i == (n - 1)))
		{
			continue;
		}
		printf("%s", separator);
	}
	}
printf("\n");
va_end(par);
return;
}
}

