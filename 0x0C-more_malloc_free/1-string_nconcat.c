#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concat n byte of str to another str
 *
 * @s1: str to append
 * @s2: str to concat
 * @n: num bytes to concat
 *
 * Return: pntr to result str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, l1 = 0, l2 = 0;
	char *str;

	if (!str)
		return (NULL);

	while (s1 && s1[l1])
		l1++;

	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		str = malloc(sizeof(char) * (l1 + n + 1));
	else
		str = malloc(sizeof(char) * (l1 + l2 + 1));

	while (x < l1)
	{
		str[x] = s1[x];
		x++;
	}

	while (n < len2 && x < (l1 + n))
		str[x++] = s2[y++];

	while (n >= l2 && x < (l1 + l2))
		str[x++] = s2[y++];

	str[x] = '\0';

	return (str);
}
