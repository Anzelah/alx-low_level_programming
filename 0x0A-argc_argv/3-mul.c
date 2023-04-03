#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc:counts number of arguments
 * @argv: array containing these arguments
 *
 * Return: 0 on success, otherwise return 1
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
