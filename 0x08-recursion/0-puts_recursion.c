#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: string to be printed
 *
 * Return: string
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s = s + 1;
	}
	else
		_putchar('\n');
}
