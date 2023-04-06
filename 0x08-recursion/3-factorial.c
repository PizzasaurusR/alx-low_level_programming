#include "main.h"

/**
 * factorial - return factorial of int
 * @n: int
 *
 * Return: 0 if n > 0
 * -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
