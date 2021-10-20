#include "main.h"
/**
 *factorial - returns the length of a string.
 *@n: the string to be printed.
 *Return: number of coincidence in bytes.
 */

int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
if (n == 0)
{
	return (1);
}
else
{
	return (n * factorial(n - 1));
}
}
