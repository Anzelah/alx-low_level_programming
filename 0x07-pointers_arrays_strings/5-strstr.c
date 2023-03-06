#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string to be scanned
 * @needle: the substring to be searched
 *
 * Return: always (0)
*/

char *_strstr(char *haystack, char *needle)
{
	char *c = haystack;
	char *d = needle;

	for (; *c != '\0'; *c++)
	{
		while (*c == *d && *d != '\0')
		{
			c++;
			d++;
		}

	if (*d == '\0')
		return (haystack);
	}
	return (0);
}
