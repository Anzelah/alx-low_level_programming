#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer ot the memory block to fill
 * @b: value to be set
 * @n: size of memory to set to value
 *
 * Return: character
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
