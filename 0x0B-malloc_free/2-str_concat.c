#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*str_concat - concatenates two string
*@s1: string one
*@s2: string two
*Return: A s1 + s2
*/
char *str_concat(char *s1, char *s2)
{
int i, j, k, count = 0;
char *s;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}

for (i = 0; s1[i] != 0; i++)
{
	;
}
for (j = 0; s2[j] != 0; j++)
{
	;
}
k = i + j;
s = (char *)malloc(k + 1);
if (s == NULL)
{
	return (NULL);
}
for (count = 0; count < i; count++)
{
	s[count] = s1[count];
}
for (count = i, j = 0; count < k; count++, j++)
{
	s[count] = s2[j];
}
return (s);
}
