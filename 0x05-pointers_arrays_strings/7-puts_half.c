#include "main.h"

/**
 * puts_half - prints 2nd half of str
 * then new line
 * @str: str to be cut and printed
 */

void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}

	_putcahr('\n');
}
