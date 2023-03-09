#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 *
 * Return: string
*/

void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		s++;
		_print_rev_recursion(s - 1);
	}
}
