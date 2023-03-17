#include <stdio.h>

/**
 * main - prints all numbers base 16 in lowercase
 * then new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char l;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
