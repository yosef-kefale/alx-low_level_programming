#include "holberton.h"
/**
* print_rev -change value using the pointer address
*
*@s: stores the input
*/
void print_rev(char *s)
{
int i;
char *temp[100];
int length = 0;
temp = *s;
while (*s != '\0')
{
length++;
s++;
}
for(i = length - 1; i >= 0; i--)
{
temp = *(i);
_putchar(temp[i]);
}
_putchar('\n');
}
