#include "main.h"
#include <stdio.h>

/**
 * *_strchr- locate char in str
 * @c: char to find
 * @s: str to search
 *
 * Return: pointer to first example of char
 * Null if not found
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
		{
			return (s + n);
		}
	}
	return (NULL);
}
