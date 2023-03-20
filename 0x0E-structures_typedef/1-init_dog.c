#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function with four arguments
 * @name: pointer character
 * @age: float type argument
 * @owner: pointer type character
 * @d: structure pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)

	d->name = name;
	d->age = age;
	d->owner = owner;
}
