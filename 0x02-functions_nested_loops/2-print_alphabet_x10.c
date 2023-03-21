#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
 * then new line
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char l;
	int i = 0;

	while (i < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
