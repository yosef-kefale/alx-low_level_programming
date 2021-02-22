#include "holberton.h"
/**
* _memcpy -memset
*
*@src: source
*@dest: destination
*@n: number of characters
*Return: dest
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
if (s[index] == 'c')
{
return (s[index]);
}
else
{
return (NULL);
}
}
