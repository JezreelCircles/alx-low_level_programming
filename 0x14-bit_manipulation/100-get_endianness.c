#include "main.h"
#include <stdio.h>
/**
 * get_endianness -function that checks the endianness of a program
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int a = 1;
	char *x;

	x = (char *)&a;
	return (*x);
}
