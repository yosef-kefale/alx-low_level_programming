#include "holberton.h"
/**
* _puts -change value using the pointer address
*
*@str: stores the input
*/
void _puts(char *str)
{
int length = 0;
while (*str != '\0')
{
_putchar(str);
length++;
str++;
}
}
