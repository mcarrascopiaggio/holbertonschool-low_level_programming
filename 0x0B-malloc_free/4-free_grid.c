#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*free_grid - print a two dimensial array
*@grid: base array
*@height: height of array
*Return: a pointer to a pointer
*/

void free_grid(int **grid, int height)
{
int i = 0;

if (grid[i] == 0)
{
	for (i = 0 ; i < height; i++)
	{
		free(grid[i]);
	}
free(grid);
}
}
