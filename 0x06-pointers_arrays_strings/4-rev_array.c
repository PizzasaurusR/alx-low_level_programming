#include "main.h"

/**
 * reverse_array - rev arr of int
 * @a: arr to rev
 * @n: number of element sin arr
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
