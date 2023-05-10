#include "main.h"
#include <stdio.h>

/**
 * actual_sqrt_recursion - recursive function to find the square root
 * @n: number to find the square root of
 * @i: current integer to check if it's a square root
 *
 * Return: square root of n or -1 if no natural square root exists
*/

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to find the square root of
 *
 * Return: natural square root of n or -1 if no natural square root exists
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
return (actual_sqrt_recursion(n, 0));
}
