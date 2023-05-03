#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: Input array
 * @n: Length of the array
 *
 *
 */

void print_array(int *a, int n)
{
int index;

for (index = 0; index < n; index++)
{
printf("%d", a[index]);
if (index != (n - 1))
{
printf(" , ");
}
}

printf("\n");

}
