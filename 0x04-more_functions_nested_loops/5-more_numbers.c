#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* more_numbers - prints 10 times the numbers, from 0 to 14,
* followed by a new line.
*
* Return:void
*/

void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; j++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
putchar('1');
putchar(j % 10 + '0');
}
putchar('\n');
}
}
