#include "holberton.h"
/**
* print_most_numbers - print numbers 0-14
*
* @void: return nothing
* Return: 1 for digit and 0 for else
*/
void print_most_numbers(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar('0' + j);
}
_putchar('\n');
}
_putchar('\n');
}
