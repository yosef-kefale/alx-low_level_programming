#include "holberton.h"
/**
* print_last_digit - does my stuff
* @n: its mine damnit
*
* Return: last digit.
*/
int print_last_digit(int n)
{
int Last;
Last = n % 10;
if(Last >= 0)
{
_putchar(Last + '0');
}
else
{
Last = Last * -1;
_putchar(Last + '0');   
}
return (Last);
}
