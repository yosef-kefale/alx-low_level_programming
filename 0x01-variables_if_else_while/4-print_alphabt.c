#include <stdio.h>
/**
* main - random numbers
* Return: last digit
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'q' || x != 'e')
{
putchar(x);
}
}
putchar('\n');
return (0);
}
