#include <stdio.h>
/**
 * main - starting point
 *
 * Description: prints single digit numbers of base 10 starting from 0,\n
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
