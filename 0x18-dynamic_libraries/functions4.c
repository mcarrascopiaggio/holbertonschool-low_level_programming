#include <stdio.h>
#include "main.h"
/**
*_memcpy - prints buffer in hexa.
*@dest: the address of memory to new srt.
*@n: the size of the memory to print.
*@src: the origin str.
*Return: Always 0.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

return (dest);
}
/**
*_strchr - print the character where c appear..
*@s: the address of memory to new str.
*@c: the matching character.
*Return: Always 0.
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for (i = 0; s[i] != c && s[i] != 0; i++)
	{
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}

/**
*_strpbrk - print the num character with concidence.
*@s: the string to be scanned.
*@accept: the string containing the text to scaner.
*Return: number of coincidence in bytes.
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int c = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
			c++;
			s = s + i;
			break;
			}
		}
	if (c == 1)
	{
		break;
	}
	}
if (c < 1)
{
s = '\0';
}
return (s);
}
/**
*_strstr - print the num character with concidence.
*@haystack: the string to be scanned.
*@needle: string to be searched with-in haystack string.
*Return: number of coincidence in bytes.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int l = 0;
	int n = 0;

	for (l = 0; needle[l] != 0; l++)
	{
		n++;
	}

	if (n == 0)
{
		haystack = haystack;
	}
	else
	{
		for (i = 0; haystack[i] != 0; i++)
		{
			for (j = 0; needle[j] != 0; j++)
			{
				if (haystack[i + j] != needle[j])
				{
				break;
				}
			}
		if (j == n)
		{
			haystack = haystack + i;
			break;
		}
		}
	}
	return (haystack);
}
/**
 * _strspn - number of bytes in the initial segment of s
 * @s: the string
 * @accept: return bytes
 *
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				n++;
		if (n - 1 != i)
			break;
	}
	return (n);
}
