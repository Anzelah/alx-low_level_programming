#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - first find the length of the string
 * @s: pointer
 *
 * Return: always (0)
 */

int _strlen(char *s)
{
	int j;

	j = 0;

	if (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * _strcpy - copies the string
 * @dest: pointer to destination
 * @src: pointer to string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int length1, length2;
	dog_t *dog;

	length1 = _strlen(name);
	length2 = _strlen(owner); /* initialize variables */

	dog = malloc(sizeof(dog_t)); /* allocate memory */
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1)); /* allocate memory */
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1)); /* allocate memory */
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name); /* free memory */
		return (NULL);
	}

	_strcpy(dog->name, name); /* copy new dog name */
	_strcpy(dog->owner, owner); /* similar to above but for owner */
	dog->age = age;

	return (dog);
}
