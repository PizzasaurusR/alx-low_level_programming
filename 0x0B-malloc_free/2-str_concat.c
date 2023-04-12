#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concat 2 str
 *
 * @s1: str 1
 * @s2: str 2
 *
 * Return: pointer to new str
 * Null for error
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int x, y, len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	s = malloc((len1 * sizeof(char)) + (sizeof(char) * (len2 + 1)));

	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++;)
	{
		s[x] = s1[x];
	}

	for (y = 0; s2[y] != '\0'; y++)
	{
		s[x] = s2[y];
		x++;
	}

	s[x] = '\0';

	return (s);
}
