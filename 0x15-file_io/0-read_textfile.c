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
	char *ch;
	ssize_t bts = 0; /* number of bytes read */

	fp = fopen(filename, "r");

	if (fp == NULL || filename == NULL)
		return (0);

	ch = fgets(buffer, letters, fp);

	if (ch != NULL)
	{
		write(STDOUT_FILENO, buffer, bts);
	}
	
	fclose(fp);
	free(buffer);

	return(bts);
}
