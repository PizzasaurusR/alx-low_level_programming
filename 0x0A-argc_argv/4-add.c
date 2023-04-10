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
 * main - add to pos int
 * @argc: num arguments
 * @argv: argument arr
 *
 * Return: 0 if no number
 * 1 if error
 */

int main(int argc, char *argv[])
{
	int curNum, sum, x, y, z;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("Error\n");

				return (1);
			}
		}
	}

	for (z = 1; z < argc; z++)
	{
		curNum = _atoi(argv[z]);
		if (curNum >= 0)
		{
			sum += curNum;
		}
	}
	}
	printf("%d\n", sum);
	return (0);
}
