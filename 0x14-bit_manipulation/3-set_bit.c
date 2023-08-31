#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 on success if an error occurred -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int g;

	if (index > 63)
		return (-1);

	g = 1 << index;
	*n = (*n | g);

	return (1);
}
