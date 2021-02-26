#include "holberton.h"
/**
* _puts -change value using the pointer address
*
*@str: stores the input
*/
void _puts(char *str)
{
char temp;
int length = 0;
while (*str != '\0')
{
temp = *str;
_putchar(temp);
length++;
str++;
}
_putchar('\n');
}
