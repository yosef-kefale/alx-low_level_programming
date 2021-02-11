#include "holberton.h"
/**
* main -checks for upper case
*
* @size: return nothing
* Return: 1 for digit and 0 for else
*/
void print_triangle(int size)
{
int i;
int j;
int k;
if (size == 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= size; i++)
{
for (j = size; j >= i; j--)
{
_putchar(' ');
}
for (k=1; k<=i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
