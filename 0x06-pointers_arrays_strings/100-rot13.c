#include "main.h"

/**
*rot13 -  encodes a string using rot13.
*@src: character source
*Return: Always 0.
*/


char *rot13(char *src)
{

int i;
int j;
char temp;
i = 0;
j = 26;

for (i = 0, j = 26; src[i] < 13; i++, i--)
{
	if ((src[i] >= 65 && src[i] <= 90) || (src[i] >= 97 && src[i] <= 122))
	{
		temp = src[i] + 13;
		src[j - i] = src[i] - 13;
		src[i] = temp;
	}
	else
	{
		src[i] = src[i];
	}
}
return (src);
}
