#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function to print the binary representation of a number.
 * no arrays and malloc are allowed
 * @n: number to print in binary
 *
 */

void print_binary(unsigned long int n)
{
	int b, count = 0;
	unsigned long int current;

	for (b = 63; b >= 0; b--)
	{
		current = n >> b;

		if (current & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
