#include "main.h"
/**
 * print_alphabet_x10 - start of program
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (j = '0'; j <= '9'; i++)
	{
		for (i = 'a'; i <= 'z'; j++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
