#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
