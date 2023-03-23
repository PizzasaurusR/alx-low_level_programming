#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 * then new line
 */

void more_numbers(void)
{
	int i, j, k;

	for (j = 1; i <= 10; ++j)
	{
		for (k = 0; k <= 14; ++k)
		{
			i = k;
			if (k >= 10)
			{
				_putchar(1 + '0');
				i = k % 10;
			}
			_putchar(i + '0');
		}
	_putchar('\n');
	}
}
