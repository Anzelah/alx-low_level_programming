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
	int mid, right, left, j;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (right + left) / 2;
		printf("Searching in array: ");
		for (j = left; j <= right; j++)
		{
			printf("%d", array[j]);
			if (j != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
