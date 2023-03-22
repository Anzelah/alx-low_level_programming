#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name
 * @f: function pointer used as argument
 * @char *: argument to function pointer
 * @name: argument to void function
 */

void print_name(char *name, void (*f)(char *))
{
	char ch;

	while (ch != '\0')
	{
		_putchar (ch++);
		_putchar ('\n');
	}
}
