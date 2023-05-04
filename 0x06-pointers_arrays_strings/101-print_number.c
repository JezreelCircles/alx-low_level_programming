#include "main.h"
#include <stdio.h>
/**
 * print_number - print an int numbers
 * @n: number tested
 * Return: Always 0
 */
void print_number(int n)
{

int o, h, digit, digits, power;
unsigned int temp, numchar, number;

digit = 0;
if (n < 0)
{
_putchar('-');
temp = -n;
}
else
{
temp = n;
}

number = temp;

while (number >= 10)
{
number = number / 10;
digit++;
}
digits = digit + 1;
power = 1;
o = 1;

while (o < digits)
{
power = power * 10;
o++;
}
h = power;
while (h >= 1)
{
numchar = (temp / h) % 10;
_putchar(numchar + '0');
h = h / 10;
}

}
