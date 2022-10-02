#include <stdio.h>

/**
 * main - program that prints its name, \n
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
