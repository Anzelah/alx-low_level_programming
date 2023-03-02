#include "main.h"

/**
 * puts_half - print half a string followed by new line
 * @str: string to be printed
 *
 * Return: half a string
*/

void puts_half(char *str)
{
	int a, d, i;

	i = 0;

	for (a = 0; str[a] != 0; a++)
		i++;
	d = (i / 2);

	if ((i % 2) == 1)
		d = ((i + 1) / 2);

	for (a = d; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
