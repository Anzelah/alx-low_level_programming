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

	arr = (int *)malloc(b * sizeof(int));

	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
