#include "main.h"
#include <stdio.h>

/**
 * check_prime_number - check if a number is prime
 * @n: number to check
 * @i: iteration time
 * Return: 1 if is prime or 0 if composite
 *
 */
int check_prime_number(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to check
 * Return: int value
 */

int is_prime_number(int n)
{
	return (check_prime_number(n, 1));
}

/**
 * check_prime_number - check the number if is prime
 * @n: number to check
 * @i: iteration time
 * Return: 1 if is prime or 0 if composite
 *
 */

int check_prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime_number(n, i + 1));
}
