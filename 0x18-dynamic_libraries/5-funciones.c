#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s : input string
 *Return: string length
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != 0)
	{
		j++;
	}
	return (j);
}

/**
 * _puts - prints a string followed by a new line
 *@str: string input
 *Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		if (*str != 0)
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar(10);
}

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int p1 = 0;
	int p2 = 0;

	while (dest[p1] != '\0')
		p1++;

	while (src[p2] != src[n])
	{
		dest[p1 + p2] = src[p2];
		p2++;
	}
	dest[p1 + p2] = '\0';

	return (dest);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

/**
 * _isupper - checks for char c if it is uppercase
 *
 *@c: The character in ASCII code
 *
 * Return: 1 if true 0 if false
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
