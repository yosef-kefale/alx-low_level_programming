#include <stdio.h>
/**
* main -checks for upper case
*
* @size: return nothing
* Return: 1 for digit and 0 for else
*/
int main(void)
{
int i;
for(i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
printf("Fizz ");
}
if ((i % 5) == 0)
{
printf("Buzz ");
}
if ((i % 3) == 0 && (i % 5) == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ",i);
}
}
  return (0);
}
