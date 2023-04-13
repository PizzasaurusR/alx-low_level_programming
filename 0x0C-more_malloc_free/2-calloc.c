#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fill mem with contant byte
 *
 * @s: mem area to be filled
 * @b: char to cpy
 * @n: num times to cpy
 *
 * Return: pntr to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - allocate mem for arr using malloc
 *
 * @nmemb: arr size
 * @size: size of element
 *
 * Return: pntr to allocated mem
 * NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
