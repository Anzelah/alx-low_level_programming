#include "main.h"
#include <stdio.h>

/**
 * free_dog - free allocated memory for dogs
 * @d: pointer to structure
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free (d->name);
		free (d->owner);
		free (d);
	}
	return (0);
}
