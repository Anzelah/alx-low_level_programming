#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 *
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
