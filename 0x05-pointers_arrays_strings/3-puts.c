#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: string
 *
*/

void _puts(char *str)
{
	int i = 0;
	char c;

	while (c = *(str + i) != '\0')
	{
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
