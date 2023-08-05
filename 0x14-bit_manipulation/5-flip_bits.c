#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number of bits
 * @m: number of bits
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	int count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			count++;
	}

	return (count);
}
