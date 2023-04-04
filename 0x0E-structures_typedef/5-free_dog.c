#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free allocated memory for dogs
 * @d: pointer to structure
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
