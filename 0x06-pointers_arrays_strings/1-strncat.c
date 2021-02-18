#include "holberton.h"
/**
* _strcat -change value using the pointer address
*
*@dest: stores the input
*@src: source
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
