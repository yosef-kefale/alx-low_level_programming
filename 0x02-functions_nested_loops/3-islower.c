#include "holberton.h"
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
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
