#include <stdio.h>
/**
* print_times_table - does my stuff
* print the alphabet
*
* @n: times
*/
void print_times_table(int n)
{
if (n < 15 && n > 0)
{
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
int table = i * j;
if (j != n)
{
printf("%d, ", table);
}
else
printf("%d", table);
}
printf("\n");
}
}
}
