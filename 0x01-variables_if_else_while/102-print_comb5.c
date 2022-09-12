#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description: program that prints
 * all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int n, i;

	for (n = 0; i <= 98; n++)
	{
		for (i = n + 1; i <= 99; i++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');

			if (n == 98 && 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
