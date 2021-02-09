#include <stdio.h>
/**
* main - random numbers
* Return: last digit
*/
int main(void)
{
int n = 1024;
int remain3;
int remain5;
int sum;
sum = 0;
for (int i = 0; i < n; i++)
{
remain5 = i % 5;
remain3 = i % 3;
if (remain3 == 0 || remain5 == 0)
{
sum = sum + i;
}
}
printf("%d", sum);
}
