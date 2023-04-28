#include "main.h"
#include <stdio.h>

/**
 * _isadigit - Checks for a digit
 *
 * @c: The character to be checked
 *
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
