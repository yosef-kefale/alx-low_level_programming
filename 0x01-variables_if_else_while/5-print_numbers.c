#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
num = 0;
while (num < 10)
{
int m = num % 10;
printf("%d", m);
num--;
}
return (0);
}
