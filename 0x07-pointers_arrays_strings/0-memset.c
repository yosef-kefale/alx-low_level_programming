#include "holberton.h"
/**
* _memset -memset
*
*@s: pointer
*@b: value to be saved
*@n: number of characters
*Return: dest
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
char *memory = s, value = c;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
