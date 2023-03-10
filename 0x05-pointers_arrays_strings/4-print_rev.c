#include "main.h"

/**
 * print_rev - print in reverse
 * @s: string to be printed
 *
 * Return: 0
*/

void print_rev(char *s)
{
	int i = 0;
	int d;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (d = i; d > 0; d--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
