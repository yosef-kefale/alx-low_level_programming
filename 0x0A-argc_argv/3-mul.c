#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array of strings
 * Return: sum
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
