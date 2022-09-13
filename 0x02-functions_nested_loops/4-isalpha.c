#include "main.h"

/**
 * _isalpha - function to check if i is a letter, lowercase or uppercase
 *
 * @i: is the in place of the alphabets
 * Return: 0
 */

int _isalpha(int i)
{
	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
