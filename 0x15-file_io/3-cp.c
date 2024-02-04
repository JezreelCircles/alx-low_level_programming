#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - function that checks if files can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 *
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int from, to, errClose;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp from to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from, to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(to, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	errClose = close(from);
	if (errClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	errClose = close(to);
	if (errClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
