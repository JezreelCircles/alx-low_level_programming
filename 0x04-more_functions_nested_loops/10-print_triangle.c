#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: size of the triangle
 * @#: to print the triangle
 * Return: void
 */

void print_triangle(int size)
{
int row, hashes, spaces;

if (size <= 0)
{
putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces >= 1; spaces--)
{
putchar(' ');
}
for (hashes = 1; hashes <= row; hashes++)
{
putchar('#');
}
putchar('\n');
}
}
}
