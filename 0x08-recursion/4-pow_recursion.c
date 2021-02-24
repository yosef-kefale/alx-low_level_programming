#include "holberton.h"
/**
* factorial -factorial calculator
*
*@n: factorial number
*/
int _pow_recursion(int x, int y)
{
if(exponent == 0)
{
return (1);
}
els if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
