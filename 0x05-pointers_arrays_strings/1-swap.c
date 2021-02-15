#include "holberton.h"
/**
* swap_int -change value using the pointer address
*
*@a: stores the input
*@b: stores the input
*/
void swap_int(int *a, int *b)
{
int Tempa;
int Tempb;
Tempa = *a;
Tempb = *b;
*a = Tempb;
*b = Tempa;
}
