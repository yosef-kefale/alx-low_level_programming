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
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
