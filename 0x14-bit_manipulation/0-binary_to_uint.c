#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned integer
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int bin;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (bin = 0; b[bin] != '\0'; bin++)
	{
		if (b[bin] != '0' && b[bin] != '1')
			return (0);
	}
	for (bin = 0; b[bin] != '\0'; bin++)
	{
		num <<= 1;
		if (b[bin] == '1')
			num += 1;
	}
	return (num);
}
