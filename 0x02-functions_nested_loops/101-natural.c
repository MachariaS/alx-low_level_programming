#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description: Print sum of natural numbers
 * below 1024 excluded & are
 * multiplies of 3 or 5
 * Return: Always 0.
 */

int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		j += i;
	}
	printf("%d\n", j);
	return (0);
}
