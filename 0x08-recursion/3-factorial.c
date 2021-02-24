#include "holberton.h"
/**
* factorial -factorial calculator
*
*@n: factorial number
*/
int factorial(int n)
{
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
