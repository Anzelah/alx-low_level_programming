#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: array value
 *
 * Return: 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = (int *) malloc(b * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	int i;

	for (i = 0; i < b; i++)
	{
		arr[i] = i + 1;

		free(arr);
	}
	return (0);
}
