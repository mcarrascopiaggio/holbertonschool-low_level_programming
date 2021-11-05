#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - print diferent format
 *@format: diferent format
 *Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list par;
char *str;
char *sep;
size_t i = 0;

va_start(par, format);
sep = "";
while (format && format[i])
{
	switch (format[i])
	{
		case 'c':
			printf("%s", sep);
			printf("%c", va_arg(par, int));
		break;
		case 'i':
			printf("%s", sep);
			printf("%d", va_arg(par, int));
		break;
		case 'f':
			printf("%s", sep);
			printf("%f", va_arg(par, double));
		break;
		case 's':
			str = va_arg(par, char*);
			if (str == NULL)
			{
				printf("%s", sep);
				printf("(nil)");
				break;
			}
			printf("%s", sep);
			printf("%s", str);
		break;
	}
	sep = ",";
	i++;
}
printf("\n");
}
