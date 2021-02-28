#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: length of the argument
 * @argv: string
 * Return: number of arguments
 */
int main(int argc, char __attribute__((__unused__))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
