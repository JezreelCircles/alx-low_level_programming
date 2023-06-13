#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - a function text at the end of a file.
 * @filename: name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Do not create the file if it doesn't exist.
 * Return: 1 always on success otherwise -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int letter, fd, permissions;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;

		permissions = write(fd, text_content, letter);

		if (permissions == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
