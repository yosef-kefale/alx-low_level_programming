#include "holberton.h"
/**
* _strchr -check character in a string
*
*@s: source
*@c: character
*Return: pointer
*/
char *_strchr(char *s, char c)
{
int index;
int i;
while (s[i] != '\0')
{
i++;
}
for (index = 0; index < i; index++)
if (s[index] == c)
{
return (s[index]);
}
else
{
return ('\0');
}
}
