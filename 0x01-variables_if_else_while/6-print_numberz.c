#include <stdio.h>
/**
* main - print single digits in base 10
* Return: Always 0
*/
int main(void)
{
int numbers;
for (numbers = 0; numbers < 10' numbers++)
putchar((numbers % 10) + '0');
putchar('\n');
return (0);
}
