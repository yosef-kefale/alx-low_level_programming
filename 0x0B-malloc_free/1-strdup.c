#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - point new allocated pointer
* @str: string
* Return: pointer
*/
char *_strdup(char *str)
{
int str_size;
int i;
char *dup;
while (str != '\0')
{
str_size++;
}
dup = (char *)malloc(sizeof(char) * str_size + 1);
if (dup == NULL)
return ((char *)NULL);

while (str[i] != '\0')
{
dup[i] = str[i];
i++;
}
*dup = '\0';
return (dup);
}
