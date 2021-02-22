#include "holberton.h"
/**
* _memcpy -memset
*
*@src: source
*@dest: destination
*@n: number of characters
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
char *memory = src, value = n;
for (index = 0; index < n; index++)
dest[index] = memory[index];
return (dest);
}
