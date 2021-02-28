#include <stdio.h>
/**
 * main - multiply two arguments
 * @argc: length of the argument
 * @argv: string
 * Return: multiply result
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
int mul;
if (isdigit(argv[1] == false || isdigit(argv[2] == false)
{
printf("Error\n");
return (1);
}
else
{
mul = argv[1] * argv[2];
printf("%d\n", mul);
}
return (0);
}
