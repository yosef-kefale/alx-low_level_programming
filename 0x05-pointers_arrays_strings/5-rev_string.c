#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
int i;
int halflength;
int last_pos;
char *temp = s;
int length = 0;
while (*temp != '\0')
{
length++;
temp++;
}
last_pos = length - 1;
halflength = length / 2;
for (i = 0; i < halflength; i++)
{
char tmp = s[i];
s[i] = s[last_pos - i];
s[last_pos - i] = tmp;
}
}
