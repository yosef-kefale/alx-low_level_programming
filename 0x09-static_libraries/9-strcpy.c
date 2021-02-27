#include "holberton.h"
/**
*_strcpy - change value using
*
*@dest: stores the input
*@src: integer
*Return: int
*/
char *_strncpy(char *dest, char *src, int n)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}
dest[index++] = '\0';
return (dest);
}
