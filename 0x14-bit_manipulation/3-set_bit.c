#include "main.h"
#include <stdio.h>

/**
 * set_bit - set bit value at a given index
 * @n: number
 * @index: index
 *
 * Return: 1on success and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);

	return (1);
}
