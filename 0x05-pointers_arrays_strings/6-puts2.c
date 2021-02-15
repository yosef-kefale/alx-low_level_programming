#include "holberton.h"
/**
* puts2 -change value using the pointer address
*
*@str: stores the input
*/
void puts2(char *str)
{
char temp;
int length = 0;
while (*str != '\0')
{
temp = *str;
_putchar(temp);
length++;
str += 2;
}
_putchar('\n');
}
