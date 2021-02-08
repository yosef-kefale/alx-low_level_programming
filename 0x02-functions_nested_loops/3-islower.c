#include "holberton.h"
/**
* _islower - does my stuff
* @c: user input
*
* Return: lower
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (0);
}
}
