#include "search_algos.h"

/**
 * binary_search - search a value in sorted array withbinary search algorithms
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 * You can assume that array will be sorted in ascending order
 * You can assume that value won’t appear more than once in array
 * If value is not present or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, right, left;
	size_t i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	mid = (left + right) / 2;

	for (i = 0; i < size; i++)
	{
		if (value == array[mid])
			return (mid);

		else if (value > array[mid])
		{
			left = mid;
			right = size - 1;
			mid = (left + right) / 2;
		}
		else
		{
			left = 0;
			right = mid;
			mid = (left + right) / 2;
		}
	}
	return (-1);
}
