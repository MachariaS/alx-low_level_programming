#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 * program should print the result of the multiplication, followed by a new line
 * @argc: count of arguments passed to a function
 * @argv: argument that stores the strings in an array of char*
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
		printf("Error\n")
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}
	return (0);
}
