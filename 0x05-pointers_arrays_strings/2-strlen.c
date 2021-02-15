#include "holberton.h"
/**
* _strlen -change value using the pointer address
*
*@s: stores the input
*Return: length
*/
int _strlen(char *s)
{
char h[] = *s;
int i;
while (h[i] != '\0')
{
++i;
}
return (i);
}
