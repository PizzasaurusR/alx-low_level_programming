#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * then new line. Do not print e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
		putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
