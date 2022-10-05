#include <unistd.h>

/**
 * _putchar - entry point 
 * @c: program character 
 *
 * return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
