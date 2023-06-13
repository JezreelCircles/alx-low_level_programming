#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: if is NULL return zero
 * @letters: where letters is the number of letters it should read and print
 * Return:  actual number of letters it could read and print if not 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

int fd;
	ssize_t aa, bb;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	aa = read(fd, buffer, letters);
	bb = write(STDOUT_FILENO, buffer, aa);

	close(fd);

	free(buffer);

	return (bb);
}
