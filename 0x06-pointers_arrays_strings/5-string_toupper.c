#include "holberton.h"
/**
* string_toupper -concatinate string
*
*@dest: stores the input
*@src: source
*@n: number of characters
*Return: dest
*/
char *string_toupper(char *s)
{
int c = 0;
while (s[c] != '\0')
{
if (s[c] >= 'a' && s[c] <= 'z')
{
s[c] = s[c] - 32;
}
c++;
}
}
