#include "main.h"

/**
 * _strchr - locate the character of a string
 * @s: the string to be scanned
 * @c: the character to be searched in string
 *
 * Return: always (0)
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
