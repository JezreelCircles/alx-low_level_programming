#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input
 * @index: index of the bit
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int Bit;

	if (n == 0 && index < 64)
		return (0);

	for (Bit = 0; Bit <= 63; n >>= 1, Bit++)
	{
		if (index == Bit)
		{
			return (n & 1);
		}
	}

	return (-1);
}
