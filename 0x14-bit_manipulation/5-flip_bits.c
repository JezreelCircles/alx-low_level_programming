#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another number.
 * @n: unsigned long integer.
 * @m: unsigned long integer.
 * no use of  % or / operators in the function.
 * Return: number found.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int count_num = 0;
	unsigned long int current_num;
	unsigned long int execlusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current_num = execlusive >> a;
		if (current_num & 1)
			count_num++;
	}

	return (count_num);
}
