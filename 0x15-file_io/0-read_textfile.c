#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - read a textfile and print to POSIX standard output
 * @filename: pointer to file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	int fd;
	ssize_t bts = 0; /* contains number of characters read */

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);

	/* reads data then stores it in the bts variable */
	bts = read(fd, buffer, letters);

	if (bts > 0)
	{
		write(STDOUT_FILENO, buffer, bts);
	}

	close(fd);
	free(buffer);

	return (bts);
}
