#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
   char str[1000];
  char r[1000];
   int begin;
  int end;
  int count = 0;
  str = &s;
   while (str[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = str[end];
      end--;
   }

   r[begin] = '\0';

   s = r;
}
