#include "holberton.h"
/**
* cap_string -concatinate string
*
*@str: stores the input
*Return: uppercase string
*/
char *cap_string(char *)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
{
if((str[i]>='a' && str[i]<='z'))
str[i]=str[i]-32;
continue;
}
if(str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
++i;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
else
{
if (str[i] >= 'A' && str[i] <= 'Z')
str[i] = str[i] + 32;
}
}
return (str);
}
