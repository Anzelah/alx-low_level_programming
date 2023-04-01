#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int number, n, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	res = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; n < 5 && number >= 0; n++)
	{
		while (number >= coins[n])
		{
			res++;
			number -= coins[n];
		}
	}
	printf("%d\n", res);

	return (0);
}
