#include "holberton.h"
/**
* factorial -factorial calculator
*
*@n: factorial number
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
