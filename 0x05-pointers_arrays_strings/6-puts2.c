#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts2 - prints xters of a string
 * @str: used string reference
 * Return: Always 0.
 */

void puts2(char *str)
{

int v = 0;

while (str[v] != '\0')
{
if (v % 2 == 0)
{
_putchar(str[v]);
}
v++;
}
_putchar('\n');
}
