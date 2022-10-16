#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: pointer to char
 * @f: pointer to function that returns nothing
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
