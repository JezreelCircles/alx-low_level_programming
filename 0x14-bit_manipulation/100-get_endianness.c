#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 for big endianness 1 for little endianness
 */

int get_endianness(void)
{
	unsigned int i;
	char *z;

	i = 1;
	z = (char *) &i;

	return ((int)*z);
}
