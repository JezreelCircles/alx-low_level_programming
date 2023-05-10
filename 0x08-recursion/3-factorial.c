#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: if less than 0, function should return -1 to indicate an error
 * factorial of 0 is 1
 * Return: factorial of n
 */

int factorial(int n)
{

	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
