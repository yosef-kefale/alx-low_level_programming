#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num = 10;
while(num > 0)
{
int mod = num % 10;
printf(mod);
num--; 
}
return 0;
}
