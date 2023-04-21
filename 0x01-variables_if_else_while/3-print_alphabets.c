#include <stdio.h>

/**
 * main - print the alphabet in both cases
 * Return: Always 0
 */
int main(void)
{
char uppercase;

for (uppercase = 'a'; uppercase <= 'z'; uppercase++)
{
putchar(uppercase);
}
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
putchar(uppercase);
putchar('\n');
return (0);
}
