#include "holberton.h"
/**
* times_table - calculates time table
*  its mine damnit
*
* Time table.
*/
void times_table(void)
{
int i;
int j;
int r;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
r = i * j;
_putchar('h');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
