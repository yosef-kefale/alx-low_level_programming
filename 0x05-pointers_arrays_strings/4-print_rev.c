#include "holberton.h"
/**
* print_rev -change value using the pointer address
*
*@s: stores the input
*/
void print_rev(char *s)
{
int i;
char temp;
int length = 0;
char str[100];
str = *s;
while (*s != '\0')
{
length++;
s++;
}
for(i = length - 1; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
