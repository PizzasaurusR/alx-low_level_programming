#include <stdio.h>
/**
 * main - use char to  print numbers base 10 form 0 to 9
 * and then new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar("\n");
	return (0);
}
