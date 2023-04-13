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
	unsigned int x, y, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	str = (char *) malloc((len1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	
	for (y = 0; y < n && s2[y] != '\0'; y++)
	{
		str[x] = s2[y];
		x++;
	}
	str[x] = '\0';
	return (str);
