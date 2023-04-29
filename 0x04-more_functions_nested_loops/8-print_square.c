#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_square - prints a square, followed by a new line
 * @#: to print the square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
int i, j;

if (size <= 0)
putchar('\n');

for (i = 0; i < size; i++)
{
for (j = 0; j < (size); j++)
{
putchar('#');
}
putchar('\n');
}
}
