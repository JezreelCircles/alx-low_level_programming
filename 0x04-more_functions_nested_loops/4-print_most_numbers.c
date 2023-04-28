#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9 followed by a new line.
 * Do not print: number 2 and 4.
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if (!(c == '2' || c == '4'))
putchar(c);
}
putchar('\n');
}
