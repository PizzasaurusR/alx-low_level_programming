#include "main.h"

/**
 * *_memcpy - cpy mem area
 * @src: src mem area
 * @dest: dest mem area
 * @n: num bytes to cpy
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
