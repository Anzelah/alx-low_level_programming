#include <stdio.h>

void print(void) __attribute__((constructor));

/**
 * print - entry point
 *
 * Return: always (0)
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
