#include "holberton.h"
/**
* print_sign - does my stuff
* @n: its mine damnit
*
* Return: sign of number
*/
int print_sign(int n)
{
if (n < 0)
{
return (-1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else if (n > 0)
{
return (1);
_putchar('-');
}
return (0);
}
