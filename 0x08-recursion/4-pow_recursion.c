#include "main.h"

/**
 * _pow_recursion - return value of x raised topower of y
 * @x: integer
 * @y: integer
 *
 * Return: always (0)
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		_putchar(x);
		return (x * _pow_recursion(x, y - 1));
	}
}
