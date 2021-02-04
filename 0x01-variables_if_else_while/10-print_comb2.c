#include <stdio.h>
/**
 *main - Entry point, print 00 to 99 using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
  int x;
  int y;
  for (x = '0'; x <= '9'; x++) /*print tens place*/
  {
    for (y = '0'; y <= '9'; y++) /*print ones place*/
    {
      putchar(x);
      putchar(y);
      if (!(x == '9' && ones == '9')) /*skip comma at end*/
      {
        putchar(',');
        putchar(' ');
      }
    }
  }
  putchar('\n');

  return (0);
}
