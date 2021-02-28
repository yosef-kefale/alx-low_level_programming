#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two arguments
 * @argc: length of the argument
 * @argv: string
 * Return: multiply result
 */
int multiply(int n1, int n2)
{
	return n1*n2;
}
int main(int argc, char *argv[])
{
int number1, number2, product;	
if (argc != 3)
{
printf(Error\n");
return (1);
}
number1 = atoi(argv[1]);
number2 = atoi(argv[2]);
product = multiply(number1, number2);
printf("%d",product);      
return (0);
}


