#include "main.h"

/**
 * _sqrt_recursion - return the natural square root
 * @n: the number
 *
 * Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
		return (_sqrt_recursion(n));
}
