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

	arr =  malloc(sizeof(int));

	if (arr == 0 || min > max)
	{
		return (NULL);
	}
	int i;

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	return (arr);
}
