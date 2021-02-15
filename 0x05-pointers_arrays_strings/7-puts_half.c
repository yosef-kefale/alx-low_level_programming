#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
char temp;
int halflength = 0;
int length = 0;
/*
while (*str != '\0')
{
halflength ++;
str++;
}
halflength = length / 2;
*/
while (*str != '\0')
{
temp = *str;
if (length >= halflength)
{
_putchar(temp);
}
length++;
str ++;
}
_putchar('\n');
}
