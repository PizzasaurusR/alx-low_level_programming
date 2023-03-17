#include <stdio.h>

/**
 * main - print num pairs from 00-99 with no repeats
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ten;
	int one;
	int ten2;
	int one2;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = '0'; one <= '9'; one++)
		{
		 	for (ten2 = ten; ten2 <= '9'; ten2++)
			{
				for (one2 = one + 1; one2 <= '9'; one2++)
				{
					putchar(ten);
					putchar(one);
					putchar(' ');
					putchar(ten2);
					putchar(one2);

					if (!((ten == '9' && one == '8') &&
					      (ten2 == '9' && one2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				one2 = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
