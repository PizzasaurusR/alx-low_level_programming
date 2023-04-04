#include "main.h"

/**
 * *_strspn - get length on prefix substring
 * @s: str to check
 * @accept: prefix substr
 *
 * Return: num bytes of s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, i, y;

	x = 0;

	while (s[x] != '\0')
	{
		i = 0;
		y = 1;

		while (accept[i] != '\0')
		{
			if (s[x] == accept[i])
			{
				y = 0;
				break;
			}
			i++;
		}
		if (y == 1)
		{
			break;
		}
		x++;
	}
	return (x);
}
