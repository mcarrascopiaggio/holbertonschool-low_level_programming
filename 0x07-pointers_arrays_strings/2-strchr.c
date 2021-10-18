#include "main.h"

/**
*_strchr - print the character where c appear..
*@s: the address of memory to new str.
*@c: the matching character.
*Return: Always 0.
*/

char *_strchr(char *s, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;

	for (i = 0; s[i] != c && s[i] != 0; i++)
	{
	n++;
	}

return (s + n);
}
