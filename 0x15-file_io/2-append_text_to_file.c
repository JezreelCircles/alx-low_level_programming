#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file -  a function that appends text at the end of a file
 * @filename: name of the file to be append
 * @text_content: the content to add to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int cw, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	cw = open(filename, O_WRONLY | O_APPEND);
	w = write(cw, text_content, len);

	if (cw == -1 || w == -1)
		return (-1);

	close(cw);

	return (1);
}
