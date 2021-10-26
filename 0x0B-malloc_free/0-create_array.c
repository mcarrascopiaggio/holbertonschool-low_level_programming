#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars, and init it with a specific char.
 *@size: the size of the memory to printthe character to print
 *@c: character to print
 *Return: array of a character.
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

if (size == 0)
{
return (NULL);
}
str = malloc(sizeof(char) * size);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
	str[i] = c;
}
return (str);
}
