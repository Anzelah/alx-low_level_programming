#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments
 * @argc:counts number of arguments
 * @argv: array of strings containing arguments
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
