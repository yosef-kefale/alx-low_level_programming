#include "holberton.h"
/**
* print_numbers -checks for upper case
*
* @void: return nothing
* Return: 1 for digit and 0 for else
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar('0' + i);
}
_putchar('\n');
}
