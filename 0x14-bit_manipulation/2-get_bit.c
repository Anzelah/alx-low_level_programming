#include "main.h"
#include <stdio.h>

/**
 * get_bit - find bit value at a given index
 * @index: index
 * @n: number
 *
 * Return: bit value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}
