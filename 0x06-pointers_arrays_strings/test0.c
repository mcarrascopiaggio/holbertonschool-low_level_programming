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

