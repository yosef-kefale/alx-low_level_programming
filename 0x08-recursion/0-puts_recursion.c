#include "holberton.h"
/**
* _puts_recursion -recurssion
*
*@s: string
*Return: dest
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(s[i]);
_puts_recursion(s + 1);
}
}
