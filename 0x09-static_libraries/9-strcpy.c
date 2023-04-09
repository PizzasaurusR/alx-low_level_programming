#include "main.h"

/**
 * *_strcpy - copies str pointed to by src
 * include terminating null byt ('\0')
 * copy to buffer pointed to by dest
 * @dest: pointer to destination for copy
 * @src: str to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
