#include "main.h"

/**
 * *_strspn - get length on prefix substring
 * @s: str to check
 * @accept: prefix substr
 *
 * Return: num bytes of s from accept
 */

Usigned int _strspn(char *s, char *accept)
{
	int x, i, b;

	x = 0;
	b = 0;

	while (s[x] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[x] == accept[i])
			{
				b++;
				break;
			}

			else if (accept[i++] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
