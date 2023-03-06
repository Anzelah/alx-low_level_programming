#include "main.h"

/**
 * _strpbrk - search for any set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: always (0)
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
