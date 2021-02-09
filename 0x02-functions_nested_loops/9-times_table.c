#include "holberton.h"
/**
* times_table - calculates time table
*  its mine damnit
*
* Time table.
*/
void times_table(void)
{
char i;
char j;
char r;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
r = i * j;
_putchar('0' + r);
}
_putchar('\n');
}
}
