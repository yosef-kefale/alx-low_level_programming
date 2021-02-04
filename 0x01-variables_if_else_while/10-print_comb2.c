#include <stdio.h>
/**
* main - random numbers
* Return: last digit
*/
int main(void)
{
int i;
for (i = 0; i < 100 ; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
{
putchar(',');
putchar(' ');
}
}
return (0);
}
