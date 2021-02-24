#include "holberton.h"
/**
* _puts_recursion -recurssion
*
*@s: string
*Return: dest
*/
void _puts_recursion(char *s)
{
 if (*s) 
   { 
       _puts_recursion(s+1); 
       _putchar("%c", *s); 
   } 
}
