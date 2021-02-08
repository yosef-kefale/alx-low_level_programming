#include "holberton.h"
/**
* times_table - calculates time table
*  its mine damnit
*
* Time table.
*/
void times_table(void)
{
for(int i=0;i<=9;i++){
for(int j=0;j<=9;j++){
int table =i*j;
_putchar("%d ",table);
}
_putchar("\n");
}
}
