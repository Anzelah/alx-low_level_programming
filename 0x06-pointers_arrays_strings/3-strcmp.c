#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string
 * @s2: string
 *
 * Return: always (0)
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		s1[i] = s2[i];
	}
	return (0);
}
