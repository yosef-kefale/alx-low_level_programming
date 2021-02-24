#include "holberton.h"
/**
* _strlen_recursion - reverse using recurssion
*
*@s: string
*/
int _strlen_recursion(char *s)
{
 static int length=0;
    if(*s!=NULL)
    {
        length++;
        _strlen_recursion(++s);
    }
    else
    {
        return length;
    }
}
