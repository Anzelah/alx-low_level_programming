#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @ch: pointer
 *
 * Return: character
*/

char *string_toupper(char *ch)
{
	int i;

	i = 0;
	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}
