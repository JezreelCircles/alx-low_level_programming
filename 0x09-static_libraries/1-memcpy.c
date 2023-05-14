#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - function that copies memory area
 * @src: memory area being copied from
 * @dest: memory area being copied to
 * @n: number of bytes
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int p;
p = 0;

while (p < n)

{
dest[p] = src[p];
p++;
}

return (dest);
}
