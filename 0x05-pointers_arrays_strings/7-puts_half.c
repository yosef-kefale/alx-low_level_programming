#include "holberton.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
char inputString[100];
char leftHalf[100];
char rightHalf[100];
int length;
int mid;
int i;
int k;
inputString = str;
while (*str != '\0')
{
length++;
str++;
}
mid = length/2;
for(i = 0; i < mid; i++) {
leftHalf[i]= inputString[i];
}
leftHalf[i] = '\0'; 
for(i = mid, k = 0; i <= length; i++, k++) {
rightHalf[k]= inputString[i];
}
str = rightHalf;
return 0;
}
