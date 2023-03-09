#include "main.h"

/**
 * _sqrt_recursion - return the natural square root
 * @n: the number
 *
 * Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n)
	{
		_putchar(n);
		_sqrt_recursion(n);
	}
	else
		return (-1);
}
