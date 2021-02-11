#include "holberton.h"
/**
* _isupper -checks for upper case
*
* @c: input character
* Return: 1 for upper and 0 for lower
*/
int _isupper(int c)
{
char ch;
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
if (ch == c)
return (1);
else
return (0);
}
}
