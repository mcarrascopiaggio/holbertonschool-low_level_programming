#include "main.h"
#include <stdio.h>

/**
*print_array - print reverse
*@a: parametrer one
*@n: second parameter
*Return: Always 0.
*/


void print_array(int *a, int n)
{

int i;


if (n >= 1)
{
for (i = 0; i < (n - 1) ; i++)
	{
	printf("%d, ", a[i]);
	}
printf("%d\n", a[(n - 1)]);
}
else
if (n == 0)
{
printf("%d\n", a[(n)]);
}
}
