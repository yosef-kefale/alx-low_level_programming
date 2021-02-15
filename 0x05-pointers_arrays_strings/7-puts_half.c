#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
char temp;
char *temp2;
int halflength = 0;
int length = 0;
temp2 = *str;
while (*temp2 != '\0')
{
halflength ++;
temp2++;
}
halflength = halflength / 2;
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
