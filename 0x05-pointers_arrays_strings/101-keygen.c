#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 * Return: generated password
 */

int main(void)
{
	char j;
	int i;

	srand(time(0));
	while (i <= 2645)
	{
		j = rand() % 128;
		i += j;
		putchar(j);
	}
	putchar(2772 - x);
	return (0);
}
