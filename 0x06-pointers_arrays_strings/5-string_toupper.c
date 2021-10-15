#include "main.h"

/**
*string_toupper - swaps values
*@str: character source
*Return: Always 0.
*/


char *string_toupper(char *str)
{
int i;

i = 0;
for (i = 0 ; str[i] != 0; i++)
{
	if (str[i] <= 122 && str[i] >= 97)
	{
		str[i] = str[i] - 32;
	}
}
return (str);
}
