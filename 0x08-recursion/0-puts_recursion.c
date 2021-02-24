#include "holberton.h"
/**
* _puts_recursion -recurssion
*
*@s: string
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
_putchar(*s[i]);
_puts_recursion(s + 1);
}
