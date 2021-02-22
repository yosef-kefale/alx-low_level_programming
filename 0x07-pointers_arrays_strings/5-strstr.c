#include "holberton.h"
/**
* _strstr -check character in a string
*
*@haystack: source
*@needle: character
*Return: number of characters
*/
char *_strstr(char *haystack, char *needle)
{
char *start;
for(start = haystack; *start != '\0'; start++)
{
char *p = needle;
char *q = start;
while ( *p != '\0' && *q != '\0' && *p == *q)
{ 
p++;
q++;
}
if (*p == '\0')
{
return (start);
}
}
return (0);
}
