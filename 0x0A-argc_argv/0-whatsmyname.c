#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that prints its name.
 * @argc: argument count
 * @argv: vector argument
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("$s\n", argv[0]);
	return (0);
}
