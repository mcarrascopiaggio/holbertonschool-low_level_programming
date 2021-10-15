#include "main.h"

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

l = _strlen(dest);

for (i = 0 ; src[i] != 0 && i < n ; i++)
	{
	dest[l + i] = src[i];
	}
dest[l + i] = 0;
return (dest);
}

