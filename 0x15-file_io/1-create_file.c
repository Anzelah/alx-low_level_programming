#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: file to be created
 * @text_content: contents to be inputed into the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT|O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		write(STDOUT_FILENO, text_content, fd);
	}
	close (fd);
	return (1);
}
