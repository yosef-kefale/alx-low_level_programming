#include "holberton.h"
/**
* print_rev -change value using the pointer address
*
*@s: stores the input
*/
void print_rev(char *s)
{
    int i, j, k;
    char *temp = s;
    char rev[100];
    for(i = 0; temp[i] != '\0'; i++);
    {
        k = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
        rev[j] = temp[k];
        k--;
    }
    _putchar('%s', rev);
  _putchar('\n');
}
