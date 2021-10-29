#include <stdlib.h>
#include "main.h"

/**
*_realloc: eallocates a memory
*Description: eallocates a memory block using malloc and free
*@ptr: pointer to the memory previously allocated
*@old_size: is the size, in bytes, of the allocated space for ptr
*@new_size: is the new size, in bytes of the new memory block
*Return: new size of memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *temp;
char *new;
char *fin;
unsigned int i, j;

new = ptr;
temp = ptr;

if (new_size == old_size)
	return (ptr);

if (ptr == NULL)
	ptr = malloc(new_size);

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
for (i = 0; i < old_size; i++)
{
	temp[i] = new[i];
}
free(new);
fin  = malloc(new_size);
if (fin == NULL)
	return (NULL);

for (j = 0; j < old_size; j++)
fin[j] = temp[j];
return (fin);
free(fin);
}
