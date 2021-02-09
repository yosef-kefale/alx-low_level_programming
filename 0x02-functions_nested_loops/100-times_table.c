#include "holberton.h"
/**
* print_times_table - does my stuff
* print the alphabet
*
* @n: times
*/
void print_times_table(int n)
{
int row;
int column;
int product;
int remain100;
if (n < 15 && n > 0)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = (row * column);
remain100 = (product % 100);
if (column == 0)
{
_putchar('0' + product);
}
else if (product <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product > 9 && product < 100)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
else if (product > 99)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (product / 100));
_putchar('0' + (remain100 / 10));
_putchar('0' + (product % 10));
}
}
_putchar('\n');
}
}
}
