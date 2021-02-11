#include "holberton.h"
/**
* _isdigit -checks for upper case
*
* @c: input character
* Return: 1 for digit and 0 for else
*/
int _isdigit(int c)
{
char ch;
for (ch = 48 ; ch <= 57 ; ch++)
{
if (ch == c)
return (1);
else
return (0);
}
return (0);
}
