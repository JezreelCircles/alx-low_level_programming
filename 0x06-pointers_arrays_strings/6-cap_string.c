#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */

char *cap_string(char *s)
{

int m, o;
int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

m = 0;
while (*(s + m) != '\0')
{
if (*(s + m) >= 'a' && *(s + m) <= 'z')
{
if (m == 0)
{
*(s + m) = *(s + m) -32;
}
else
{
for (o = 0; o <= 12; o++)
{
if (a[o] == *(s + m - 1))
{
*(s + m) = *(s + m) -32;
}
}
}
}
m++;
}
return (s);

}
