#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: string
 * @src: string
 * @n: input value
 *
 * Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		j++;
	}
	return (dest);
}
