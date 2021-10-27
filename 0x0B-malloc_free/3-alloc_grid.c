#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*alloc_grid - print a two dimensial array
*@width: width of array
*@height: height of array
*Return: a pointer to a pointer
*/

int **alloc_grid(int width, int height)
{
int **array;
int i, j = 0;

if (width == 0 || height == 0)
{
return (NULL);
}
array = malloc(sizeof(int *) * height);
if (array == 0)
{
	free(array);
	return (NULL);
}
for (i = 0; i <= height; i++)
{
	array[i] = malloc(sizeof(int) * width);
	if (array[i] == 0)
	{
		for (i = width ; i <= 0; i--)
		{
			free(array[i]);
		}
		free(array);
		return (NULL);
	}
}
for (i = 0; i <= height; i++)
{
	for (j = 0; j <= width; j++)
	{
	array[i][j] = 0;
	}
}
return (array);
}
