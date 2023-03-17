#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * then new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
