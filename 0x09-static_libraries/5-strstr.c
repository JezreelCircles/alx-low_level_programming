#include <stdio.h>
#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 * @needle: substring with the first occurrence
 * @haystack: string with substring needle
 *
 * Return: pointer to the beginning of the located substring -
 * NULL: if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
int index = 0;

if (*needle == 0)
return (haystack);

while (*haystack)
{
index = 0;
if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystack);
index++;
} while (haystack[index] == needle[index]);
}
haystack++;
}
return ('\0');

}
