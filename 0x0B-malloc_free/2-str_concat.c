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
int i, j, l, m = 0;
char *s;

if (s1 == NULL)
{
	s1 = " ";
}
if (s2 == NULL)
{
	s2 = " ";
}

for (i = 0; s1[i] != 0; i++)
{
	i++;
}
for (j = 0; s2[j] != 0; j++)
{
	j++;
}
l = i + j;
s = malloc((sizeof(char) * l) +1);
if (s == NULL)
{
	return (NULL);
}
for (m = 0; m < i; m++)
{
	s[m] = s1[m];
}
for (m = i, j = 0; m < l; m++, j++)
{
	s[m] = s2[j];
}
return (s);
}
