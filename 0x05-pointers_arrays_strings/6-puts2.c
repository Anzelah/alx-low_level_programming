#include "main.h"

/**
 * puts2 - print every character of a string
 * @str: string to be printed
 *
*/

void puts2(char *str)
{
	int i;

	for (int i = 0; str[i] != '\0'; i++)
	{
		_putchar(*str);
	}
}
