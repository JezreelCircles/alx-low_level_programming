#include "main.h"
#include <stdio.h>

/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */

char *leet(char *s)
{
char a[] = "aeotlAEOTL";
char n[] = "4307143071";
int o = 0;
int j;

while (*(s + o) != '\0')
{
for (j = 0; j <= 9; j++)
{
if (*(s + o) == a[j])
{
*(s + o) = n[j];
}
}
o++;
}
return (s);

}
