#include "holberton.h"
/**
* print_square -checks for upper case
*
* @size: return nothing
* Return: 1 for digit and 0 for else
*/
void print_square(int size)
{
int i;
int j;
for(i = 0; i <= size; i++)
{
for(j = 0; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
