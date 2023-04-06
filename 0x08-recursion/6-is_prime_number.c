#include "main.h"

/**
 * is_prime - check if int is prime
 * @n: int
 * @checker: checker 
 */

int is_prime(int n, int checker)
{
	if (n % checker == 0 && checker > 0)
	{
		return (0);
	}
	else if (checker == 1)
	{
		return (1);
	}
	return (is_prime(n, checker - 1));
}

/**
 * is_prime_number - chekc if int is prime
 * @n: int
 *
 * Return: 1 if true, 0 if false
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
