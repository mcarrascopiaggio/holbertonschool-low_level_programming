#include "function_pointers.h"
#include <stdio.h>

/**
**array_iterator - executes a function given as a par on each el of an array.
*@array: array of command
*@size: size of array
*@action:  is a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || *action == NULL)
	return;
else
	for (i = 0; i <= size; i++)
	{
	(action)(array[i]);
	}
}
