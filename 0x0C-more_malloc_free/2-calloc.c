#include <stdlib.h>
#include "main.h"

/**
*_calloc - allocates memory for an array, using malloc
*@nmemb: element
*@size: bytes each
*Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *array;

if (nmemb == 0 || size == 0)
	return (NULL);

array = malloc(size * nmemb);
if (array == NULL)
	return (NULL);

return (array);
}
