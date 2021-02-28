#include <stdio.h>
/**
 * main - print all the arguments
 * @argc: length of the argument
 * @argv: string
 * Return: name of all arguments
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0;i < argc;i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
