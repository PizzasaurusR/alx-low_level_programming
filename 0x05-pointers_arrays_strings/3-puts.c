nclude "main.h"

/**
 * _puts - print str to stdout
 * @str: pointer to str
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
