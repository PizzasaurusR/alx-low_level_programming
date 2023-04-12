#include <stdlib.h>
#include "main.h"

/**
 * argstostr -concat all arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: pointer to new str
 *         or NULL if error
*/

char *argstostr(int ac, char **av)
{
	int x, y, z, len;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			len++;
		}
		len++;
	}

	s = malloc((len + 1) * sizeof(char));
	
	if (s == NULL)
	{
		return (NULL);
	}

	z = 0;
	
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		s[z] = '\n';
		z++;
	}
	s[z] = '\0';

	return (s);
}
