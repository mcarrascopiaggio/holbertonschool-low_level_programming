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
/**
 * _strcmp - compares two strings
 *
 * Description: compares two strings
 *
 * @s1: pointer
 * @s2: pointer
 * Return: 0 if equal, negtive if s1<s2, positive if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while ((s1[a] == s2[b]) && (s1[a] != '\0') && (s2[a] != '\0'))
	{
		a++;
		b++;
	}
	c = s1[a] - s2[a];
	return (c);
}
