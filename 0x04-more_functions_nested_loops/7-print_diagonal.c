#include "holberton.h"
/**
* print_diagonal -checks for upper case
*
* @n: return nothing
* Return: 1 for digit and 0 for else
*/
void print_diagonal(int n)
{
int i;
for (i = 0; i <= n; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
