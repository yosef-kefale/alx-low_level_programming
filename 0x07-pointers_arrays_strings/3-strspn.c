#include "holberton.h"
/**
* _strspn -check character in a string
*
*@s: source
*@accept: character
*Return: number of characters
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int length;
while (*s != ',')
{
while (*accept != '\0')
{
if (*s == *accept)
{
length++;
} 
accept++;
}
s++;
}
return (length);
return (0);
}
