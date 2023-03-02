#include "main.h"

/**
 * _strncat - concentates two strings
 * @src: string
 * @dest: string
 * @n: bytes to be used
 *
 * Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = n;

	return (dest);
}
