#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: string given.
 * Return: a pointer
 */

char *_strdup(char *str)
{
char *s;
int i;
int c;
if (str == NULL)
{
	return (NULL);
}

i = 0;
for (i = 0; str[i] != 0; i++)
{
	c++;
}
s = malloc(sizeof(char) * c);
if (s == NULL)
{
	return (NULL);
}
i = 0;
for (i = 0; str[i] != 0; i++)
{
	s[i] = str[i];
}
return (s);
}
