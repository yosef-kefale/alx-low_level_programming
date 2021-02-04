#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
<<<<<<< HEAD
	if (n > 0)
	{
	printf("%d is positive\n", &n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", &n);
	}
	else
	printf("%d is zero\n", &n)
=======
	if(n > 0)
	{
	printf("%d is positive\n" , &n);
	}
	else if ( n < 0 )
	{
	printf("%d is negative\n" , &n);
	}
	else
	printf("%d is zero\n" , &n);
>>>>>>> adf841f9130f6b7c76221454d767c51b5f0a1ace
	return (0);
}
