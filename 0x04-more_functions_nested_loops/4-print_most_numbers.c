#include "main.h"

/**
 * print_numbers - prints 0-9
 * but not 2 and 4
 * then new line
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
