#include "3-calc.h"

/**
 * op_add - add 2 ints
 * @a: int 1
 * @b: int 2
 *
 * Return: sum a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 ints
 * @a: int 1
 * @b: int 2
 *
 * Return: difference a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 ints
 * @a: int 1
 * @b:int 2
 *
 * Return: product a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 ints
 * @a: int 1
 * @b: int 2
 *
 * Return: division a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of division of 2 ints
 * @a: int 1
 * @b: in 2
 *
 * Return: remainder of a divided b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
