#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, \n
 * @r: string in reverse
 * Return: 0
 */
void print_rev(char *r)
{
	int len = strlen(r);

	while (len--)
		putchar(*(r + len));
	putchar('\n');
}
