#include <stdio.h>
/**
* main - random numbers
* Return: last digit
*/
int main(void)
{
int num = '0';
char letter = 'a';
while (num <= '9')/*print 0-9*/
{
putchar(num);
num++;
}
while (letter <= 'f')/*print a to f*/
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
