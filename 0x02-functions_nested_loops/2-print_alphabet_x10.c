#include "main.h"
/**
 * print_alphabet_x10 - start of program
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char i, j; 

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
