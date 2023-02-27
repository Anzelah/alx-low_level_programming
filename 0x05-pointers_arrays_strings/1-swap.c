#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 *
 * return: always (0)
*/

void swap_int(int *a, int *b)
{
	int *a, *b;
	*a = *b;
	*b = *a;

	return (0);
}
