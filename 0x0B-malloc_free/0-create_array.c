#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @c: intitialize the array
 * @size: size of the array
 *
 * Return: pointer to the array, if it fails, NULL.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
