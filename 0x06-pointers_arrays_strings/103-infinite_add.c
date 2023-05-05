#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int g = 0;
	int a = 0;
	char temp;

	while (*(n + g) != '\0')
	{
		g++;
	}
	g--;

	for (a = 0; a < g; a++, g--)
	{
		temp = *(n + a);
		*(n + a) = *(n + g);
		*(n + g) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, g = 0, a = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + g) != '\0')
		g++;
	while (*(n2 + a) != '\0')
		a++;
	g--;
	a--;
	if (a >= size_r || g >= size_r)
		return (0);
	while (a >= 0 || g >= 0 || overflow == 1)
	{
		if (g < 0)
			val1 = 0;
		else
			val1 = *(n1 + g) - '0';
		if (a < 0)
			val2 = 0;
		else
			val2 = *(n2 + a) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		a--;
		g--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
