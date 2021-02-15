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
for (i = 0; s[i] != '\0'; ++i);
return (i);
}
