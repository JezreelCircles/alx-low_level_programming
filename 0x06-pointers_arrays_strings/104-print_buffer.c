#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int c, z, r;

	c = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (c < size)
	{
		z = size - c < 10 ? size - c : 10;
		printf("%08x: ", c);
		for (r = 0; r < 10; r++)
		{
			if (r < z)
				printf("%02x", *(b + c + r));
			else
				printf("  ");
			if (r % 2)
			{
				printf(" ");
			}
		}
		for (r = 0; r < z; r++)
		{
			int s = *(b + c + r);

			if (s < 32 || s > 132)
			{
				s = '.';
			}
			printf("%c", s);
		}
		printf("\n");
		c += 10;
	}
}
