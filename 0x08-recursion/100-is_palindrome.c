#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - findwhether the string is a palindrome
 * @s: string to check
 *
 * Return: 1 if its palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int n = '\0' - 1;

	if (i >= n)
		return (1);

	if (s[i++] == s[n--])
		return (is_palindrome(s + 1));
	else
		return (0);
}
