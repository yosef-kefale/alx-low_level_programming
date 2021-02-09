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
int rem;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
r = i * j;
rem = r / 10;
if (rem >= 1)
{
_putchar('0' + (r / 10));
_putchar('0' + (r % 10));
_putchar(',');
}
else
_putchar('0' + (r));
}
_putchar('\n');
}
}
