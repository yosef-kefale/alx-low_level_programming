#include "holberton.h"
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char ch;
int i;
i=0;
while(i<10)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
i++;
}
}
_putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
