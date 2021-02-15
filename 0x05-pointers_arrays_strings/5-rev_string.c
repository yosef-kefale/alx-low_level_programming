#include "holberton.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
int l;
int i; 
char *begin_ptr;
char *end_ptr;
char ch; 
l = strlen(s); 
begin_ptr = s; 
end_ptr = s; 
for (i = 0; i < l - 1; i++) 
end_ptr++;  
for (i = 0; i < l / 2; i++)
{
ch = *end_ptr; 
*end_ptr = *begin_ptr; 
*begin_ptr = ch; 
begin_ptr++; 
end_ptr--; 
}  
} 
