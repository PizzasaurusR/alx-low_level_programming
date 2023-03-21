#include "main.h"
/**
 * _islower - check for lowercase letter
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
