#include <stdio.h>
/**
 * main - starting point
 *
 * Description: prints the lowercase alphabet in reverse, \n
 * return: 0 if successfull
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
