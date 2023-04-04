#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locate substr
 * @haystack: str to search in
 * @needle: str to search for
 *
 * Return: pointer to location of start of needle
 * NULL if not found
 */

char *strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (hastack[x + y] != needle[y])
			{
				break;
			}
		}
		if (!needle[y])
		{
			return (haystack[x]);
		}
	}
	return (NULL);
}
