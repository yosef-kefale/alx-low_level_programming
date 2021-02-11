#include "holberton.h"
/**
* _isdigit -checks for upper case
*
* @c: input character
* Return: 1 for digit and 0 for else
*/
int _isdigit(int c)(int c)
{
int ch;
for (ch = 0 ; ch <= 9 ; ch++)
{
if (ch == c)
return (1);
else
return (0);
}
return (0);
}
