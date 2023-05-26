#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary number to an unsigned integer
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int decimal = 0;

	if (b = NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}
