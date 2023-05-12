#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that prints its name.
 * @argc: argument count
 * @argv: vector argument
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{

	printf("%s\n", *argv);

	return (0);
}
