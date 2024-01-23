#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value bit, otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	check = n & d;
	if (check == d)
		return (1);
	return (0);
}
