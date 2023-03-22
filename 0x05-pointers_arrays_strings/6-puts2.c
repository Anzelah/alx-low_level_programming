#include "main.h"

/**
 * puts2 - print every character of a string
 * @str: string to be printed
 *
*/

void puts2(char *str)
{
	int i = 0;
	int d = 0;
	char *c = str;
	int j;

	while (*c != '\0')
	{
		c++;
		i++;
	}
	d = i - 1;
	for (j = 0; j <= d; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
