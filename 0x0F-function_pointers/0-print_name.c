#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name of the person
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	while (name == NULL || f == NULL)
	return;

	f(name);
}
