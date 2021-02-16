#include "holberton.h"
/**
* puts2 -change value using the pointer address
*
*@str: stores the input
*/
void puts2(char *str)
{
char temp;
while (*str != '\0')
{
temp = *str;
_putchar(temp);
str += 2;
}
_putchar('\n');
}
