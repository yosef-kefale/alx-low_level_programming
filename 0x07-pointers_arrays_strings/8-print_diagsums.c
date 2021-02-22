#include "holberton.h"
/**
* print_diagsums -concatinate string
*
*@a: stores the input
*@size: length
*Return: sum
*/
void print_diagsums(int *a, int size)
{
int sum = 0;
int i;
int j;
for (i = 0; i < size; i++)
{ 
for (j = 0; j < size; j++)
{ 
if (i == j) 
sum += a[i][j]; 
} 
}
_putchar("%d",sum);
}
