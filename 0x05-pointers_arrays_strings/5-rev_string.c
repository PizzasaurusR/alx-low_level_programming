#include "main.h"

/**
 * rev_string - reverses a str
 * @s: str to reverse
 */

void rev_string(char *s)
{
	char temp_str;
	int i, len, temp_len;

	len = 0;
	temp_len = 0;

	while (s[len] != '\0')
	{
		i++;
	}

	temp_len = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp_len = s[i];
		s[i] = s[temp_len];
		s[temp_len--] = tmp;
	}
}
