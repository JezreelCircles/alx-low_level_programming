#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search for
 * @index: index of the bit to get
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);

	val_bit = (n >> index) & 1;

	return (val_bit);
}
