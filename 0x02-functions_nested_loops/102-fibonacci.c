#include <stdio.h>
/**
* printFibonacciNumbers - random numbers
* main - mainf
* @n: last digit
*/
void printFibonacciNumbers(int n)
{
int f1;
int f2;
int i;
int next;
f1 = 0;
f2 = 1;
if (n < 1)
return;
printf("%d ", f1);
for (i = 1; i < n; i++)
{
printf("%d ", f2);
next = f1 + f2;
f1 = f2;
f2 = next;
}
}
int main(void)
{
printFibonacciNumbers(7);
return (0);
}
