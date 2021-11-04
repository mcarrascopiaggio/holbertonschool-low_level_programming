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

va_start(par, n);

str = va_arg(par, char*);

for (i = 0; i < n ; i++)
{
	if (str == NULL)
	{
	str = "(nil)";
	}
	printf("%s", va_arg(par, char*));
	if ((separator == NULL) || (i == (n - 1)))
	{
		continue;
	}
	printf("%s", separator);
}
printf("\n");
va_end(par);
return;

}

