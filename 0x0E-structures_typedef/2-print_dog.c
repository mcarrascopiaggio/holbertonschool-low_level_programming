#include "dog.h"
#include <stdio.h>

/**
 *print_dog - prints a struct dog.
 *@d: structure
 *return: nothing
 */

void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
	printf("Name:nil\nAge: %f\nOwner: %s\n", d->age, d->owner);

if (d->owner == NULL)
	printf("Name: %s\nAge: %f\nOwner: nil", d->name, d->age);
if (d->name == NULL && d->owner)
	printf("Name: nil \nAge: %f\nOwner: nil", d->age);
else
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
