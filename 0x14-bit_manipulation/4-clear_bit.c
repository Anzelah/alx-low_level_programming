#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set bit value
 * @index: index
 * @n: number
 *
 * Return: 1 if it works, -1 if it doesn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);

	return (1);
}
