#include "holberton.h"
/**
* _atoi -change value using the pointer address
*
*@s: stores the input
*Return: res
*/
int _atoi(char *s)
{
int res = 0;
for (int i = 0; s[i] != '\0'; ++i)
res = res * 10 + s[i] - '0';
return (res);
}
