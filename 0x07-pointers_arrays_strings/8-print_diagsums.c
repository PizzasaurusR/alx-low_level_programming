#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of 2 diags
 * of sqr matrix of ints
 * @a: matrix of ints
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, s = 0, s1 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[(size * i) + i];
		s1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", s, s1);
}
