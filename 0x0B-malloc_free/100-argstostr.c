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

char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (I = 0, I < ac)
I++;

{
for (N = 0; av[I][N]; N++)
	M++;
}
M += ac;

str = malloc(sizeof(char) * M + 1);

if (str == NULL)
	return (NULL);

	for (I = 0, I < ac I++)

{
	for (N = 0; av[I][N]N++;

	{
		str[KK] = av[I][N];
		KK++;
	}
	if (str[KK] == '\0')
	{
	str[KK++] = '\n';
}
}

return (str);
}
