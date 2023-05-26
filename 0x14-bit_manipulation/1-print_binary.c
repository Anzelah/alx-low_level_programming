#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: points to an integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int current;
	int i, index = 0;

	i = 63;
	while (i >= 0)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			index++;
		}
		else if (index)
			_putchar('0');
		i--;
	}
	if (!index)
		_putchar('0');
}
