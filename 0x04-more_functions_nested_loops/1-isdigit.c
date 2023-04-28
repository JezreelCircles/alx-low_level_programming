#include "main.h"
#include <stdio.h>

/**
 * _isadigit - checks for a digit (0 through 9).
 * @c: the character to be checked
 * Return: 1 for digit character or 0 for anything else
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
