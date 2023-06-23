#include "calc.h"

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main()
{
	printf("2 + 1 = %d\n", calculator('+', 2, 1));
	printf("2 - 1 = %d\n", calculator('-', 2, 1));
	printf("2 * 1 = %d\n", calculator('*', 2, 1));
	printf("2 / 1 = %d\n", calculator('/', 2, 1));
	printf("2 % 1 = %d\n", calculator('%', 2, 1));

	return (0);
}
