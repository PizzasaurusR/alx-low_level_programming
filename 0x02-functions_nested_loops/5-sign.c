#include "main.h"
/**
 * print_sign - checks n
 * return 1 if positve
 * ruturn 0 if 0
 * return -1 if negative
 * @n: is an int
 *
 * Return: 1, 0, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
