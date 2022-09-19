#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, \n
 * @r: string in reverse 
 * Return: 0
 */
void print_rev(char *r)
{
	int lenght = strlen(r);

	while (lenght--)
		_putchar(*(r + lenght));
	putchar('\n');
}
