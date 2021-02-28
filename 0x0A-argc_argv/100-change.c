#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int num1,j,i,m,counter,result;
int C[4];
m = 4; 
C[0]=25;
C[1]=10;
C[2]=5;
C[3]=2;
C[4]=1;
counter = 0;
if (argc != 2) {
		printf("Error\n");
		return(1);
	}
else{
    num = atoi(argv[1]);
    for(int i = 0; i<=m-1;i++)
	   {
	      if(C[i] <= num)
	      {
		 int curr_min = minCoin(C, m, num-C[i])
		 if(curr_min != INT_MAX && curr_min + 1 < min)
		   min = curr_min + 1
	      }
	   }
  }
	  printf("%d",min);
  return (0);
}

