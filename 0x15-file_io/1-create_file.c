#include <stdlib.h>
#include "main.h"

/**
 * create_file -  a function that creates a file.
 * @text_content: NULL terminated string to write to the file.
 * @filename: name of the file to be created.
 * Return: 1 oon success, -1 on failure
 * created file must have rw permissions.
 */

int create_file(const char *filename, char *text_content)
{
	int letter, permissions, fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
			return (-1);
	if (!text_content)
		text_content = "";

	for (letter = 0; text_content[letter]; letter++)
		;
	permissions = write(fd, text_content, letter);

	if (permissions == -1)
		return (-1);
	close (fd);

	return (1);
}
