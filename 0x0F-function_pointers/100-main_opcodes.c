#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * @argc: argument count
 * @argv: array of character listing all arguments
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int bytes;
	int i;
	char *ch;

	if (argc > 2)
	{
		printf("Error\n");
	}
	exit(1);

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
	}
	exit(2);

	ch = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("0x%02x\n", ch[i]);
	}
	return (0);
}
