#include "search_algos.h"

/**
 * linear_search - find a value in array of integers with linear search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * Or -1 if array is null or value isn't present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i <= size - 1; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
