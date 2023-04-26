#include "main.h"

/**
* main - check the code for lowercase
* @c: Character to be checked
* Return: Always 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
