#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print min num coins to
 * give exact change
 * @argc: num arguments
 * @argv: argument arr
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents, numCoins,  change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	change = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (numCoins = 0; numCoins < 5 && cents >= 0; numCoins++)
	{
		while (cents >= coins[numCoins])
		{
			change++;
			cents -= coins[numCoins];
		}
	}

	printf("%d\n", change);

	return (0);
}
