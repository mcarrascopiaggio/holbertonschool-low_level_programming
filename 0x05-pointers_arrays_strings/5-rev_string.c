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
int temp;
int f;

l = 0;

for (i = 0; s[i] != 0 ; i++)
	{
	l = l + 1;
	}
for (j = 0, f = l - 1 ; s[j] != 0 ; j++, f--)
	{
		temp = s[j];
		s[j] = s[l];
		s[l] = temp;
	}
}
