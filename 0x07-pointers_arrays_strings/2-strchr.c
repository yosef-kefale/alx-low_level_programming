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
char *memory = s;
while (s[i] != '\0')
{
i++;
}
for (index = 0; index < i; index++)
if (s[index] == c)
{
memory = memory + index;
return (memory);
}
else
{
return ('\0');
}
return (0);
}
