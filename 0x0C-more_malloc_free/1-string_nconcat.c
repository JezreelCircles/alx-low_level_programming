#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  a function that concatenates two strings.
 * @s1:string to append to
 * @s2:string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the string in result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int c, m, l, k;

	c = 0;
	m = 0;
	l = 0;
	k = 0;

	while (s1 && s1[l])
		l++;
	while (s2 && s2[k])
		k++;

	if (n < k)
		s = malloc(sizeof(char) * (l + n + 1));
	else
		s = malloc(sizeof(char) * (l + k + 1));

	if (!s)
		return (NULL);

	while (c < l)
	{
		s[c] = s1[c];
		c++;
	}

	while (n < k && c < (l + n))
		s[c++] = s2[m++];

	while (n >= k && c < (l + k))
		s[c++] = s2[m++];

	s[c] = '\0';

	return (s);
}
