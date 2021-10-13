#include "main.h"

/**
*rev_string - print reverse
*@s: parametrer one
*Return: Always 0.
*/


void rev_string(char *s)
{

int i;
int l;
int j;

l = 0;

for (i = 0; s[i] != 0 ; i++)
	{
	l = l + 1;
	}
for (j = (l - 1) ; j >= 0 ; j--)
	{
	*(s + j) = *(s + j - 1);
	_putchar(s[j]);
	}

	_putchar(10);
}
