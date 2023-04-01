#ifndef DOG_H
#define DOG_H

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: character argument
 * @age: integer argument
 * @owner: character type character
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	strcpy(dog_t, d);

	dog_t = malloc(sizeof(struct dog_t));

	if (dog_t == NULL)
		return (NULL);
	
	dog_t->name = d->name;
	dog_t->age = age;
	dog_t->owner = d->owner;
}

#endif /* DOG_H */
