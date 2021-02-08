#include "holberton.h"
/**
* _islower - does my stuff
* @c: user input
*
* return(0): lower
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (0);
}
}
