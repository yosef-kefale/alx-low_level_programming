#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int num1, i, j,counter;
int coin[4];
i = 0;
coin[0]=25;
coin[1]=10;
coin[2]=5;
coin[3]=2;
coin[4]=1;
counter = 0;
if (argc > 2) {
		printf("Error\n");
		return(1);
	}
else{
    num1 = atoi(argv[1]);
    for (j=0;j<=4;j++)
        {
            while ((num1 / coin[i])> num1)
            {
            num1 = num1 /coin[i];
            counter ++;
            }
        }
  printf("%d/n",counter);
    }
  return (0);
}

