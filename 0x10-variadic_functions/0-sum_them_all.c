#include <stdio.h>
#include <stdarg.h>
/**
*sum_them_all - sum of all parameters
*@n: number of parameters
*Return: sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
double sum = 0.0;
int i;
va_start(valist, num);
for (i = 0; i < num; i++) {
sum += va_arg(valist, int);
}
va_end(valist);
return sum;
}
