#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create arr of char
 * initialize with specific char
 *
 * @size: size of arr
 * @c: char to init to
 *
 * Return: Null if arr empty or error,
 * pointer to arr if success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *l;

	if (size == 0)
	{
		return (NULL);
	}

	l = malloc(size * sizeof(char));

	if (l == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		l[i] = c;
	}

	return (l);
}
