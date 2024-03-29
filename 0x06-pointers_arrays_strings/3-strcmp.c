#include "main.h"

/**
 * _strcmp - compare 2 str
 * @s1: fisrt str
 * @s2: second str
 *
 * Return: 0 if str =
 * >0 if s1 > s2
 * <0 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
