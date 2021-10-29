#include <stdlib.h>
#include "main.h"

/**
*array_range -  creates an array of integers.
*@min: min value of the array
*@max: last value of the array
*Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
int *array;
int i = 0;
int inter;

if (min > max)
	return (NULL);
inter = max - min + 1;

array = malloc(sizeof(int) * inter);
if (array == 0)
	return (NULL);

for (i = 0; i < inter; i++)
{
	array[i] = min;
	min++;
}
return (array);
}
