#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
char r[1000];
int begin;
int end;
int count;
count = 0;
while (s[count] != '\0')
count++;
end = count - 1;
for (begin = 0; begin < count; begin++) {
r[begin] = s[end];
s[i] = r[i];
end--;
}
r[begin] = '\0';
}
