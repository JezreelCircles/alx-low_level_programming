#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to change to get from one number to
 * another number
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, Bitcount = 0;
	unsigned long int CurrentNum;
	unsigned long int execl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		CurrentNum = execl >> i;
		if (CurrentNum & 1)
			Bitcount++;
	}

	return (Bitcount);
}
