#include <stdio.h>
#include "dog.h"

/**
*init_dog - function for initialize.
*@d: name of structur
*@name: name of the dog.
*@age: age in month.
*@owner: owner of the dog.
*Return:
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
