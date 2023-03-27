#include "main.h"

/**
 * swap_int - swap the value of 2 ints
 * @a: pointer for 1st int
 * @b: pointer for 2nd int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
