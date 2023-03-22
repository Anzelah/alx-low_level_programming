#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function on each element of array
 * @array: pointer to integer called array
 * @size: size of the array integer
 * @action: pointer to a funcion returning nothing
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
