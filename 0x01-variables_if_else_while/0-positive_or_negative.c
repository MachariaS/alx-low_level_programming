#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - enter into the program
 *
 * Description: using the main function
 * this program prints Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_Max / 2;
		/*your code goes there*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	{
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
