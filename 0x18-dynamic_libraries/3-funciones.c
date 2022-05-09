#include "main.h"

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0; p < n && src[p] != '\0'; p++)
		dest[p] = src[p];
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}

/**
 * _memcpy - copies n bytes from src to dest.
 * @n: numbers of bytes from memory area src.
 * @src: memory area to be copied from.
 * @dest: memory area to be copied to.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		*(dest + p) = *(src + p);
		p++;
	}
	return (dest);
}

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return ('\0');

}

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @n: bytes of memory
 * @s: memory area
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0' && *(s + i) != c; i++)
		;

	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
