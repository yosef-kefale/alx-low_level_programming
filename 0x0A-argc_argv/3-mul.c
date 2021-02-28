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

if(argv[1] != (int)argv[2] )
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
