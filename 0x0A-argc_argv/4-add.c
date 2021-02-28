#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array of strings
 * Return: sum
 */
using namespace std;
bool isNumeric(char *argv[], int argc) {
   for int (i = 1; i < argc; i++)
      if (isdigit(argv[i]) == false)
      return false; //when one non numeric value is found, return false
   return true;
}
int main(int argc, char *argv[])
{
  int sum;
  if (isNumeric(char *argv[],int argc) == false)
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
