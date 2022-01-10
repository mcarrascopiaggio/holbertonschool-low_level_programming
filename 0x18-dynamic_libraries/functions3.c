#include <stdio.h>
#include "main.h"
/**
*_strcat - swaps values
*@src: character source
*@dest: character destination
*Return: Always 0.
*/


char *_strcat(char *dest, char *src)
{
int i;
int l;

l = _strlen(dest);

for (i = 0 ; src[i] != 0 ; i++)
	{
	dest[l + 1] = src[i];
	}
dest[i++] = 0;
return (dest);
}
/**
*_strncat - swaps values
*@src: character source
*@dest: character destination
*@n: numbers of bytes
*Return: Always 0.
*/


char *_strncat(char *dest, char *src, int n)
{
int i;
int l;
int j;

l = 0;

for (j = 0 ; dest[j] != 0 ; j++)
{
l = l + 1;
}
for (i = 0 ; src[i] != 0 && i < n ; i++)
	{
	dest[l + i] = src[i];
	}
dest[l + i] = 0;
return (dest);
}
/**
*_strncpy - swaps values
*@src: character source
*@dest: character destination
*@n:number of bytes
*Return: Always 0.
*/


char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0 ; src[i] != 0 && i < n; i++)
	{
	dest[i] = src[i];
	}
while (i < n)
{
dest[i] = 0;
i++;
}

return (dest);
}
/**
*_memset - prints buffer in hexa.
*@s: the address of memory to print.
*@n: the size of the memory to print.
*@b: the constant value.
*Return: Always 0.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
return (s);
}
/**
 *_strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: value of comparation.
 */

int _strcmp(char *s1, char *s2)
{
	int i, x = 0, z, l1 = 0, l2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		l1++;
	for (i = 0; s2[i] != '\0'; i++)
		l2++;
	if (l1 >= l2)
		z = l1;
	else
		z = l2;
	for (i = 0; i < z; i++)
	{
		x = s1[i] - s2[i];
			if (x != 0)
				i = z;
	}
	return (x);
}
