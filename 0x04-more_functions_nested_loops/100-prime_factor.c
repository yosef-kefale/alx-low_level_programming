#include<stdio.h>
#include<math.h>
main() {
int n;
int i;
int max;
max = -1;
n = 612852475143;
while(n % 2 == 0) {
max = 2;
n = n/2; //reduce n by dividing this by 2
}
for(i = 3; i <= sqrt(n); i = i + 2)
{
while(n % i == 0)
{
max = i;
n = n/i;
}
}
if(n > 2)
{
max = n;
}
return max;
printf("%d", max);
}
