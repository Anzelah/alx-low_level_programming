#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip numbers
 * @n: number
 * @m: second number
 *
 * Return: bits you need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, index = 0;
	unsigned long int current;
	unsigned long int s = n ^ m;

	while (i >= 0)
	{
		current = s >> i;
		if (current & 1)
			index++;
		i--;
	}
	return (index);
}

