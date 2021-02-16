#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
char *temp;
*temp = s;
int length = 0;
while (*temp != '\0')
{
length++;
temp++;
}
int last_pos = length-1;
for(int i = 0; i < length/2; i++)
{
char tmp = s[i];
s[i] = s[last_pos - i];
s[last_pos - i] = tmp;
}
}
