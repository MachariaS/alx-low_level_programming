#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * Return: 0
 */

int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
