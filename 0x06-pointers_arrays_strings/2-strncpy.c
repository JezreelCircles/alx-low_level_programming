#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - find the length of a string
 * @dest: pointer to the string
 * @src: pointer
 * @n: int
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{

int m;

for (m = 0; m < n && src[m] != '\0'; m++)
dest[m] = src[m];

for ( ; m < n; m++)
dest[m] = '\0';

return (dest);
}
