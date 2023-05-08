#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  a function that prints the sum of the two diagonals
 * of a square matrix of integers
 *@a: the matrix of integers
 *@size: size of the matrix
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int index, Sum, sum;

	index = 0;
	Sum = 0;
	sum = 0;

for (index = 0; index < size; index++)
{
	Sum += a[index];
	a += size;
}

a -= size;

for (index = 0; index < size; index++)
{
	sum += a[index];
	a -= size;
}
printf("%i, %i\n", Sum, sum);
}
