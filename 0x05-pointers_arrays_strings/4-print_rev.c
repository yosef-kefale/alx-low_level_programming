#include "holberton.h"
/**
* print_rev -change value using the pointer address
*
*@s: stores the input
*/
void print_rev(char *s)
{
int i;
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
for(i = length - 1; i >= 0; i--)
{
char temp;
temp = *(str + i);
_putchar(temp);
}
_putchar('\n');
}
