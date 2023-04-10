#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert str to int
 * @s: str to convert
 *
 * Return: int converted from str
 */
int _atoi(char *s)
{
	int i, j, k, len, l, dgt;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	l = 0;
	dgt = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && l == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dgt = s[i] - '0';
			if (j % 2)
				dgt = -dgt;
			k = k * 10 + dgt;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			l = 0;
		}
		i++;
	}

	if (l == 0)
		return (0);

	return (k);
}

/**
 * main - mul 2 int
 * @argc: num arguments
 * @argv: argument arr
 *
 * Return: answer or 1 if <2 arguments given
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		num = (_atoi(argv[1]) * _atoi(argv[2]));
		printf("%d\n", num);
	}

	return (0);
}
