#include "main.h"

/**
 * _strcat - concatenates 2 str
 * @dest: str to append
 * @src: str to add
 *
 * Return: pointer to resulting dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
/* find size dest array*/
	while (dest[i] != '\0')
		i++;

	/*iterate through src arr without null*/
	for (j = 0; src[j]; j++)
		/*append src[j] to dest[i] & overwrite null*/
		dest[i++] = src[j];

	return (dest);
}
