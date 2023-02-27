#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @src: copy from
 * @dest: copy to
 *
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; ++i)
	{
		src[i] = dest[i];
	}

	dest[i] = '\0';
}
