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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
