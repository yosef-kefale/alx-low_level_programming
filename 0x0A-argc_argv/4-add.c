#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two numbers
 * @argc:int
 * @argv:array of strings
 * Return: sum if all digits
 */
int main(int argc, char *argv[])
{
int i;
int j;
int num;
int sum;
char *s;
sum = 0;
num = 0;
i = 1;
while (i < argc)
{
s = argv[i];
j = 0;
while (s[j] != '\0')
{
if (s[j] < '0' || s[j] > '9')
{
printf("Error\n");
return (1);
}
j++;
}
i++;
}
for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);
sum = sum + num;
}
printf("%d\n", sum);
return (0);
}
