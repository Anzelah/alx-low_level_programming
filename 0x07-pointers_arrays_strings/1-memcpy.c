#include "main.h"

/**
 * _memcpy - copes memory area
 * @dest: destination where content is to be copied
 * @src: data source to be copied
 * @n: number of bytes to be copied
 *
 * Return: character
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
