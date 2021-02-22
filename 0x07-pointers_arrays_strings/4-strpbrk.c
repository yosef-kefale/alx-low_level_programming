#include "holberton.h"
/**
* _strspn -check character in a string
*
*@s: source
*@accept: character
*Return: number of characters
*/
char *_strpbrk(char *s, char *accept)
{
int acceptL;
int sLength;
int i;
int j;
int k;
while (s[i] != '\0')
{
acceptL++;
}
while (accept[i] != '\0')
{
sLength++;
}
for(i = 0 ; i < sLength; i++)
{
for(j = 0; j < acceptL; j++)
{
if(s[i] == accept[j])
{
for(k = i; s[k]!= '\0'; k++)
{
return (s);
}
}
}
}
return (0);
}
