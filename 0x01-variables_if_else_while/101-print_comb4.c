#include <stdio.h>

/**
 * main - print all possible combos of three digits
 * digits must be different
 * only smalest combos
 * only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstD, secD, thirD;
	{
		for (firstD = 48; firstD < 58; firstD++)
		{
			for (secD = 49; secD < 58; secD++)
			{
				for (thirD = 50; thirD < 58; thirD++)
				{
					if (thirD > secD && secD > firstD)
					{
						putchar(firstD);
						putchar(secD);
						putchar(thirD);
						if (firstD != 55 || secD != 56)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
