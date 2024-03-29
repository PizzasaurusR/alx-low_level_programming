#include <unistd.h>

/**
 * _putchar - write char c to stdout
 * @c: char to print
 *
 * Return: 1 on succes.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
