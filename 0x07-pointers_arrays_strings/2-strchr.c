#include "main.h"

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
	while (*s != '\0')
	{
		*s++;
		if (*s == c)
		{
			return (s - 1);
		}
		else if (*s == '\0')
		{
			return (NULL);
		}
	}
}
