#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: the name of the file
 * @text_content: contents to be added into the file
 *
 * Return: 1 if file exists and -1 if it doesn't
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0, bts = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND , 0664);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		bts = write(fd, text_content, len);

		if (bts == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
