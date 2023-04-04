#include "main.h"

/**
 * reverse_array - reverse contents of an array
 * @n: elements inside the array
 * @a: array
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{

		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
