#include "holberton.h"
/**
* puts2 -change value using the pointer address
*
*@str: stores the input
*/
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(str);
str += 2;
}
_putchar('\n');
}
