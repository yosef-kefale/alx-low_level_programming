#include "holberton.h"
/**
* _isupper -checks for upper case
*
* @c: input character
* Return: 1 for upper and 0 for lower
*/
int _isupper(int c)
{
char i;
for (i = 'A';i = 'Z'; i++)
{
if (c == i)
{
return (1);
}
else
{
return (0);
}
}
}
