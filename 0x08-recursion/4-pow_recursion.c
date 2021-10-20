#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y.
 *@x: number.
 *@y: power number.
 *Return: number of coincidence in bytes.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

if (y == 0)
{
	return (1);
}
if (y == 1)
{
	return (x);
}
else
{
	return (x * _pow_recursion(x, y - 1));
}
}
