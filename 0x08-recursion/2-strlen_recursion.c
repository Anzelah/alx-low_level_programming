#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: string
 *
 * Return: length
*/

int _strlen_recursion(char *s)
{
	char c = 0;

	if (s[c] != '\0')
	{
		_putchar(*s);
		_strlen_recursion(s - 1);
	}
}
