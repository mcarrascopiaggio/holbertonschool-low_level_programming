#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_realloc - function
*Description: eallocates a memory block using malloc and free
*@ptr: pointer to the memory previously allocated
*@old_size: is the size, in bytes, of the allocated space for ptr
*@new_size: is the new size, in bytes of the new memory block
*Return: new size of memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new;

if (ptr == NULL)
	ptr = malloc(new_size);

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
if (new_size == old_size)
	return (ptr);

new  = malloc(new_size);
if (new == NULL)
	return (NULL);
memcpy(new, ptr, old_size);
free(ptr);
return (new);
}
