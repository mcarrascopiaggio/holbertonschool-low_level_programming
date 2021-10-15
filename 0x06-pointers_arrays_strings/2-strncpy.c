#include "main.h"

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
