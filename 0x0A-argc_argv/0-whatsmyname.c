#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: array of the strings for arguments
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
