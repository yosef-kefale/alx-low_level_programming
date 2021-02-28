#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array of strings
 * Return: sum
 */
int isNumeric(char *argv[], int argc)
{
	int i = 0;
   for (i = 1; i < argc; i++)
      if (isdigit(argv[i]) == false)
      return (-1);
   return (1);
}
int main(int argc, char *argv[])
{
  int sum;
  if (isNumeric(char *argv[],int argc) == -1)
  {
  printf("Error\n");
  return (1);
  }
  else
  {
  for int (i = 1; i < argc; i++)
  {
  sum = sum + argv[i];
  }
  }
	printf("%d\n", sum);
	return (0);
}
