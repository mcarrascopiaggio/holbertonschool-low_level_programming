#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
*free_dog - free name and owner of dog
*@d: struct
*return: nothing
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
	free(d->name);
	free(d->owner);
}
}
