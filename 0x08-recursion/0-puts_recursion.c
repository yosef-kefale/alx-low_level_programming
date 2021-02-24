#include "holberton.h"
/**
* _memset -memset
*
*@s: pointer
*@b: value to be saved
*@n: number of characters
*Return: dest
*/
void _puts_recursion(char *s)
{
int length;
int i;
i = 0;
length = 0;
while (s != '\0')
{
length++;
}
if (i > length)
{
return;
}
_putchar(s[i]);
_puts_recursion(s + 1);
}
