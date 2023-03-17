#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL if malloc fails or min is greater than max
 */

int *array_range(int min, int max)
{
	int *arr;
	int range, i;

	if (min > max)
	{
		return (NULL);
	}
	range = (max - min) + 1;

	arr = malloc(range * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= range; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
