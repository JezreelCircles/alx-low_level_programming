#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary number to an unsigned
 * integer.
 * @b: pointer to a string of 0 and 1 characters.
 * Return: converted number or 0 if @b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int converted_num = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		converted_num = 2 * converted_num + (b[a] - '0');
	}

	return (converted_num);
}
