#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
char *temp = str;
char rightHalf[100];
int length;
int k;
int i;
int mid;
length = 0;
while (*temp != '\0')
{
length++;
temp++;
}
mid = length/2;
for (i = mid, k = 0; i <= length; i++, k++)
{
_putchar(rightHalf[k]);
rightHalf[k] = temp[i];
}
}
