#include <stdio.h>

/**
 * main - print alphabet in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
char la;
for (la = 'a'; la <= 'z'; la++)
{
if (la != 'e' && la != 'q')
putchar(la);
}
return (0);
}