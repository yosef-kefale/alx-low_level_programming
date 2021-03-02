#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* str_concat - concatinate string
* @s1: first string
* @s2: second string
* @c: concatinate of strings
*Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
int str_size;
int i;
int j;
int k;
char *dup;
str_size = 0;
j = 0;
k = 0;
if (s1 == 0 && s2 == 0)
return (0);
while (s1[str_size] != '\0')
{
str_size++;
}
while (s2[j] != '\0')
{
str_size++;
j++;
}
str_size++;
dup = malloc(str_size *sizeof(char));
if (dup == 0)
return (0);
i = 0;
while (s1[i] != '\0')
{
dup[i] = s1[i];
i++;
}
while (s2[k] != '\0')
{
dup[i] = s2[k];
i++;
k++;
}
dup[i] = '\0';
return (dup);
}
