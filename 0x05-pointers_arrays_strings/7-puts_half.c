#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
char temp;
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
length = length / 2;
str = str + length;
while (*str != '\0')
{
temp = *str;
_putchar(temp);
length++;
str++;
}
_putchar('\n');
}
