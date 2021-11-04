#include "variadic_functions.h"
#include  <stdarg.h>

/**
*sum_them_all - sum of all its parameters.
*@n: number of parametrers
*Return: sum of all its parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
unsigned int sum = 0;
va_list par;
if (n == 0)
{
return (0);
}
va_start(par, n);
for (i = 0; i < n; i++)
{
sum += va_arg(par, unsigned int);
}
va_end(par);
return (sum);
}
