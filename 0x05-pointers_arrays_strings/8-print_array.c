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

int index_of_array;

for (index_of_array = 0; index_of_array < (n - 1); index_of_array++)
{
printf("%d", a[index_of_array]);
}
if (index_of_array == (n - 1))
{
printf("%d", a[n - 1]);
}

printf('\n');

}
