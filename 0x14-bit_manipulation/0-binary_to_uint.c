#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base;
		}
	}

	return (ui);
}
