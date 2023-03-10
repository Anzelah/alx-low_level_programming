#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: arguments supplied into the program
 * @argv: array of strings
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc);
	}
	return (0);
}
