#include "main.h"
/**
 * times_table - prints the 9 time table
 * but actually prints all the times tables
 * it weird I know
 * what you gonna do?
 *
 * Return: void
 */

void times_table(void)
{
	int row, col, mult, ten, one;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			mult = row * col;
			ten = mult / 10;
			one = mult % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(one + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ten + '0');
				_putchar(one + '0');
			}
		}
		_putchar('\n');
	}
}
