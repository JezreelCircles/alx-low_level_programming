#include <stdio.h>
#include "main.h"

/**
 * print_chessboard -  a function that prints the chessboard.
 * @a: pointer to pieces to be printed
 * Return: void
 */


void print_chessboard(char (*a)[8])
{
int b, r;
b = 0;
r = 0;

for (b = 0; b < 8; b++)
{
	for (r = 0; r < 8; r++)
	{
		_putchar(a[b][r]);
	}
	_putchar('\n');
}
}
