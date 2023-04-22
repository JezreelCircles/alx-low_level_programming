#include <stdio.h>

/**
 * main - print the alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char lowercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
	putchar(lowercase);
	}
	putchar('\n');
return (0);
}
