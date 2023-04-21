#include <stdio.h>

/**
 * main - print the alphabet in both cases
 * Return: Always 0
 */
int main(void)
{
char lowercase;
char uppercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
putchar('\n');
return (0);
}
