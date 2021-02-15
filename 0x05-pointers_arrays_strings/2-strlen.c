#include "holberton.h"
/**
* _strlen -change value using the pointer address
*
*@s: stores the input
*Return: length
*/
int _strlen(char *s)
{
char str = *s;
char h[] = *str;
int i;
while (h[i] != '\0')
{
++i;
}
return (i);
}
