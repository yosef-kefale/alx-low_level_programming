#include "holberton.h"
/**
* _strlen -change value using the pointer address
*
*@s: stores the input
*Return: length
*/
int _strlen(char *s)
{
int length = 0; 
while (*s != '\0')
{ 
length++; 
*s++; 
} 
return length; 
}
