#include "main.h"
#include <stdio.h>

/**
 * _abs - function that prints abs value of i
 *
 * @i:  int the argument
 * Return: 0
 */

int _abs(int i)
{
		if (i > 0 || i == 0)
		{
			return (i);
		}
		else
		return (i * -1);
}
