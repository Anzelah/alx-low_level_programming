#include "main.h"
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
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	else
		printf("Error\n");
	return (1);
}
