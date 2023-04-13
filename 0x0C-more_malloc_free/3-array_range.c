#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create arr of int
 * @min: min range of values stored
 * @max: max range of values stored
 *
 * Return: pntr to new arr
 */

int *array_range(int min, int max)
{
	int *p;
	int x, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		p[x] = min++;

	return (p);
}
