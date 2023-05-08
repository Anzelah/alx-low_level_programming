#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
	char *buffer = malloc(letters);
	FILE *fp;
	ssize_t bts = 0; /* contains number of characters read */

	fp = fopen(filename, "r");

	if (fp == NULL || filename == NULL)
		return (0);

	/* reads data then stores it in the bts variable */
	bts = fread(buffer, sizeof(char), letters, fp);

	if (bts > 0)
	{
		write(STDOUT_FILENO, buffer, bts);
	}

	fclose(fp);
	free(buffer);

	return (bts);
}
