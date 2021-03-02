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
if (str == 0)
return (0);
while (str != '\0')
{
str_size++;
}
dup = malloc(str_size * sizeof(char));
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
