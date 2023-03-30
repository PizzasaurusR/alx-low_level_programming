#include "main.h"

/**
 * _strncat - concat n bytes from one str to another
 * @dest: str to append
 * @src: source str
 * @n: number of bytes to concat
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i++] = src[j];
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
