#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate mem using malloc
 * @b: num bytes to allocate
 *
 * Return: poniter to allocated mem
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
