#include "main.h"
/**
 * print_times_table - prints times table
 * @n:  is an int
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, col, mult;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				mult = row * col;

				if (col == 0)
					_putchar('0');
				else if (mult < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult % 10 + '0');
				}
				else if (mult >= 10 && mult < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) % 10 + '0');
					_putchar(mult % 10 + '0');
				}
				else if (mult > 99 && mult < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(mult / 100 + '0');
					_putchar((mult / 10) % 10 + '0');
					_putchar(mult % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
