#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *
 * @n: number of times printed
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
putchar('\n');
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
