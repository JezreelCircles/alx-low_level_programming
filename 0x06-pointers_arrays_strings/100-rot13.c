#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encodes a string using rot13
 * @s: the string
 *
 * Return: the encoded string
 */

char *rot13(char *s)
{

int r, g;
char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

for (r = 0; s[r] != '\0'; r++)
{
for (g = 0; g < 52; g++)
{
if (s[r] == letters1[g])
{
s[r] = letters2[g];
break;
}
}
}

return (s);

}
