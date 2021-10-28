#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - function that allocates memory using malloc
*@b: bytes.
*Return: memory direction
*/
void *malloc_checked(unsigned int b)
{
unsigned int *addr;

addr = malloc(b);
if (addr == NULL)
{
exit(98);
}
return (addr);
}
