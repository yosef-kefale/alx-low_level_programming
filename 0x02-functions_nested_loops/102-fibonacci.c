#include <stdio.h>
/**
* printFibonacciNumbers - random numbers
* @n: last digit
*/
void printFibonacciNumbers(int n)
{
int f1;
int f2;
int i;
int Fdigit;
int next;
f1 = 0;
f2 = 1;
for (i = 1; i <= n; i++)
{
if (Fdigit == 1 || Fdigit == 1)
{
printf("%d, ", Fdigit);
}
next = f1 + f2;
f1 = f2;
f2 = next;
Fdigit=f2;
while(Fdigit>=10)
{
Fdigit/=10;
}
}
}
/**
* main - random numbers
* Return: last digit
*/
int main(void)
{
printFibonacciNumbers(50);
return (0);
}
