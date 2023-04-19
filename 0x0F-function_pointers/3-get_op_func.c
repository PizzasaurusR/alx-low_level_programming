#include "3-calc.h"

/**
 * get_op_func - func pntr to get corret operator
 * @s: user operator
 *
 * Return: pntr to correct operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int index = 0;

	while (index < 5)
	{
		if (*s == *ops[index].op)
			return (ops[index].f);
		index++;
	}

	return (NULL);
}
