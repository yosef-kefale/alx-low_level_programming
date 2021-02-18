#include "holberton.h"
/**
* string_toupper -concatinate string
*
*@s: stores the input
*Return: uppercase string
*/
char *rot13(char *)
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
return (s);
}
