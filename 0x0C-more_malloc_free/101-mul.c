#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - check if str has non-digit char
 * @s: str
 *
 * Return: 0 if true, 1 if fals
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - get str len
 * @s: str
 *
 * Return: len
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_error - print error
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply 2 pos int
 * @argc: num of arguments
 * @argv: argument arr
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, l, x, temp, num1, num2, *answer, y = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		print_error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	l = len1 + len2 + 1;
	answer = malloc(sizeof(int) * l);
	if (!answer)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		answer[x] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		temp = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			temp += answer[len1 + len2 + 1] + (num1 * num2);
			answer[len1 + len2 + 1] = temp % 10;
			temp /= 10;
		}
		if (temp > 0)
			answer[len1 + len2 + 1] += temp;
	}
	for (x = 0; x < l - 1; x++)
	{
		if (answer[x])
			y = 1;
		if (y)
			_putchar(answer[x] + '0');
	}
	if (!y)
		_putchar('0');
	_putchar('\n');
	free(answer);
	return (0);
}
