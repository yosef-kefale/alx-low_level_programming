#include "holberton.h"
/**
* print_times_table - does my stuff
* print the alphabet
*
* @n: times
*/
void print_times_table(int n)
{
int i;
int j;
if (n < 15 && n > 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int table = i * j;
if (j != n)
{
_putchar('0' + table);
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
_putchar('0' + table);
}
_putchar("\n");
}
}
}
