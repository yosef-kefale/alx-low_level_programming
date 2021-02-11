#include "holberton.h"
/**
* print_most_numbers - print numbers 0-14
*
* @void: return nothing
* Return: 1 for digit and 0 for else
*/
void more_numbers(void)
{
int i;
int j;
int remain;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
remain = j % 10;
if (j > 9)
{
_putchar('0' + (j / 10));
_putchar('0' + (j % 10));
}
else{
_putchar('0' + j);
}
}
_putchar('\n');
}
_putchar('\n');
}
