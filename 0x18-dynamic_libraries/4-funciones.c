#include "main.h"

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			}
			if (needle[j] == '\0' || haystack[x] == '\0')
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: substring to match
 * Return: number of bytes matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0' && count > 0)
			return (count);
		i++;
		j = 0;

	}
	return (count);
}

/**
 * _strcat - concatenate two strings
 * @dest: string to add to
 * @src: string to be added
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int p1 = 0;
	int p2 = 0;

	while (dest[p1] != '\0')
		p1++;

	while (src[p2] != '\0')
	{
		dest[p1 + p2] = src[p2];
		p2++;
	}
	dest[p1 + p2] = '\0';

	return (dest);
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
