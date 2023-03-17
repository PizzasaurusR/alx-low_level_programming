#include <stdio.h>

/**
 * main - print all possible 2-digit combos
 * digits must be different
 * print in ascending order
 * only use putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstD, secD;

	for (firstD = 48; firstD <= 56; firstD++)
	{
		for (secD = 49; secD <= 57; secD++)
		{
			if (secD > firstD)
			{
				putchar(firstD);
				putchar(secD);
				if (firstD != 56 || secD != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
