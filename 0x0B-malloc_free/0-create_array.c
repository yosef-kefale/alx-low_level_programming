#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - multiplies two numbers
 * @size: int
 * @c: array of strings
 * Return: pointer 
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
else
{
 char *str;
 int i;
 str = (char *) malloc(size);
 for (i=0;i<=size;i++)
 {
 str[i]=c[i];
 }
   return (str);
}
return (0);
}
