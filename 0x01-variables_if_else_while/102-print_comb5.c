#include <stdio.h>
/**
*main - Entry point, print 00 to 99 using putchar
*Return: Always 0 (Success)
*/
int main(void)
{
int x;
int y;
for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (a = '0'; a <= '9'; a++)
{
for (a = '0'; a <= '9'; a++)
{
if (x < y)
{
putchar(x);
putchar(y);
putchar(' ');
putchar(a);
putchar(b);
if (!(x == '8' && y == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
