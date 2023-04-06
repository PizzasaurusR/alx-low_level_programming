#include "main.h"

/**
 * nat_sqrt_recursion - recurse to find nat sqrt of int
 * @n: int
 * @posSqrt: possible sqrt
 *
 * Return: sqrt
 */

int nat_sqrt_recursion(int n, int posSqrt)
{
	if (posSqrt * posSqrt == n)
	{
		return (posSqrt);
	}
	else if (posSqrt * posSqrt > n || posSqrt * posSqrt < n)
	{
		return (-1);
	}
	return (nat_sqrt_recursion(n, posSqrt + 1));
}

/**
 * _sqrt_recursion - return nat sqrt of int
 * @n: int
 *
 * Return:  nat sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (nat_sqrt_recursion(n, 0));
}
