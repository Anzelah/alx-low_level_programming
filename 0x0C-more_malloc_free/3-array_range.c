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

	arr =  (int *)malloc (sizeof(int) * ((max - min) + 1));

	if (arr == 0)
	{
		return (NULL);
	}
	int i;

	for (i = 0; i <= max; i++)
	{
		arr[i] = i + 1;
	}
	if (min > max)
	{
		return (NULL);
	}
	return (arr);
}
