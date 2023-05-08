#include <stdio.h>
#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: number of bytes in the initial segment
 * @accept: consists of bytes
 * Return: number of bytes in @s which consists of bytes only from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes, index;

	bytes = 0;
	index = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
return (index);
}
