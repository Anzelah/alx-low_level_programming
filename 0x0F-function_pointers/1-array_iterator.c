#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on each array element
 * @size: size of the array
 * @array: argument to the function
 * @action: pointer to the function used
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
