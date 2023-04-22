#include <stdio.h>
#include "stdarg.h"
#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of arguments passed onto the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	const char *sep = ", ";

	va_list list;

	va_start(list, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), sep);
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");

	va_end(list);
}