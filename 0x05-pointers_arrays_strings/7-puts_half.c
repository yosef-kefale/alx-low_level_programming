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
    int length, mid, i, k;

    int length = 0;
while (*temp != '\0')
{
length++;
str++;
}

    mid = length/2;
    for(i = mid, k = 0; i <= length; i++, k++) {
 rightHalf[k]= temp[i];
      _putchar(rightHalf[k]);
    }
}
