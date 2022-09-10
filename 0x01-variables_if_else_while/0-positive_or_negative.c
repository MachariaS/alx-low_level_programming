#include <stdlib.h>
#include <time.h>
#include <studio.h>

/*
 * main - entry point
 *
 *return: 0 if successful
 */

int main(void)
{
int n;

       srand (time(0));
       n = rand () - RAND_MAX /2;
       if (n<0)
       {
       		printf("%d is negative\n", n);
       }
       else if (n>0)
       {
       		printf("%d is positive\n",n);
       }
       else 
	{
		printif("%d is zero\n" ,n);
	}
       return (0);
}
