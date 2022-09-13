#include "main.h"

/**
 * print_last_digit - Prints last digit of i
 *@i: The number in question.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
	last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
