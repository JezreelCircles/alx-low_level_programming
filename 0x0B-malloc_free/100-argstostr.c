#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function to convert parameters passed to the program to string.
 * @ac: int input
 * @av: double pointer array
 * Return: a pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
int I = 0, N = 0, KK = 0, M = 0;

char *s;

if (ac == 0 || av == NULL)
return (NULL);

while (I < ac)
{
while (av[I][N])
{
	KK++;
	N++;
}
N = 0;
I++;
}

s = malloc((sizeof(char) * KK) + ac + 1);

I = 0;
while (av[I])
{
	while (av[I][N])
	{
		s[M] = av[I][N];
		M++;
		N++;
	}
	s[M] = '\n';

	N = 0;
	M++;
	I++;
}

M++;
s[M] = '\0';
return (s);
}
