#include <stdio.h>
#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= power; i++)
		number *= base;
	return (number);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int d, check;
	char flag;

	flag = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		check = n & d;
		if (check == d)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag == 1 || d == 1)
		{
			putchar('0');
		}
		d >>= 1;
	}
}
