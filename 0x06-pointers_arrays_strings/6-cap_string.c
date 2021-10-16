#include "main.h"

/**
*cap_string - swaps values
*@str: character source
*Return: Always 0.
*/


char *cap_string(char *str)
{
int i;
int j;
char s[] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

if (str[0] >= 97 && str[0] <= 122)
{
str[0] = str[0] - 32;
}
i = 1;
j = 0;

for (i = 1 ; str[i] != 0; i++)
{
	for (j = 0; s[j] != 0; j++)
	{
		if ((str[i - 1] == s[j]) && (str[i] >= 97) && (str [i] <= 122))
		{
			str[i] = str[i] - 32;
		}
	}
}
return (str);
}
