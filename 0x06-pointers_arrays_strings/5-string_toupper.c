#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *s)
{

int j = 0;

while (*(s + j) != '\0')
{
if (*(s + j) >= 'a' && *(s + j) <= 'z')
{
*(s + j) = *(s + j) - 32;
}
j++;
}
return (s);

}
