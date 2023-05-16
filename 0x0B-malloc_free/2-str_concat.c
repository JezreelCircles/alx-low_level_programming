#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *conct;

	int l, c;

	if (s1 == NULL)

	s1 = "";

	if (s2 == NULL)

	s2 = "";
	l = c = 0;

	while (s1[l] != '\0')
	l++;

	while (s2[c] != '\0')
	c++;
	conct = malloc(sizeof(char) * (l + c + 1));

	if (conct == NULL)
	return (NULL);

	l = c = 0;
	while (s1[l] != '\0')
	{
		conct[l] = s1[l];
		l++;
	}

	while (s2[c] != '\0')
	{
		conct[l] = s2[c];
		l++, c++;
	}
	conct[l] = '\0';
	return (conct);
}
