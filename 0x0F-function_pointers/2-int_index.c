#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for an integer
 * @array: pointer to an integer arrray
 * @size: number of elements in the array
 * @cmp: pointer to another function that takes integer
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	if (size > 0)

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
