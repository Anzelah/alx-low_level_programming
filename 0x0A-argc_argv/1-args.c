#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: arguments supplied into the program
 * @argv: array of strings
 *
 * Return: number of arguments
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
