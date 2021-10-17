#include "main.h"

/**
*print_number - swaps values
*@n: numbers of bytes
*Return: Always
*/


void print_number(int n)
{
int i;

for (i = n; n > 10; i++)
{
n = n % 10;
_putchar(n);
}
n = n & 10;
_putchar(n);
}

