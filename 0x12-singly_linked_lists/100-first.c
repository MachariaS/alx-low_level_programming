#include <stdio.h>

/**
 * b - function that prints '...' before main
 */

void b(void) __attribute__ ((constructor));
void b(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printtf("I bore my house upon my back!\n");
}
