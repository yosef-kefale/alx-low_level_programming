#include "holberton.h"
/**
* _strlen_recursion - reverse using recurssion
*
*@s: string
*/
int _strlen_recursion(char *s)
{
int length;
length = 0;
if (*s)
{
length++;
_print_rev_recursion(s+1);
}
else
{
return (length);
_putchar('\n');
}
return (0);
}
