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
char str2 = c;
if (size == 0)
{
return (NULL);
}
else
{
 char *str;
   Arr = (char *) malloc(size);
   strcpy(str, str2);
   return (str);
}
return (0);
}
