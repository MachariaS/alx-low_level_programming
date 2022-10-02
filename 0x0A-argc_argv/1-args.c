#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: count of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
