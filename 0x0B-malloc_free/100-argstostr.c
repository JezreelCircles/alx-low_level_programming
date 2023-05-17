#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
	int I, N, K = 0, M = 0;

	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (I = 0; I < ac; I++)

	{
	for (N = 0; av[I][N]; N++)

	M++;
	}

	M += ac;
	str = malloc(sizeof(char) * M + 1);

	if (str == NULL)
	return (NULL);

	for (I = 0; I < ac; I++)

	{
	for (N = 0; av[I][N]; N++)
	{
		str[K] = av[I][N];
		K++;
	}

	if (str[K] == '\0')
	{
		str[K++] = '\n';
	}

	}
	return (str);

}
