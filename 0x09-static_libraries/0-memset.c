#include "main.h"
#include <stdio.h>

/**
 * *_memset - filling memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int k;

for (k = 0; k < n; k++)
{
s[k] = b;
}

return (s);
}
