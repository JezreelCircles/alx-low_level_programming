#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{

int g = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
g++;
dest[i] = src[g];
i++;

} while (src[g] != '\0');

return (dest);
}
