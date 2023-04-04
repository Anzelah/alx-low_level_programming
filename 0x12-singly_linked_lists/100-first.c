#include <stdio.h>

void print() __attribute__((constructor));

/**
 * main - entry point
 *
 * Return: always (0)
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
