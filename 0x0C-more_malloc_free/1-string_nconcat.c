#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*string_nconcat - concatenate two string
*@s1: string 1
*@s2: string 2}
*@n: number of character
*Return: address.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k, first, sc = 0;
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
for (j = 0; s2[j] != 0 && j < n; j++)
{
;
}
k = i + n + 1;

s = malloc(sizeof(char) * k);
if (s == NULL)
{
return (NULL);
}

for (first = 0; s1[first] != 0; first++)
{
s[first] = s1[first];
}
for (sc = 0; s2[sc] != 0; sc++)
{
s[first + sc] = s2[sc];
}
s[sc + 1] = 0;
return (s);
}


