#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocated memory space
 * @str: the string
 *
 * Return: pointer to the duplcated string and NULLfor insufficient memory
 */

char *_strdup(char *str)
{
	char *arr;
	int i, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')

		i++;

	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n]; n++)
	{
		arr[n] = str[n];
	}

	return (arr);

}
