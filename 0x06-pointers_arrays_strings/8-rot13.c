#include "holberton.h"
#define ROT 13
/**
* rot13 -concatinate string
*
*@c: stores the input
*Return: uppercase string
*/
char *rot13(char *c)
{
int e;
	while((c=getchar())!=EOF)
	{
		if(c >='A' && c <='Z')
		{
			if((e = c + ROT) <= 'Z')
				putchar(e);
			else
			{
				   e = c - ROT;
				putchar(e);
			}
		}
		else if(c >='a' && c <='z')
		{
			if((e= c + ROT) <= 'z')
				putchar(e);
			else
			{
				e = c - ROT;
				putchar(e);
			}
		}
		else
			putchar(c);
	}

return (c);
}
