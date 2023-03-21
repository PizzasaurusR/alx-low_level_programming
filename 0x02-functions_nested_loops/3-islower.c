#include "main.h"
/**
 * _islower - checks for lowercase letter
 * @c: ascii char
 *
 * Return: 1 if true, 0 f false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
