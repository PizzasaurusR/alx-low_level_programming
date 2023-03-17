#include <stdio.h>
/**
 * main - use char to  print numbers base 10 form 0 to 9
 * and then new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for n = 48; n < 58; n++;
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
