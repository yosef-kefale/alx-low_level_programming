#include <stdio.h>
/**
 *main - Entry point, print 00 to 99 using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
int x;
char y;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
