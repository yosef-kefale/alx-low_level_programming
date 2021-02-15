#include "holberton.h"
/**
* _strcpy -copy values from pointer to pointer
*
*@dest: stores the input
*@drc:stores the input
*/
char *_strcpy(char *dest, char *src)
{
char *destpoint;
while(*src)
{
*dest = *src;        
src++;        
dest++;
}    
*dest = '\0';
destpoint = &dest;
return (destpoint);
}
