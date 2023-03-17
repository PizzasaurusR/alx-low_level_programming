#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * in reverse then new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
