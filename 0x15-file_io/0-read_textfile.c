#include <stdio.h>
#include "main.h"


/**
 * read_textfile- a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: file being read
 * @letters: number of letters to be read
 * Return: number of bytes read and printed
 * 0 when function fails or filename is NULL.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
