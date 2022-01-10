#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
*_islower -  check if a variable is lowercase
*@c: The integer to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
*_isalpha -  check if a variable is lowercase
*@c: The integer to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _isalpha(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else if (c >= 65 && c <= 90)
		{
		return (1);
		}
		else
		{
			return (0);
		}
}
/**
*_abs -  return the absolute number
*@n: The integer to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _abs(int n)

{
	if (n >=  0)
	{
	return (n);
	}
	else
	{
	return (n * -1);
	}
}
/**
*_isupper(int c)-  check if a variable is a upper
*@c: The integer to check
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _isupper(int c)

{
	if (c >= 65  && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
}
}
