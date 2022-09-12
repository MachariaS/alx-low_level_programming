#include <stdio.h>
/**
 * main -entry point of the program
 *
 * Description: program that prints all possible
 * different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int n, i;

	for (n = '0'; i < '9'; n++)
	{
		for (i = n + 1; i <= '9'; i++)
		{
			if (i != n)
			{
				putchar(n);
				putchar(i);

				if (n == '8' && i == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
