#include "main.h"

/**
 * factorial - return factorial of a given number
 * @n: integer
 *
 * Return: always (0)
*/

int factorial(int n)
{
	if (n < 0)
	{
		_putchar(-1);
	}
	else
		factorial(n * factorial(n - 1));
}
