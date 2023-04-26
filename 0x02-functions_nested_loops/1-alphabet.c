#include "main.h"
#include <unistd.h>
/**
 * print alphabet - Entry point
 * Return: Always 0 upon success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
