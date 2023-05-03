#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse.
 * @s : the used string reference pointrt
 * Return: 0
 */

void print_rev(char *s)
{

int start = 0;
int o;

while (*s != '\0')
{
start++;
s++;
}
s--;

for (o = start; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');

}
