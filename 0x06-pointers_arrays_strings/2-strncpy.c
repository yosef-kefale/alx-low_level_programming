#include "holberton.h"
/**
* _strncpy -concatinate string
*
*@dest: stores the input
*@src: source
*@n: number of characters
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
if (dest == NULL)
return NULL;
else
{
for (i = 0; i <= n; i++)
{
dest[i] = temp[j];
j++;
}
//dest[i] = '\0';
return (dest);
}
}
