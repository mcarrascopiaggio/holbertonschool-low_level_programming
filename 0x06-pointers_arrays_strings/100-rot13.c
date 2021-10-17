#include "main.h"

/**
*rot13 -  encodes a string using rot13.
*@src: character source
*Return: Always 0.
*/


char *rot13(char *src)
{

int i;

i = 0;

for (i = 0; src[i] != 0; i++)
{
	if ((src[i] >= 65 && src[i] <= 77) || (src[i] >= 97 && src[i] <= 109))
	{
		src[i] = src[i] + 13;
	}
	else
	{
	if ((src[i] >= 78 && src[i] <= 90) || (src[i] >= 110 && src[i] <= 122))
	{
	src[i] = src[i] - 13;
	}
	else
	{
	src[i] = src[i];
	}
	}
}
return (src);
}
