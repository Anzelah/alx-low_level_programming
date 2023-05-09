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
	int fd, bts = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT| O_RDWR | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		bts = write(fd, text_content, len);
		if (bts == -1 || fd == -1)
			return (-1);
	}
	close (fd);

	return (1);
}
