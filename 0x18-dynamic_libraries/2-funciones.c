#include "main.h"
#include <unistd.h>

/**
 * _islower - checks for argument c if it is lowercase
 *
 *@c: The character in ASCII code
 *
 * Return: 1 if its lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

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
 * _abs - Returns the absolute value of an integer
 *
 * @i: input number as an integer.
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

/**
 * _isalpha - Checks if the char is alphabetic, if true return 1, else return 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if true. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isdigit - checks for char c if it is digit
 *
 *@c: The character in ASCII code
 *
 * Return: 1 if its true 0 if false
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
