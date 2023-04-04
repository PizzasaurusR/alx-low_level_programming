#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - search str for new set on bytes
 * @s: str to check
 * @accept: str with new bytes to check
 *
 * Return: if match - pointer to match
 * else - null
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	x = 0;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
