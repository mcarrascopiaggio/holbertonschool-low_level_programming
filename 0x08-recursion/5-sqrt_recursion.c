#include "main.h"

/**
*root - function tha calculate the square
*@m: goal number
*@r: aproximation
*Return: a numner
*/

int root(int m, int r)
{
int s;

s = r * r;
if (m < 0)
return (-1);
if (m >= 0 && s < m)
	return (root(m, r + 1));

else
	if (s == m)
	{
	return (m);
	}
else
{
return (-1);
}
}


/**
 *_sqrt_recursion- returns the value of x raised to the power of y.
 *@n: number.
 **Return: number of coincidence in bytes.
 */

int _sqrt_recursion(int n)
{
return (root(n, 0));
}
