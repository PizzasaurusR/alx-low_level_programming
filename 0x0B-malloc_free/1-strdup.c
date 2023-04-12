#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copy parameter str
 *
 * @str: str to copy
 *
 * Return: Null if str is Null or insufficient memeory
 * pointer to copied str if succesful
 */

char *_strdup(char *str)
{
	char *cpystr;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	cpystr = malloc((len + 1) * sizeof(char));

	if (cpystr == NULL)
	{
		return (NULL);
	}

	while ((cpystr[i] = str[i]) != '\0')
	{
		i++;
	}

	return (cpystr);
}
