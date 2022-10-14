#include "variadic_functions.h"
#include <stdio.h>

/**
 *  print_numbers - a function that prints numbers,\n
 * @separator: string to be printed between numbers
 * @n: number of intergers to be passed to a function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
