#include "main.h"

/**
 * *_strpbrk - search str for new set on bytes
 * @s: str to check
 * @accept: str with new bytes to check
 *
 * Return: If match - pointer to match
 * else - null
 */

char *_strpbrk(cahr *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
