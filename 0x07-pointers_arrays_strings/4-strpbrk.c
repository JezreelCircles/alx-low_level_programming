#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string containing the first occurrence
 * @accept: string containing bytes
 * Return: pointer to the byte in @s that matches one of the bytes in @accept -
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{

int index;
index = 0;

while (*s)
for (index = 0; accept[index]; index++)

{
if (*s == accept[index])
return (s);

}
s++;
return ('\0');
}
