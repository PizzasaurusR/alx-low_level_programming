#include "main.h"

/**
 * *_memset - fill memory with constant byte
 * @s: mem to be filled
 * @b: char to cpy
 * @n: how many times to cpy b
 *
 * Return: pointer to mem area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
