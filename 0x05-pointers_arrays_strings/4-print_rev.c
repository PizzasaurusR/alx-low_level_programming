#include "main.h"

/**
 * _puts - print str in reverse
 * then new line
 * @s: str to be reversed
 */

void print_rev(char *s)
{
	int a, b, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
