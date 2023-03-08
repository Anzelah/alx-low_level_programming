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
		s++;
		_putchar(*s);
	}
	else
		_putchar('\n');
}
