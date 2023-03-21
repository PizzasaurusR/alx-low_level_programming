#include "main.h"

/**
 * main - print the alphabet in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char l = 'a';
	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
