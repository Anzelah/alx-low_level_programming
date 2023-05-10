#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * @argc: counts the number of arguments
 * @argv: contains arguments passed onto the program
 *
 * Return: 0 on success, -1 on failure
 */

int main(int argc, char *argv[])
{
	int fd, fp;
	ssize_t brts, bts;
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
		return (-1);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	bts = read(fd, buffer, 1024);

	if (fd == -1 || bts == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close(fd);

	fp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	brts = write(fp, buffer, bts);

	if (fp == -1 || brts == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", (argv[2]));
		exit(99);
	}

	while (bts > 0)
	{
		open(argv[2], O_WRONLY | O_APPEND);
	}
	
	if (close(fp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (fp));
		exit(100);
	}
	free(buffer);
	return (0);
}
