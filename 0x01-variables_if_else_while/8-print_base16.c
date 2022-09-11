#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase,\n
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar (c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
