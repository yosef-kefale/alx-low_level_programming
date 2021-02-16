#include "holberton.h"
/**
* _strcpy -copy values from pointer to pointer
*
*@dest: stores the input
*@drc:stores the input
*/
char *_strcpy(char *dest, char *src)
{
while(*src != '\0')
{
char *ptrdest = dest;
*dest = *src; 
src++; 
dest++; 
} 
*dest = '\0'; 
return (*ptrdest);
}
