#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: string to be printed between strings
 * @n: number of strings passed onto function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *ch;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(str, char *);

		if (ch == NULL)
			printf("(nil)");
		else
			printf("%s", ch);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
