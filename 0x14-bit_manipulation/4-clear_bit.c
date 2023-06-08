#include "main.h"
#include <stdio.h>

/**
 * clear_bit -  a function that sets the value of a bit to 0 at a given index.
 * @n: unsigned long integer.
 * @index: unsigned integer.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear;

	if (index > 63)
		return (-1);

	clear = 1 << index;

	if (*n & clear)
		*n ^= clear;

	return (1);
}
