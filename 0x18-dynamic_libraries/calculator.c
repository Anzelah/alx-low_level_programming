#include <stdio.h>
#include "calc.h"

/**
 * op - math operation
 * @a: first integer
 * @b: second integer
 *
 * Return: an integer
 */

int calculator(char op, int a, int b)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
                return (a - b);
	if (op == '*')
                return (a * b);
	if (op == '/')
                return (a / b);
	if (op == '%')
                return (a % b);
}
