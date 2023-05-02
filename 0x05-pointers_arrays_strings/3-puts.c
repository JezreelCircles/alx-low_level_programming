#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: to represent a string
 * Return: string and a new line
 */

void _puts(char *str)
{
int p = 0;
while (str[p])
{
_putchar(str[p]);
p++;
}
_putchar('\n');
}
