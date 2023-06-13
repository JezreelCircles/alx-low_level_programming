#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @old_from: file to copy from.
 * @new_file: file to copy to.
 * @argv: arguments vector.
 * Return: nothing.
 */

void error_file(int old_file, int new_file, char *argv[])
{
	if (old_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (new_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: arguments.
 * @argv: arguments vector.
 * Return: 0 upon success.
 */

int main(int argc, char *argv[])
{
	int old_file, new_file, error;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp new_file new_file");
		exit(97);
	}

	old_file = open(argv[1], O_RDONLY);
	new_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(old_file, new_file, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(old_file, buffer, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(new_file, buffer, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	error = close(old_file);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", old_file);
		exit(100);
	}

	error = close(new_file);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", old_file);
		exit(100);
	}
	return (0);
}
