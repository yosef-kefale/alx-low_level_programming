#include "holberton.h"
/**
* reverse_array -concatinate string
*
*@a: stores the input
*@n: source
*Return: comp
*/
void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n/2; i++)
{
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
