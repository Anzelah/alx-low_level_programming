#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: 0
*/

void rev_string(char *s)
{
	char rev = s[0];
	int d = 0;
	int i;

	while (s[d] != '\0')
		d++;
	for (i = 0; i < d; i++)
	{
		d--;
		rev = s[i];
		s[i] = s[d];
		s[d] = rev;
	}
}
